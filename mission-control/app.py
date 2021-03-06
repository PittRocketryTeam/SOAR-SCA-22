#!/usr/bin/python3

# libs
import multiprocessing as mp
import sys
import signal

# services
from commander import Commander
from dummy import Dummy
from roles import Router
from gnuplotgrapher import Grapher
from groundstation import GroundStation

# ipc stuff
import communication as com

router = None

def signal_handler(sig, frame):
    router.shutdown()
    sys.exit(0)

if __name__ == "__main__":
    signal.signal(signal.SIGINT, signal_handler)

    router = Router()
    router.add_and_start_service(Commander("Commander"), ())
    router.add_and_start_service(Dummy("Dummy"), ())
    router.add_and_start_service(GroundStation("GroundStation", deps=[]), ())
    router.add_and_start_service(Grapher("Grapher", deps=["Dummy"]), ())
    router.mainloop()
