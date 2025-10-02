//
// Created by duque on 30/09/2025.
//

#include "cancion.h"

#include <iostream>


Cancion::Cancion(std::string titulo, std::string artista, int duracionSg):
titulo(titulo),artista(artista),duracionSg(duracionSg)
{

}


std::string Cancion::DevolverCancion()
{
    int convertidorMinutos;
    int convetidorSegundos;
    std::string duracion = "";

    //Transformacion de segudos a minutos
    if (duracionSg >= 0)
    {
        convertidorMinutos = duracionSg /60;
        convetidorSegundos = duracionSg % 60;
        duracion= "En minutos son: " + std::to_string(convertidorMinutos)+ " : "+ std::to_string( convetidorSegundos);
    }
    return duracion;
}
void Cancion::MostrarInformacion()
{
    std::cout << "Titulo: " << titulo << std::endl;
    std::cout << "Artista: " << artista << std::endl;
    std::cout << "Duracion en minutos: " << DevolverCancion() << std::endl;

}
