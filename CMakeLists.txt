cmake_minimum_required(VERSION 3.14)

#-----------------------------------------------------------------------------------------------------------------------
# General settings
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

project(VuturaProto VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)

message(STATUS "")
message(STATUS "== ${PROJECT_NAME} ==")
message(STATUS "")

find_package(Protobuf CONFIG REQUIRED)
message(STATUS "Using protobuf ${protobuf_VERSION}")

find_package(gRPC CONFIG REQUIRED)
message(STATUS "Using gRPC ${gRPC_VERSION}")

set(OUTPUT_DIR ${CMAKE_CURRENT_BINARY_DIR}/generated)

#-----------------------------------------------------------------------------------------------------------------------
# GPS-DATA
set(GPS_DATA_SERVICE_PROTOS ${CMAKE_CURRENT_SOURCE_DIR}/protobuf/gps-data.proto)
set(GPS_DATA_OUTPUT_DIR ${OUTPUT_DIR}/vutura/proto/gps-data)
file(MAKE_DIRECTORY ${GPS_DATA_OUTPUT_DIR})

set(GPS_DATA_GRPC_SOURCES
        ${GPS_DATA_OUTPUT_DIR}/gps-data.pb.h
        ${GPS_DATA_OUTPUT_DIR}/gps-data.pb.cc
        ${GPS_DATA_OUTPUT_DIR}/gps-data.grpc.pb.h
        ${GPS_DATA_OUTPUT_DIR}/gps-data.grpc.pb.cc)

add_custom_command(
        OUTPUT ${GPS_DATA_GRPC_SOURCES}

        COMMAND $<TARGET_FILE:protobuf::protoc>
        --cpp_out ${GPS_DATA_OUTPUT_DIR}
        --proto_path ${CMAKE_CURRENT_SOURCE_DIR}/protobuf
        ${GPS_DATA_SERVICE_PROTOS}

        COMMAND $<TARGET_FILE:protobuf::protoc>
        --grpc_out ${GPS_DATA_OUTPUT_DIR}
        --proto_path ${CMAKE_CURRENT_SOURCE_DIR}/protobuf
        --plugin=protoc-gen-grpc=$<TARGET_FILE:gRPC::grpc_cpp_plugin>
        ${GPS_DATA_SERVICE_PROTOS}

        DEPENDS $<TARGET_FILE:protobuf::protoc> $<TARGET_FILE:gRPC::grpc_cpp_plugin>
        COMMENT "Generating C++ code for gps-data services..."
        VERBATIM
)

set_source_files_properties(${GPS_DATA_GRPC_SOURCES} PROPERTIES GENERATED TRUE)

# Target
set(TARGET_NAME gps-data)
add_library(${TARGET_NAME} STATIC ${GPS_DATA_GRPC_SOURCES})
add_library(VuturaProto::${TARGET_NAME} ALIAS ${TARGET_NAME})
target_compile_options(${TARGET_NAME}
        PUBLIC -Wno-invalid-offsetof -Wno-unused-parameter -fPIC)
target_include_directories(${TARGET_NAME}
        PUBLIC ${GPS_DATA_OUTPUT_DIR})
target_link_libraries(${TARGET_NAME} PRIVATE gRPC::grpc++)

#-----------------------------------------------------------------------------------------------------------------------
# LORA-OBSTACLES
set(LORA_OBSTACLES_SERVICE_PROTOS ${CMAKE_CURRENT_SOURCE_DIR}/protobuf/lora-obstacles.proto)
set(LORA_OBSTACLES_OUTPUT_DIR ${OUTPUT_DIR}/vutura/proto/lora-obstacles)
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
        --proto_path ${CMAKE_CURRENT_SOURCE_DIR}/protobuf
        ${LORA_OBSTACLES_SERVICE_PROTOS}

        COMMAND $<TARGET_FILE:protobuf::protoc>
        --grpc_out ${LORA_OBSTACLES_OUTPUT_DIR}
        --proto_path ${CMAKE_CURRENT_SOURCE_DIR}/protobuf
        --plugin=protoc-gen-grpc=$<TARGET_FILE:gRPC::grpc_cpp_plugin>
        ${LORA_OBSTACLES_SERVICE_PROTOS}

        DEPENDS $<TARGET_FILE:protobuf::protoc> $<TARGET_FILE:gRPC::grpc_cpp_plugin>
        COMMENT "Generating C++ code for lora-obstacles services"
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