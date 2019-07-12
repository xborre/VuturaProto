set(TARGET_NAME gps_data_proto)
set(PROTO_NAME gps-data)

get_filename_component(_PROTO ${PROTO_NAME}.proto ABSOLUTE)
get_filename_component(_PROTO_PATH ${_PROTO} PATH)

set(_PROTO_SOURCES ${CMAKE_CURRENT_BINARY_DIR}/${PROTO_NAME}.pb.cc)
set(_PROTO_HEADERS ${CMAKE_CURRENT_BINARY_DIR}/${PROTO_NAME}.pb.h)
set(_GRPC_SOURCES ${CMAKE_CURRENT_BINARY_DIR}/${PROTO_NAME}.grpc.pb.cc)
set(_GRPC_HEADERS ${CMAKE_CURRENT_BINARY_DIR}/${PROTO_NAME}.grpc.pb.h)


add_custom_command(
        OUTPUT "${_PROTO_SOURCES}" "${_PROTO_HEADERS}" "${_GRPC_SOURCES}" "${_GRPC_HEADERS}"
        COMMAND $<TARGET_FILE:protoc>
        ARGS --grpc_out "${CMAKE_CURRENT_BINARY_DIR}"
        --cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
        -I "${_PROTO_PATH}"
        --plugin=protoc-gen-grpc="$<TARGET_FILE:grpc_cpp_plugin>"
        "${_PROTO}"
        DEPENDS "${_PROTO}")

add_library(${TARGET_NAME} OBJECT)
target_sources(${TARGET_NAME}
        PRIVATE
            ${_PROTO_SOURCES}
            ${_GRPC_SOURCES}
        PUBLIC
            ${_PROTO_HEADERS}
            ${_GRPC_HEADERS})
target_include_directories(${TARGET_NAME}
        PUBLIC
            ${CMAKE_CURRENT_BINARY_DIR})
target_link_libraries(${TARGET_NAME}
        PUBLIC
            grpc++_unsecure
            libprotobuf)

add_library(VuturaProto::${TARGET_NAME} ALIAS ${TARGET_NAME})