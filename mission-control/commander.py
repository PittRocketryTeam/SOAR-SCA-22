#!/usr/bin/python3

import communication as com

import threading
import tkinter as tk

from roles import Service

window = None
running = True
g_conn = None

class Commander(Service):
    def __init__(self, name="", interval=1):
        Service.__init__(self, name, interval)
        self.window = None
        self.gui_thread = None

    def gui_thread_on_close(self):
        self.running = False
        self.window.destroy()
        
        msg = self.new_message(com.CMD_CTL, ("STOP",))
        msg.set_echo(True)
        self.conn.send(msg)

    def gui_thread_func(self):
        self.window = tk.Tk()
        self.window.protocol("WM_DELETE_WINDOW", self.gui_thread_on_close)
        greeting = tk.Label(text="Hello world! This is a long string.")
        greeting.pack()
        self.window.mainloop()

    def setup_callback(self):
        self.gui_thread = threading.Thread(target=self.gui_thread_func, args=())
        self.gui_thread.start()

    def message_callback(self, msg):
        self.handle_stop_signal(msg)

    def shutdown_callback(self):
        super().shutdown_callback()
        self.gui_thread.join()
        