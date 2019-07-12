add_executable(vutura_proto_test)
target_sources(vutura_proto_test
        PRIVATE
            test.cpp)
target_link_libraries(vutura_proto_test
        PRIVATE
            VuturaProto::gps_data_proto
            VuturaProto::lora_obstacles_proto)