//
// Created by juanj on 30/09/2025.
//
#include "Producto.h"

Producto::Producto(std::string nombre_producto, float precio)
    : nombre_producto(nombre_producto), precio(precio){
}

// Implementación del getter para el nombre.
std::string Producto::getNombre() const {
    // this-> es opcional aquí, pero clarifica que 'nombre' es un miembro de la clase.
    return this->nombre_producto;
}

// Implementación del getter para el precio.
float Producto::getPrecio() const {
    return this->precio;
}