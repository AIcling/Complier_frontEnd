cmake_minimum_required(VERSION 3.16)
project(rdlab2 C)

set(CMAKE_C_STANDARD 99)

link_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_executable(main main.c)
target_link_libraries(main rdlab2)