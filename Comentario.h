#ifndef EJERCICIO_COMENTARIO_H
#define EJERCICIO_COMENTARIO_H

#include <string>

class Usuario;
class Comentario {
private:
    std::string texto;
    const Usuario* autor; // puntero al autor (no poseemos al autor)

public:
    Comentario(const std::string& texto, const Usuario* autor);

    std::string getTexto() const;
    const Usuario* getAutor() const;
};

#endif // EJERCICIO_COMENTARIO_H
