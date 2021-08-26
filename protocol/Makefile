CC=protoc

SRC=./src
DST=./generated/cpp
PYDST=./generated/python
EMDST=./generated/embedded

EMBEDDED_PROTO_DIR = $(shell pwd)/../3rdparty/EmbeddedProto

_OBJ = 	chunk.pb.cc			\
		command.pb.cc		\
		component.pb.cc		\
		event.pb.cc			\
		health.pb.cc		\
		orientation.pb.cc
OBJ = $(patsubst %,$(DST)/%,$(_OBJ))

_PYOBJ =	chunk_pb2.py			\
			command_pb2.py			\
			component_pb2.py		\
			event_pb2.py			\
			health_pb2.py			\
			orientation_pb2.py
PYOBJ = $(patsubst %,$(PYDST)/%,$(_PYOBJ))

_EMOBJ = 	chunk.h			\
			command.h		\
			component.h		\
			event.h			\
			health.h		\
			orientation.h

EMOBJ = $(patsubst %,$(EMDST)/%,$(_EMOBJ))

# compile c++ target
$(DST)/%.pb.cc: $(SRC)/%.proto
	$(CC) -I=$(SRC) --cpp_out=$(DST) $<

# compile python target
$(PYDST)/%_pb2.py: $(SRC)/%.proto
	$(CC) -I=$(SRC) --python_out=$(PYDST) $<

# compile embedded target
$(EMDST)/%.h: $(SRC)/%.proto
	cd $(EMBEDDED_PROTO_DIR) &&	$(CC) --plugin=protoc-gen-eams -I../../protocol/$(SRC) --eams_out=../../protocol/$(EMDST) ../../protocol/$<

# makefile targets
all: python cpp embedded

cpp: $(OBJ)

python: $(PYOBJ)

embedded: $(EMOBJ)

.PHONY: clean

clean:
	rm -f $(DST)/*.cc $(DST)/*.h
	rm -f $(PYDST)/*.py
	rm -f $(EMDST)/*.h