#!/usr/bin/python3

# libs
import multiprocessing as mp
import sys
import signal

# services
from commander import Commander
from grapher import Grapher
from dummy import Dummy
from roles import Router

# ipc stuff
import communication as com

router = None

def signal_handler(sig, frame):
    # print("received sigint")
    
    # print("send stop signal")
    # stop_all_child_processes(parents)

    # print("waiting for processes to finish")
    # join_all(processes)

    router.shutdown()
    sys.exit(0)

def stop_all_child_processes(pipes):
    msg = com.Message()
    msg.command = com.CMD_CTL
    msg.args = ("STOP",)
    for p in pipes:
        p.send(msg)

def broadcast(msg, pipes):
    for p in pipes:
        p.send(msg)

def join_all(procs):
    for p in procs:
        p.join()

if __name__ == "__main__":
    # print("start main thread")

    # signal.signal(signal.SIGINT, signal_handler)

    # commander = Commander("Commander")
    # parents.append(commander.get_parent_conn())
    # commander_proc = commander.create_proc(())
    # commander_proc.start()
    # processes.append(commander_proc)

    # grapher = Grapher("Grapher")
    # parents.append(grapher.get_parent_conn())
    # grapher_proc = grapher.create_proc(())
    # grapher_proc.start()
    # processes.append(grapher_proc)

    # dummy = Dummy("Dummy")
    # parents.append(dummy.get_parent_conn())
    # dummy_proc = dummy.create_proc(())
    # dummy_proc.start()
    # processes.append(dummy_proc)

    # running = True
    # while running:
    #     for p in parents:
    #         if p.poll(1):
    #             try:
    #                 data = p.recv()
    #                 if data.command == com.CMD_CTL:
    #                     if not len(data.args) == 1:
    #                         continue

    #                     if data.args[0] == "STOP":
    #                         print("main thread received stop signal")
    #                         stop_all_child_processes(parents)
    #                         running = False
    #                 else:
    #                     if len(data.dst) < 1:
    #                         # broadcast packet to all
    #                         broadcast(data)

    #             except IOError:
    #                 continue

    # join_all(processes)

    signal.signal(signal.SIGINT, signal_handler)

    router = Router()
    router.add_and_start_service(Dummy("Dummy"), ())
    router.add_and_start_service(Grapher("Grapher"), ())
    router.add_and_start_service(Commander("Commander"), ())
    router.mainloop()

