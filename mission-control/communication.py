#!/usr/bin/python3

import multiprocessing as mp

CMD_UNK = 0
CMD_DAT = 1
CMD_CTL = 2

class Message:
    def __init__(self):
        self.src = ""
        self.dst = ""
        self.command = CMD_UNK
        self.args = ()
        self.echo = False

    def set_echo(self, val):
        self.echo = val


def new_data_msg(obj, src, dst):
    new_msg = Message()
    new_msg.src = src
    new_msg.dst = dst
    new_msg.command = CMD_DAT
    new_msg.args = (obj,)
    return new_msg
