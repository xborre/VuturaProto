set(GPS_DATA_SERVICE_PROTOS ${CMAKE_CURRENT_SOURCE_DIR}/gps-data.proto)
set(GPS_DATA_OUTPUT_DIR ${OUTPUT_DIR}/vutura/interfaces/gps-data)

file(MAKE_DIRECTORY ${GPS_DATA_OUTPUT_DIR})

set(GPS_DATA_GRPC_SOURCES
        ${GPS_DATA_OUTPUT_DIR}/gps-data.pb.h
        ${GPS_DATA_OUTPUT_DIR}/gps-data.pb.cc)

add_custom_command(
        OUTPUT ${GPS_DATA_GRPC_SOURCES}

        COMMAND $<TARGET_FILE:protobuf::protoc>
        --cpp_out ${GPS_DATA_OUTPUT_DIR}
        --proto_path ${CMAKE_CURRENT_SOURCE_DIR}
        ${GPS_DATA_SERVICE_PROTOS}

        COMMAND $<TARGET_FILE:protobuf::protoc>
        --grpc_out ${GPS_DATA_OUTPUT_DIR}
        --proto_path ${CMAKE_CURRENT_SOURCE_DIR}
        --plugin=protoc-gen-grpc=$<TARGET_FILE:gRPC::grpc_cpp_plugin>
        ${GPS_DATA_SERVICE_PROTOS}

        DEPENDS $<TARGET_FILE:protobuf::protoc> $<TARGET_FILE:gRPC::grpc_cpp_plugin>
        COMMENT "Generating C++ code for GPS-DATA services..."
        VERBATIM
)

set_source_files_properties(${GPS_DATA_GRPC_SOURCES} PROPERTIES GENERATED TRUE)

# Target library
set(TARGET_NAME gps-data)
add_library(${TARGET_NAME} STATIC ${GPS_DATA_GRPC_SOURCES})
add_library(VuturaProto::${TARGET_NAME} ALIAS ${TARGET_NAME})
target_compile_options(${TARGET_NAME}
        PUBLIC -Wno-invalid-offsetof -Wno-unused-parameter -fPIC)
target_include_directories(${TARGET_NAME}
        PUBLIC ${GPS_DATA_OUTPUT_DIR})
target_link_libraries(${TARGET_NAME} PRIVATE gRPC::grpc++)