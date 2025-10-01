//
// Created by juanj on 30/09/2025.
//

#ifndef TIENDA_PRODUCTO_H
#define TIENDA_PRODUCTO_H
#include <string>

class Producto {
private:
    std::string nombre_producto;
    int id_producto;
    float precio;

public:
    // Constructor para inicializar un objeto Producto en un estado válido.
    Producto(std::string nombre_producto, float precio);

    // Métodos públicos (getters) para acceder a los datos privados de forma controlada.
    std::string getNombre() const;
    float getPrecio() const;
};

#endif //TIENDA_PRODUCTO_H