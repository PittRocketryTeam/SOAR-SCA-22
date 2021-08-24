#!/usr/bin/python3

# libs
import multiprocessing as mp
import sys
import signal

# services
from commander import Commander
from grapher import Grapher
from dummy import Dummy
from roles import Router

# ipc stuff
import communication as com

router = None

def signal_handler(sig, frame):
    router.shutdown()
    sys.exit(0)

if __name__ == "__main__":
    signal.signal(signal.SIGINT, signal_handler)

    router = Router()
    router.add_and_start_service(Dummy("Dummy"), ())
    router.add_and_start_service(Grapher("Grapher"), ())
    router.add_and_start_service(Commander("Commander"), ())
    router.mainloop()
