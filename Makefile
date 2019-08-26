PROTOS_DIR := ./protobuf
PROTO_FILES := $(shell find $(PROTOS_DIR) -name '*.proto')
SOURCE_DIR := ./protobuf

all: cpp

golang:
	@mkdir -p $(SOURCE_DIR)/go/vutura
	@for x in $(PROTO_FILES); do \
		protoc -I$(PROTOS_DIR) --go_out=plugins=grpc,paths=source_relative:$(SOURCE_DIR)/go/vutura $$x; \
	 done

python:
	@mkdir -p $(SOURCE_DIR)/python
	@for x in $(PROTO_FILES); do \
		python -m grpc_tools.protoc -I$(PROTOS_DIR) --python_out=$(SOURCE_DIR)/python $$x; \
		python -m grpc_tools.protoc -I$(PROTOS_DIR) --grpc_python_out=$(SOURCE_DIR)/python $$x; \
	 done

cpp:
	@mkdir -p $(SOURCE_DIR)/cpp
	@for x in $(PROTO_FILES); do \
		sudo protoc -I$(PROTOS_DIR) --cpp_out=$(SOURCE_DIR)/cpp $$x; \
		sudo protoc -I$(PROTOS_DIR) --grpc_out=$(SOURCE_DIR)/cpp --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` $$x; \
	 done
	
