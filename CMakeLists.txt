cmake_minimum_required(VERSION 3.29)
project(you_get_an_a_Ryan_B_Runo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(you_get_an_a_Ryan_B_Runo
        Gradebook.cpp
        Gradebook.h
        Student.h
        Student.cpp)
