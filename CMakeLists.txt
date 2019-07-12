cmake_minimum_required(VERSION 3.13)

#-----------------------------------------------------------------------------------------------------------------------
# General settings
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

option(BUILD_TEST OFF)

project(VuturaProto VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)

message(STATUS "")
message(STATUS "== ${PROJECT_NAME} ==")
message(STATUS "")

#-----------------------------------------------------------------------------------------------------------------------
# Subdirectories
add_subdirectory(external)
add_subdirectory(source)
if (BUILD_TEST)
    add_subdirectory(test)
endif()