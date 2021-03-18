cmake_minimum_required(VERSION 3.17)
project(iz1 C)

set(CMAKE_C_STANDARD 99)

add_executable(iz1 main.c figures.h process.c process.h freemem.h freemem.c)
target_link_libraries(iz1 m)