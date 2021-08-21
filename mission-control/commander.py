#!/usr/bin/python3

from roles import Producer

import tkinter as tk

class Commander(Producer):
    def __init__(self):
        Consumer.__init__(self)
        self.window = tk.Tk() 

    def run(self):
        self.window.mainloop()
    