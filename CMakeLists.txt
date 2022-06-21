cmake_minimum_required(VERSION 3.15)
project(Mystl)

set(CMAKE_CXX_STANDARD 14)
set(OUT_DIR ../out_put)
set(EXECUTABLE_OUTPUT_PATH ${OUT_DIR})

add_executable(Mystl main.cpp mystl/List.h)

