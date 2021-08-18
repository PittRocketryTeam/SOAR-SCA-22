CC=protoc
SRC=./src
DST=./generated
_OBJ = chunk.pb.cc command.pb.cc event.pb.cc health.pb.cc orientation.pb.cc
OBJ = $(patsubst %,$(DST)/%,$(_OBJ))

$(DST)/%.pb.cc: $(SRC)/%.proto
	$(CC) -I=$(SRC) --cpp_out=$(DST) $<

cpp: $(OBJ)

.PHONY: clean

clean:
	rm -f $(DST)/*.cc $(DST)/*.h