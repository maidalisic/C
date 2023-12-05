cmake_minimum_required(VERSION 3.20)

project(SLL)

add_executable(SLL
        main.c
        SLL.c
        SLL.h
)

target_compile_options(SLL PUBLIC -Wall -Werror)
