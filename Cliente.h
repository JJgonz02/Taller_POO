//
// Created by juanj on 30/09/2025.
//

#ifndef TIENDA_CLIENTE_H
#define TIENDA_CLIENTE_H
#include <string>

class Cliente {
private:
    std::string nombre;
public:
    Cliente(std::string nombre);
    std::string getNombre() const;
};

#endif //TIENDA_CLIENTE_H