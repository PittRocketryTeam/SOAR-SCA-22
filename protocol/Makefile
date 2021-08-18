CC=protoc

SRC=./src

DST=./generated/cpp
PYDST=./generated/python

_OBJ = chunk.pb.cc command.pb.cc event.pb.cc health.pb.cc orientation.pb.cc
OBJ = $(patsubst %,$(DST)/%,$(_OBJ))

_PYOBJ = chunk_pb2.py command_pb2.py event_pb2.py health_pb2.py orientation_pb2.py
PYOBJ = $(patsubst %,$(PYDST)/%,$(_PYOBJ))

$(DST)/%.pb.cc: $(SRC)/%.proto
	$(CC) -I=$(SRC) --cpp_out=$(DST) $<

$(PYDST)/%_pb2.py: $(SRC)/%.proto
	$(CC) -I=$(SRC) --python_out=$(PYDST) $<

all: python cpp

cpp: $(OBJ)

python: $(PYOBJ)

.PHONY: clean

clean:
	rm -f $(DST)/*.cc $(DST)/*.h
	rm -f $(PYDST)/*.py