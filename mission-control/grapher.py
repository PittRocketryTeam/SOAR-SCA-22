#!/usr/bin/python3

import matplotlib.pyplot as plt
import matplotlib.animation as anim
from matplotlib import style

import communication as com

running = True

def mainloop(conn):
    global running

    print("start grapher")

    style.use("fivethirtyeight")

    fig = plt.figure()
    ax1 = fig.add_subplot(1,1,1)
    xs = []
    ys = []

    while running:
        if conn.poll(1):
            try:
                data = conn.recv()
                if data.command == com.CMD_DAT:
                    if not len(data.args) == 3:
                        return
                    
                    xs.append(float(data.args(1)))
                    ys.append(float(data.args(2)))

                    ax1.clear()
                    ax1.plot(xs, ys)

                elif data.command == com.CMD_CTL:
                    if not len(data.args) == 1:
                        return

                    if data.args[0] == "STOP":
                        print("grapher received stop signal")
                        running = False

            except EOFError:
                running = False
    
    print("stop grapher")

