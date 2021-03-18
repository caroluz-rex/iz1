cmake_minimum_required(VERSION 3.16)
project(iz1 C)

set(CMAKE_C_STANDARD 99)

add_executable(iz1 src/main.c include/figures.h src/process.c include/process.h include/freemem.h src/freemem.c)
target_link_libraries(iz1 m)