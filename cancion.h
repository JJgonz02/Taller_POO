//
// Created by duque on 30/09/2025.
//

#ifndef GESTORMUSICAL_CANCION_H
#define GESTORMUSICAL_CANCION_H
#include <string>

class Cancion{

private:
    std::string titulo;
    std::string artista;
    int duracionSg;

public:
    Cancion(std::string titulo,std::string artista,int duracionSg);
    void MostrarInformacion();
    std::string DevolverCancion();


};


#endif //GESTORMUSICAL_CANCION_H