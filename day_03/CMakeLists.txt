cmake_minimum_required(VERSION 3.7)
project(day_03)

set(CMAKE_CXX_STANDARD 11)

AUX_SOURCE_DIRECTORY(ex00 SF_00)
add_executable(ex00 ${SF_00})
AUX_SOURCE_DIRECTORY(ex01 SF_01)
add_executable(ex01 ${SF_01})