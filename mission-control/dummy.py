#!/usr/bin/python3

# allows for pb2 imports
import sys
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
    def __init__(self, name="", interval=1):
        Service.__init__(self, name, interval)

    def work_callback(self):
        # send fake packets
        
        pkt = health_pb2.Health()
        self.conn.send(com.new_data_msg(pkt, "Dummy", ""))

        # todo send the rest