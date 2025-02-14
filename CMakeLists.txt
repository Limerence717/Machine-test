cmake_minimum_required(VERSION 3.28)
project(Machine_test)

set(CMAKE_CXX_STANDARD 14)

add_executable(Machine_test
        main.cpp)

add_executable(demo src/demo.cpp)