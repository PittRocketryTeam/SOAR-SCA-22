#!/usr/bin/python3

import communication as com
from roles import Service

class Grapher(Service):
    def __init__(self, name="", interval=1):
        Service.__init__(self, name, interval)
        self.fn = "livedata.plt"
        self.xs = [0,]
        self.ys = [0,]

    def setup_callback(self):
        pass

    def message_callback(self, msg):
        self.handle_stop_signal(msg)

        if msg.command == com.CMD_DAT:
            if not len(msg.args) == 1:
                print("bad format")
                return

            pkt = msg.args[0]

    