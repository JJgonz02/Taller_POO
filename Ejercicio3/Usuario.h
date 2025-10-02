#ifndef EJERCICIO_USUARIO_H
#define EJERCICIO_USUARIO_H

#include <string>
#include <vector>
#include "Publicacion.h"

class Usuario {
private:
    std::string nombreUsuario;
    std::vector<Publicacion> publicaciones;

public:
    Usuario(const std::string& nombre);

    std::string getNombre() const;
    Publicacion& crearPublicacion(const std::string& url, const std::string& descripcion);

    const std::vector<Publicacion>& getPublicaciones() const;
};

#endif // EJERCICIO_USUARIO_H
