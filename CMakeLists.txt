cmake_minimum_required(VERSION 3.16)
project(iz1 C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")
set(CMAKE_C_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")
set(CMAKE_EXE_LINKER_FLAGS "-fprofile-arcs -ftest-coverage")

add_library(Figures STATIC src/process.c src/freemem.c)
target_include_directories(Figures PUBLIC include)

add_executable(iz1 ./src/main.c)
target_link_libraries(iz1 Figures)

add_subdirectory(thirdparty/googletest)
add_executable(test tests/tests.cpp)
target_link_libraries(test Figures gtest ${CMAKE_THREAD_LIBS_INIT})
