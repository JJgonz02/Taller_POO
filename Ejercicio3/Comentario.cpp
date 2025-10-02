#include "Comentario.h"


Comentario::Comentario(const std::string& texto, const Usuario* autor)
    : texto(texto), autor(autor) {}

std::string Comentario::getTexto() const {
    return texto;
}

const Usuario* Comentario::getAutor() const {
    return autor;
}
