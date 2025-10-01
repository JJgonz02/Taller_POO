//
// Created by juanj on 30/09/2025.
//

#ifndef TIENDA_CARRITO_H
#define TIENDA_CARRITO_H

#include "Cliente.h"
#include "Producto.h"
#include <vector>

class Carrito {
private:
    std::vector<Producto> productos;
    const Cliente* cliente;
public:
    Carrito(const Cliente* cliente);
    void agregarProducto(const Producto& producto);
    void eliminarProducto(const Producto& producto);
    float calcularTotal() const;
    void mostrarDetalle() const;
};

#endif //TIENDA_CARRITO_H