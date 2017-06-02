cmake_minimum_required(VERSION 3.7)
project(Small)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/Small.cpp src/Functions.cpp src/Functions.h src/Small2.cpp src/longname.cpp src/Collections.cpp)
add_executable(Small ${SOURCE_FILES})