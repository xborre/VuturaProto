add_executable(vutura_proto_test)
target_sources(vutura_proto_test
        PRIVATE
            test.cpp)
target_link_libraries(vutura_proto_test
        PRIVATE
            VuturaProto::gps-data
            VuturaProto::lora-obstacles)