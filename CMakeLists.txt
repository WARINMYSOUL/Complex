cmake_minimum_required(VERSION 3.25)
project(Complex)

set(CMAKE_CXX_STANDARD 17)

include_directories(scr)

add_subdirectory(scr)
add_subdirectory(tst)
add_subdirectory(lib/googletest)
