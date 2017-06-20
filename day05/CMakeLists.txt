cmake_minimum_required(VERSION 3.7)
project(day05)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES ex00/main.cpp)
add_executable(day05 ${SOURCE_FILES})
AUX_SOURCE_DIRECTORY(ex00 SF_00)
add_executable(ex00 ${SF_00})