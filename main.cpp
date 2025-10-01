#include <iostream>
#include "Cliente.h"
#include "Producto.h"
#include "Carrito.h"

int main() {
    Cliente c1("Juan");
    Carrito miCarrito(&c1);

    Producto p1("Maiz", 5000);
    Producto p2("Jabon", 10000);
    Producto p3("Detergente", 25000);

    miCarrito.agregarProducto(p1);
    miCarrito.agregarProducto(p2);
    miCarrito.agregarProducto(p3);

    miCarrito.mostrarDetalle();

    miCarrito.eliminarProducto(p2);

    miCarrito.mostrarDetalle();

    return 0;

}