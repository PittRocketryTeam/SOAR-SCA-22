#!/usr/bin/python3

import multiprocessing as mp

CMD_UNK = 0
CMD_DAT = 1
CMD_CTL = 2
CMD_RES = 3

class Spinlock:
    def __init__(self, callback, *args):
        self.callback = callback
        self.args = args

    def spinwait(self):
        while not self.callback(*self.args):
            pass

class Message:
    def __init__(self):
        self.src = ""
        self.dst = ""
        self.command = CMD_UNK
        self.args = ()
        self.echo = False

    def set_echo(self, val):
        self.echo = val

def new_ctrl_msg(obj, src, dst):
    new_msg = Message()
    new_msg.src = src
    new_msg.dst = dst
    new_msg.command = CMD_CTL
    new_msg.args = (obj,)
    return new_msg

def new_resp_msg(obj, src, dst):
    new_msg = Message()
    new_msg.src = src
    new_msg.dst = dst
    new_msg.command = CMD_RES
    new_msg.args = (obj,)
    return new_msg

def new_data_msg(obj, src, dst):
    new_msg = Message()
    new_msg.src = src
    new_msg.dst = dst
    new_msg.command = CMD_DAT
    new_msg.args = (obj,)
    return new_msg
