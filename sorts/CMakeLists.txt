cmake_minimum_required(VERSION 3.14)
project(sorts)

set(CMAKE_CXX_STANDARD 14)

add_executable(sorts main.cpp selection.cpp selection.h insertion.cpp insertion.h bubble.cpp bubble.h)