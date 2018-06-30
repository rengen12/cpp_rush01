cmake_minimum_required(VERSION 3.9.4)
project(cpprush1)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes)

add_executable(cpprush1
        srcs/main.cpp srcs/modules/Module.cpp srcs/modules/HostnameModule.cpp srcs/modules/OSinfo.cpp includes/OSinfo.hpp srcs/modules/Time.cpp includes/Time.hpp srcs/modules/Cpu.cpp includes/Cpu.hpp srcs/modules/Ram.cpp srcs/modules/Ram.cpp includes/Ram.hpp srcs/modules/Network.cpp includes/Network.hpp srcs/modules/Cat.cpp includes/Cat.hpp)