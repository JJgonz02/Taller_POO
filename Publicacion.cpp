#include "Publicacion.h"
#include "Usuario.h"   // necesitamos el .h para llamar a getNombre() en mostrar()
#include <iostream>

Publicacion::Publicacion(const std::string& url, const std::string& descripcion, const Usuario* autor)
    : url(url), descripcion(descripcion), likes(0), autor(autor) {}

void Publicacion::darLike() {
    likes++;
}

int Publicacion::getLikes() const {
    return likes;
}

void Publicacion::agregarComentario(const std::string& texto, const Usuario* autorComentario) {
    comentarios.emplace_back(texto, autorComentario);
}

const std::vector<Comentario>& Publicacion::getComentarios() const {
    return comentarios;
}

void Publicacion::mostrar() const {
    std::cout << "URL: " << url << "\n";
    std::cout << "Descripcion: " << descripcion << "\n";
    std::cout << "Autor: " << (autor ? autor->getNombre() : "Desconocido") << "\n";
    std::cout << "Likes: " << likes << "\n";
    std::cout << "Comentarios:\n";
    for (const auto& c : comentarios) {
        const Usuario* u = c.getAutor();
        std::string nombre = u ? u->getNombre() : "Desconocido";
        std::cout << " - " << nombre << ": " << c.getTexto() << "\n";
    }
}

std::string Publicacion::getUrl() const { return url; }
std::string Publicacion::getDescripcion() const { return descripcion; }
