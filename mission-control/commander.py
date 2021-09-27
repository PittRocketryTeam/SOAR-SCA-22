#!/usr/bin/python3

import communication as com

import threading
import tkinter as tk

import actions
from roles import Service

window = None
running = True
g_conn = None

class Commander(Service):
    def __init__(self, name="", interval=1, deps=[]):
        Service.__init__(self, name, interval, deps)
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
        self.window.call('wm', 'attributes', '.', '-topmost', '1')
        self.root = tk.Frame(self.window)
        self.window.protocol("WM_DELETE_WINDOW", self.gui_thread_on_close)

        # button panel

        # mode switch
        self.mode_idle_btn = tk.Button(self.root, text="Mode Idle", anchor=tk.W, command=actions.mode_idle_cb)
        self.mode_idle_btn.grid(row=0, column=0, sticky=tk.E+tk.W, padx=2, pady=2,)

        self.mode_startup_btn = tk.Button(self.root, text="Mode Startup", anchor=tk.W, command=actions.mode_startup_cb)
        self.mode_startup_btn.grid(row=1, column=0, sticky=tk.E+tk.W, padx=2, pady=2,)

        self.mode_go_btn = tk.Button(self.root, text="Mode Go", anchor=tk.W, command=actions.mode_go_cb)
        self.mode_go_btn.grid(row=2, column=0, sticky=tk.E+tk.W, padx=2, pady=2,)

        # logging ctrl
        self.log_start_btn = tk.Button(self.root, text="Log Start", anchor=tk.W, command=actions.log_start_cb)
        self.log_start_btn.grid(row=0, column=1, sticky=tk.E+tk.W, padx=2, pady=2,)

        self.log_stop_btn = tk.Button(self.root, text="Log Stop", anchor=tk.W, command=actions.log_stop_cb)
        self.log_stop_btn.grid(row=1, column=1, sticky=tk.E+tk.W, padx=2, pady=2,)

        self.log_reset_btn = tk.Button(self.root, text="Log Reset", anchor=tk.W, command=actions.log_reset_cb)
        self.log_reset_btn.grid(row=2, column=1, sticky=tk.E+tk.W, padx=2, pady=2,)

        # payload ctrl
        self.payload_arm_btn = tk.Button(self.root, text="Payload Arm", anchor=tk.W, command=actions.payload_arm_cb)
        self.payload_arm_btn.grid(row=0, column=2, sticky=tk.E+tk.W, padx=2, pady=2,)

        self.payload_disarm_btn = tk.Button(self.root, text="Payload Disarm", anchor=tk.W, command=actions.payload_disarm_cb)
        self.payload_disarm_btn.grid(row=1, column=2, sticky=tk.E+tk.W, padx=2, pady=2,)

        self.payload_safe_btn = tk.Button(self.root, text="Payload Safe", anchor=tk.W, command=actions.payload_safe_cb)
        self.payload_safe_btn.grid(row=2, column=2, sticky=tk.E+tk.W, padx=2, pady=2,)

        # command line
        self.sv = tk.StringVar()
        self.sv.trace("w", lambda name, index, mode, sv=self.sv: actions.command_cb(self.sv))
        self.cmd_entry = tk.Entry(self.root, width=20, textvariable=self.sv)
        self.cmd_entry.bind("<Return>", actions.command_send_cb)
        self.cmd_entry.grid(row=3, column=1, columnspan=2, padx=2, pady=2, sticky=tk.E+tk.W)

        # status label
        self.status = tk.Label(self.root, text="No status available")
        self.status.grid(row=3, column=0, padx=2, pady=2,)

        self.root.pack(fill=tk.BOTH, expand=True)

        self.window.mainloop()

    def setup_callback(self):
        self.gui_thread = threading.Thread(target=self.gui_thread_func, args=())
        self.gui_thread.start()

        return True

    def message_callback(self, msg):
        self.handle_stop_signal(msg)

    def shutdown_callback(self):
        super().shutdown_callback()
        self.gui_thread.join()
        
