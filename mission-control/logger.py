#!/usr/bin/python3

from roles import Service

class Logger(Service):
    def __init__(self, name="", interval=1):
        Service.__init__(name, interval)