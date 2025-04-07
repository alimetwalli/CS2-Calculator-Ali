cmake_minimum_required(VERSION 3.10)

project(CS2_Calculator_Ali) #Calculator project

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(Calculator
    test.cpp
    calculator.cpp
)