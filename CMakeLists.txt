cmake_minimum_required(VERSION 4.0)
project(GestorMusical)

set(CMAKE_CXX_STANDARD 20)

add_executable(GestorMusical main.cpp
        cancion.cpp
        cancion.h)
