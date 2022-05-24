#版本 名称
cmake_minimum_required(VERSION 3.0)
project(zrpc)
set(CMAKE_BUILD_TYPE "Debug")

#设置可执行文件生成位置
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#设置库文件生成位置
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
#设置头文件搜索路径
include_directories(${PROJECT_SOURCE_DIR}/src/include)
include_directories(${PROJECT_SOURCE_DIR}/example)
#include_directories(${PROJECT_SOURCE_DIR}/test/protobuf)
#设置库文件搜索路径
link_directories(${PROJECT_SOURCE_DIR}/lib)

add_subdirectory(src)
add_subdirectory(example)
#add_subdirectory(test)