cmake_minimum_required(VERSION 3.13)

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

#-----------------------------------------------------------------------------------------------------------------------
# Subdirectories
add_subdirectory(source)
add_subdirectory(test)
