#!/usr/bin/python3

import matplotlib
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
        self.xs = [0,]
        self.ys = [0,]
        self.plotqueue = []

    def setup_callback(self):
        matplotlib.use("TkAgg")
        style.use("fivethirtyeight")
        self.fig = plt.figure()
        self.ax1 = self.fig.add_subplot(1,1,1)
        timer = self.fig.canvas.new_timer(interval=10)
        timer.add_callback(self.plot_callback)
        timer.start()
        plt.show(block=False)

    def plot_callback(self):
        print("plot")
        while len(self.plotqueue) > 0:
            dat = self.plotqueue.pop()
            self.xs.append(dat[0])
            self.ys.append(dat[1])
            self.ax1.plot(self.xs, self.ys, 'ro')
        
        self.fig.canvas.draw()

        return True

    def message_callback(self, msg):
        self.handle_stop_signal(msg)

        if msg.command == com.CMD_DAT:
            if not len(msg.args) == 1:
                print("bad format")
                return

            pkt = msg.args[0]
            
            self.plotqueue.append((
                float(pkt.vbat),
                float(pkt.tbat)
            ))

            print(pkt)

            self.ax1.relim()
            #self.ax1.clear()
            self.ax1.autoscale_view(True,True,True)
            #self.ax1.plot(self.xs, self.ys)
            self.fig.canvas.draw()
