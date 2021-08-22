#!/usr/bin/python3

import communication as com

import threading
import tkinter as tk

window = None
running = True
g_conn = None

def on_close():
    global window
    global running

    print("stopping commander")

    running = False
    window.destroy()

    msg = com.Message()
    msg.command = com.CMD_CTL
    msg.args = ("STOP",)

    g_conn.send(msg)

def gui_thread(conn):
    global window

    window = tk.Tk()
    window.protocol("WM_DELETE_WINDOW", on_close)
    greeting = tk.Label(text="Hello world! This is a long string.")
    greeting.pack()
    window.mainloop()

def mainloop(conn):
    global running
    global g_conn
    g_conn = conn

    print("start commander")
    gui_thr = threading.Thread(target=gui_thread, args=(conn,))
    gui_thr.start()

    while running:
        if conn.poll(1):
            try:
                data = conn.recv()
            except EOFError:
                print("stop commander")
                running = False

    gui_thr.join()