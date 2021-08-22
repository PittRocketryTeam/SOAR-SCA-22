#!/usr/bin/python3

import multiprocessing as mp
import sys
import signal

import commander
import grapher
import communication as com

parents = []
processes = []

def signal_handler(sig, frame):
    print("received sigint")
    
    print("send stop signal")
    stop_all_child_processes(parents)

    print("waiting for processes to finish")
    join_all(processes)

    sys.exit(0)

def stop_all_child_processes(pipes):
    msg = com.Message()
    msg.command = com.CMD_CTL
    msg.args = ("STOP",)
    for p in pipes:
        p.send(msg)

def join_all(procs):
    for p in procs:
        p.join()

if __name__ == "__main__":
    print("start main thread")

    signal.signal(signal.SIGINT, signal_handler)

    commander_parent_conn, commander_child_conn = mp.Pipe()
    commander_proc = mp.Process(target=commander.mainloop, args=(commander_child_conn,))
    commander_proc.start()
    parents.append(commander_parent_conn)
    processes.append(commander_proc)

    grapher_parent_conn, grapher_child_conn = mp.Pipe()
    grapher_proc = mp.Process(target=grapher.mainloop, args=(grapher_child_conn,))
    grapher_proc.start()
    parents.append(grapher_parent_conn)
    processes.append(commander_proc)

    running = True
    while running:
        for p in parents:
            if p.poll(1):
                try:
                    data = p.recv()
                    if data.command == com.CMD_CTL:
                        if not len(data.args) == 1:
                            continue

                        if data.args[0] == "STOP":
                            print("main thread received stop signal")
                            stop_all_child_processes(parents)
                            running = False
                except IOError:
                    continue

    join_all(processes)

