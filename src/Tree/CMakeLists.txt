cmake_minimum_required(VERSION 3.20)

project(Tree)

add_executable(Tree
        main.c
        Tree.c
        Tree.h
)

target_compile_options(Tree PUBLIC -Wall -Werror)