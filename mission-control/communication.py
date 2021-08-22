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