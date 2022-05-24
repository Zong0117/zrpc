set(SRC_LIST main.cpp test.pb.cc)
add_executable(test ${SRC_LIST})
target_link_libraries(test protobuf)