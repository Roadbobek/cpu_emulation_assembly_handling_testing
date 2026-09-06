cmake_minimum_required(VERSION 4.2)
project(cpu_emulation_testing C)

set(CMAKE_C_STANDARD 23)

add_executable(cpu_emulation_testing misc/learning_bitwise_operations.c)
