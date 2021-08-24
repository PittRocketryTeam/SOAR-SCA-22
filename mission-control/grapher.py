#!/usr/bin/python3

import matplotlib.pyplot as plt
import matplotlib.animation as anim
from matplotlib import style

import communication as com
from roles import Service

class Grapher(Service):
    def __init__(self, name="", interval=1):
        Service.__init__(self, name, interval)
        self.fig = None
        self.ax1 = None
        self.xs = []
        self.ys = []

    def setup_callback(self):
        style.use("fivethirtyeight")
        self.fig = plt.figure()
        self.ax1 = self.fig.add_subplot(1,1,1)

    def message_callback(self, msg):
        self.handle_stop_signal(msg)

        if msg.command == com.CMD_DAT:
            if not len(msg.args) == 3:
                return
            
            self.xs.append(float(msg.args(1)))
            self.ys.append(float(msg.args(2)))

            self.ax1.clear()
            self.ax1.plot(xs, ys)
