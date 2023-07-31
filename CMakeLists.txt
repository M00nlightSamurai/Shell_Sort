cmake_minimum_required(VERSION 3.25)
project(Shell_Sort C)

set(CMAKE_C_STANDARD 99)

add_executable(Shell_Sort main.c ShellSort.c ArrayPrint.c)
