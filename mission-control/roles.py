#!/usr/bin/python3

import multiprocessing as mp

class Producer(mp.Process):
    def __init__(self):
        pass

class Consumer(mp.Process):
    def __init__(self):
        mp.Process.__init__(self)
        self.queue = mp.Queue()