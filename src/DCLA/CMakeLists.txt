cmake_minimum_required(VERSION 3.20)

project(DCLA)

add_executable(DCLA
        main.c
        DCLA.c
        DCLA.h
)

target_compile_options(DCLA PUBLIC -Wall -Werror)