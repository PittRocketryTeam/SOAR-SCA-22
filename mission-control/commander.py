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
        self.root = tk.Frame(self.window)
        self.window.protocol("WM_DELETE_WINDOW", self.gui_thread_on_close)
        
        # status label
        self.status = tk.Label(self.root, text="No status available")
        self.status.grid(row=0, column=0)

        # button panel
        

        # command line
        self.cmd_entry = tk.Entry(self.root, width=20)
        self.cmd_entry.grid(row=0, column=1, columnspan=2, sticky=tk.E+tk.W)

        self.root.pack(fill=tk.BOTH, expand=True)

        self.window.mainloop()

    def setup_callback(self):
        self.gui_thread = threading.Thread(target=self.gui_thread_func, args=())
        self.gui_thread.start()

    def message_callback(self, msg):
        self.handle_stop_signal(msg)

    def shutdown_callback(self):
        super().shutdown_callback()
        self.gui_thread.join()
        