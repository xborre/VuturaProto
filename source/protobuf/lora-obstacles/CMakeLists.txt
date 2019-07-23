set(LORA_OBSTACLES_SERVICE_PROTOS ${CMAKE_CURRENT_SOURCE_DIR}/lora-obstacles.proto)
set(LORA_OBSTACLES_OUTPUT_DIR ${OUTPUT_DIR}/vutura/interfaces/lora-obstacles)

file(MAKE_DIRECTORY ${LORA_OBSTACLES_OUTPUT_DIR})

set(LORA_OBSTACLES_GRPC_SOURCES
        ${LORA_OBSTACLES_OUTPUT_DIR}/lora-obstacles.pb.h
        ${LORA_OBSTACLES_OUTPUT_DIR}/lora-obstacles.pb.cc
        ${LORA_OBSTACLES_OUTPUT_DIR}/lora-obstacles.grpc.pb.h
        ${LORA_OBSTACLES_OUTPUT_DIR}/lora-obstacles.grpc.pb.cc)

add_custom_command(
        OUTPUT ${LORA_OBSTACLES_GRPC_SOURCES}

        COMMAND $<TARGET_FILE:protobuf::protoc>
        --cpp_out ${LORA_OBSTACLES_OUTPUT_DIR}
        --proto_path ${CMAKE_CURRENT_SOURCE_DIR}
        ${LORA_OBSTACLES_SERVICE_PROTOS}

        COMMAND $<TARGET_FILE:protobuf::protoc>
        --grpc_out ${LORA_OBSTACLES_OUTPUT_DIR}
        --proto_path ${CMAKE_CURRENT_SOURCE_DIR}
        --plugin=protoc-gen-grpc=$<TARGET_FILE:gRPC::grpc_cpp_plugin>
        ${LORA_OBSTACLES_SERVICE_PROTOS}

        DEPENDS $<TARGET_FILE:protobuf::protoc> $<TARGET_FILE:gRPC::grpc_cpp_plugin>
        COMMENT "Generating C++ code for LORA-OBSTACLES services..."
        VERBATIM
)

set_source_files_properties(${LORA_OBSTACLES_GRPC_SOURCES} PROPERTIES GENERATED TRUE)

# Target library
set(TARGET_NAME lora-obstacles)
add_library(${TARGET_NAME} STATIC ${LORA_OBSTACLES_GRPC_SOURCES})
add_library(VuturaProto::${TARGET_NAME} ALIAS ${TARGET_NAME})
target_compile_options(${TARGET_NAME}
        PUBLIC -Wno-invalid-offsetof -Wno-unused-parameter -fPIC)
target_include_directories(${TARGET_NAME}
        PUBLIC ${LORA_OBSTACLES_OUTPUT_DIR})
target_link_libraries(${TARGET_NAME} PRIVATE gRPC::grpc++)