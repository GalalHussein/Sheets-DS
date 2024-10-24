cmake_minimum_required(VERSION 3.27)
project(sheet_1 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(sheet_1
        main.c
        main.h
        stack.c)
