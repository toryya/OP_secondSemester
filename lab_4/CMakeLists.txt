cmake_minimum_required(VERSION 3.24)
project(lab_4)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab_4 main.cpp Menu.h Menu.cpp Service/Rectangle.h Service/Rectangle.cpp Service/Trapezoid.h Service/Trapezoid.cpp)
