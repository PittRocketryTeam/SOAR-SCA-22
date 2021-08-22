#!/usr/bin/python3

import multiprocessing as mp

def consumer_runner(proc):


class Producer(mp.Process):
    def __init__(self):
        pass

class Consumer(mp.Process):
    def __init__(self):
        mp.Process.__init__(self)
        self.queue = mp.Queue()

    def run(self):
        pass

class Service:
    def __init__(self, conn=None, name="", interval=1):
        self.running = True
        self.conn = conn
        self.interval = interval
        self.name = name

    def setup_callback(self):
        pass

    def message_callback(self, msg):
        pass

    def mainloop(self):
        if self.conn == None:
            return

        self.setup_callback()

        while self.running:
            if self.conn.poll(self.interval):
                try:
                    self.message_callback(self.conn.recv())

                except EOFError:
                    running = False


