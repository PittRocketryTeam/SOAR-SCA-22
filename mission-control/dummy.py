#!/usr/bin/python3

import random

import sys
# allows for pb2 imports
sys.path.insert(1, "../protocol/generated/python")

from roles import Service
import communication as com

# import all protobuf objects
import chunk_pb2
import command_pb2
import event_pb2
import health_pb2
import orientation_pb2

class Dummy(Service):
    def __init__(self, name="", interval=0.1, deps=[]):
        Service.__init__(self, name, interval, deps)

    def work_callback(self):
        # send fake packets
        
        pkt = health_pb2.Health()
        pkt.name = "Health"
        pkt.vbat = random.randint(6000, 7200)
        pkt.vreg = 33
        pkt.isys = 1000
        pkt.tbat = random.randint(12, 80)
        pkt.treg = 70
        pkt.tamb = 40
        pkt.trad = 80
        self.conn.send(com.new_data_msg(pkt, "Dummy", ""))

        # todo send the rest
