include(UpdateSubmodules)

# gRPC Configuration
#set(gRPC_ZLIB_PROVIDER package)
set(gRPC_BUILD_TESTS OFF)
set(protobuf_BUILD_TESTS OFF)

add_subdirectory(grpc EXCLUDE_FROM_ALL)