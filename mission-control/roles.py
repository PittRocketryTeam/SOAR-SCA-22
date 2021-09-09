#!/usr/bin/python3

import multiprocessing as mp

import communication as com

class Router:
    def __init__(self, interval=1):
        self.interval = interval
        self.services = {}
        self.processes = []
        self.parent_conns = []
        self.running = True

    def add_service(self, srv):
        if srv.name in self.services.keys():
            return 1

        self.services[srv.name] = srv
        self.parent_conns.append(srv.get_parent_conn())

    def start_service(self, skey, args):
        if not skey in self.services.keys():
            return 1

        srv = self.services[skey]

        srv_proc = srv.create_proc(args)
        srv_proc.start()
        self.processes.append(srv_proc)

    def add_and_start_service(self, srv, args):
        self.add_service(srv)
        self.start_service(srv.name, args)

    def stop_all_child_processes(self):
        msg = com.Message()
        msg.command = com.CMD_CTL
        msg.args = ("STOP",)
        for p in self.parent_conns:
            p.send(msg)

    def broadcast(self, msg):
        for p in self.parent_conns:
            p.send(msg)

    def join_all(self):
        for p in self.processes:
            p.join()

    def mainloop(self):
        while self.running:
            for p in self.parent_conns:
                if p.poll(self.interval):
                    try:
                        data = p.recv()
                        if data == None:
                            continue
                        if data.command == com.CMD_CTL:
                            if not len(data.args) == 1:
                                # bad command
                                print("bad command")
                                continue

                            if data.args[0] == "STOP":
                                print("main thread received stop signal")
                                self.stop_all_child_processes()
                                self.running = False
                                
                        else:
                            #print(data)
                            if len(data.dst) < 1:
                                # broadcast packet to all
                                self.broadcast(data)
                            
                    except IOError:
                        continue

    def shutdown(self):
        self.stop_all_child_processes()
        self.join_all()
        self.running = False

class Service:
    def __init__(self, name="", interval=1):
        self.running = True
        self.parent_conn, self.conn = mp.Pipe()
        self.interval = interval
        self.name = name

    def create_proc(self, args):
        return mp.Process(target=self.mainloop, args=args, daemon=True)

    def new_message(self, cmd, args):
        msg = com.Message()
        msg.src = self.name
        msg.command = cmd
        msg.args = args
        
        return msg

    def get_parent_conn(self):
        return self.parent_conn

    def setup_callback(self):
        pass

    def message_callback(self, msg):
        self.handle_stop_signal(msg)

    def work_callback(self):
        pass

    def handle_stop_signal(self, msg):
        if msg.command == com.CMD_CTL:
            if not len(msg.args) == 1:
                return
            
            if msg.args[0] == "STOP":
                print(self.name + " received stop signal")
                self.running = False
                self.shutdown_callback()

    def shutdown_callback(self):
        print(self.name + " is shutting down")

    def mainloop(self):
        if self.conn == None:
            return

        self.setup_callback()

        print(self.name + " is starting")

        while self.running:
            self.work_callback()
            if self.conn.poll(self.interval):
                try:
                    msg = self.conn.recv()
                    if not msg.echo and msg.src != self.name:
                        self.message_callback(msg)
                except EOFError:
                    running = False


