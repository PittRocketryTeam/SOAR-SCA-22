#!/usr/bin/python3

import os
import subprocess
import signal
import time

import communication as com
from roles import Service

class Grapher(Service):
    def __init__(self, name="", interval=1):
        Service.__init__(self, name, interval)
        self.gnuplotscript = "liveplot.gnu"
        self.fn = ".datastream"
        self.fp = None
        self.gnuplot_proc = None
        self.xs = [0,]
        self.ys = [0,]
        self.start = time.time() * 1000

    def setup_callback(self):
        self.fp = open(self.fn, "a+")

        os.environ["GNUPLOT_DRIVER_DIR"] = "../3rdparty/bin"
        self.gnuplot_proc = subprocess.Popen(["../3rdparty/bin/gnuplot", "./liveplot.gnu"], env=os.environ.copy())

    def shutdown_callback(self):
        super().shutdown_callback()
        self.fp.close()
        os.remove(self.fn)
        os.kill(self.gnuplot_proc.pid, signal.SIGKILL)

    def message_callback(self, msg):
        self.handle_stop_signal(msg)

        if msg.command == com.CMD_DAT:
            if not len(msg.args) == 1:
                print("bad format")
                return

            pkt = msg.args[0]

            plot = "{} {} {}\n".format(float(time.time() * 1000 - self.start), float(pkt.vbat), float(pkt.tbat))

            self.fp.write(plot)
            self.fp.flush()

    