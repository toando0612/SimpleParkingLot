cmake_minimum_required(VERSION 3.13)
project(Prepare)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Prepare
        LinkedList.cpp
        LinkedList.hpp
        main.cpp
        park.cpp
        park.hpp)
