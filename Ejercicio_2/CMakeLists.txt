cmake_minimum_required(VERSION 4.0)
project(Tienda)

set(CMAKE_CXX_STANDARD 20)

add_executable(Tienda main.cpp
        Cliente.h
        Producto.h
        Carrito.h
        Carrito.cpp
        Producto.cpp
        Cliente.cpp)
