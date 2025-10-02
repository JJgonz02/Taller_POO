cmake_minimum_required(VERSION 4.0)
project(EJERCICIO)

set(CMAKE_CXX_STANDARD 20)

add_executable(EJERCICIO main.cpp
        Usuario.cpp
        Usuario.h
        Publicacion.cpp
        Publicacion.h
        Comentario.cpp
        Comentario.h
)
