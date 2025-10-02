#include <iostream>
#include "Usuario.h"
#include "Publicacion.h"
#include "Comentario.h"

int main() {
    Usuario u1("Carlos");
    Usuario u2("Ana");

    Publicacion& p1 = u1.crearPublicacion("foto_playa.jpg", "Disfrutando las vacaciones en la playa");
    p1.agregarComentario("Que bien te ves", &u2);
    p1.darLike();

    std::cout << "===== Publicacion Hehca =====\n";
    p1.mostrar();

    std::cout << "\nListado de publicaciones de " << u1.getNombre() << ":\n";
    for (const auto& pub : u1.getPublicaciones()) {
        std::cout << " - " << pub.getUrl() << " | Likes: " << pub.getLikes() << "\n";
    }
    return 0;
}
