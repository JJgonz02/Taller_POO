#ifndef EJERCICIO_PUBLICACION_H
#define EJERCICIO_PUBLICACION_H

#include <string>
#include <vector>
#include "Comentario.h"

class Usuario;

class Publicacion {
private:
    std::string url;
    std::string descripcion;
    int likes;
    std::vector<Comentario> comentarios;
    const Usuario* autor; // puntero al usuario que creó la publicación

public:
    Publicacion(const std::string& url, const std::string& descripcion, const Usuario* autor);

    void darLike();
    int getLikes() const;

    void agregarComentario(const std::string& texto, const Usuario* autorComentario);
    const std::vector<Comentario>& getComentarios() const;

    void mostrar() const;
    std::string getUrl() const;
    std::string getDescripcion() const;
};

#endif // EJERCICIO_PUBLICACION_H
