cmake_minimum_required(VERSION 3.20)

project(HelloWorld)

add_executable( HelloWorld
        main.c
)

target_compile_options(HelloWorld PUBLIC -Wall -Werror)
