cmake_minimum_required(VERSION 3.24)
project(lab_3)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab_3 main.cpp main.h Service/App.cpp Service/App.h Service/Triangle.h Service/Triangle.cpp Service/Array.h Service/Array.cpp)
