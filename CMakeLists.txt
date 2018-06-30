cmake_minimum_required(VERSION 3.9.4)
project(cpprush1)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes)

add_executable(cpprush1
        srcs/main.cpp srcs/modules/Module.cpp srcs/modules/HostnameModule.cpp)