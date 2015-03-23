cmake_minimum_required (VERSION 2.6)
project (BinaryTree)

set(CMAKE_CXX_FLAGS "-std=c++0x")
 
include_directories("${PROJECT_SOURCE_DIR}")
 
# add the executable
add_executable(binary_tree main.cpp)
