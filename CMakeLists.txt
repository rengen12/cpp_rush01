cmake_minimum_required(VERSION 3.10)
project(cpprush1)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes)

add_executable(cpprush1 includes/sysmonitor.hpp srcs/main.cpp)