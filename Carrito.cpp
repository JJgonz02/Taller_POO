//
// Created by juanj on 30/09/2025.
//
#include "Carrito.h"
#include <iostream>

Carrito::Carrito(const Cliente *cliente)
    :cliente(cliente){}

void Carrito::agregarProducto(const Producto &producto) {
    this->productos.push_back(producto);
}

void Carrito::eliminarProducto(const Producto &producto) {
    for (auto it = productos.begin(); it != productos.end(); ++it) {
        if (it->getNombre() == producto.getNombre() &&
            it->getPrecio() == producto.getPrecio()) {
            productos.erase(it);
            break; // salimos porque ya eliminamos uno
            }
    }
}

float Carrito::calcularTotal() const {
    float total = 0.0f;
    // Bucle 'range-based for' para sumar los precios de los productos.
    for (const auto& producto : this->productos) {
        total += producto.getPrecio();
    }
    return total;
}
void Carrito::mostrarDetalle() const {
    std::cout << "\n--- Detalle del Carrito #" << std::endl;
    std::cout << "Cliente: " << this->cliente->getNombre() << std::endl;
    std::cout << "Productos:" << std::endl;
    for (const auto& producto : this->productos) {
        std::cout << " - " << producto.getNombre() << "\t$" << producto.getPrecio() << std::endl;
    }
    std::cout << "Total: $" << this->calcularTotal() << std::endl;
    std::cout << "--------------------------" << std::endl;
}