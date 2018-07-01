cmake_minimum_required(VERSION 3.9.4)
project(cpprush1)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes)
include_directories(SFML/include)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -framework sfml-graphics -framework sfml-window -framework sfml-system -F ../SFML/Frameworks")


add_executable(cpprush1
        srcs/main.cpp srcs/modules/Module.cpp srcs/modules/HostnameModule.cpp
        srcs/modules/OSinfoModule.cpp
        srcs/modules/CpuModule.cpp srcs/modules/RamModule.cpp srcs/modules/RamModule.cpp
        srcs/modules/NetworkModule.cpp srcs/modules/CatModule.cpp
        srcs/modules/CatModule.cpp includes/CatModule.hpp srcs/modules/OSinfoModule.cpp
        srcs/modules/DateTimeModule.cpp includes/DateTimeModule.hpp srcs/modules/CpuModule.cpp
        srcs/modules/RamModule.cpp srcs/modules/NetworkModule.cpp srcs/modules/MemRegionsModule.cpp
        srcs/modules/VmModule.cpp
        srcs/modules/DisksModule.cpp srcs/modules/Display.cpp)