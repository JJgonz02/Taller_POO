#include "Usuario.h"

Usuario::Usuario(const std::string& nombre) : nombreUsuario(nombre) {}

std::string Usuario::getNombre() const {
    return nombreUsuario;
}

Publicacion& Usuario::crearPublicacion(const std::string& url, const std::string& descripcion) {
    // Creamos la publicación pasando 'this' como autor
    publicaciones.emplace_back(url, descripcion, this);
    return publicaciones.back(); // devolvemos referencia a la recién creada
}

const std::vector<Publicacion>& Usuario::getPublicaciones() const {
    return publicaciones;
}
