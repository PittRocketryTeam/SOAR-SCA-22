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
import hardware

class GroundStation(Service):
    def __init__(self, name="", interval=0.1, deps=[]):
        Service.__init__(self, name, interval, deps)

        self.dev = hardware.Device()
        self.dev.connect()

    def work_callback(self):
        pass

    def message_callback(self, msg):
        pass
