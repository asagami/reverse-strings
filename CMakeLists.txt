cmake_minimum_required(VERSION 3.6)
project(strings)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES  string.c)
add_executable(strings ${SOURCE_FILES} string.c)