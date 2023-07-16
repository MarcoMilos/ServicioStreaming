// Marco & Alejandro Miloslavich Airola
// 14-07-2023

#include <iostream>
#include "video.h"
#pragma once

class Pelicula : public Video
{
    // atributo privado
    std::string nomi;

    // metodos publicos
    public:
        // constructores
        Pelicula(); // por omision
        Pelicula(std::string, std::string, std::string, std::string, float, int, std::string, int); // constructor sobrecargado

        // destructor
        virtual ~Pelicula();

        // setter [metodo de modificacion]
        void setNomi(std::string);

        // getter [metodo de acceso]
        std::string getNomi();

        // metodo para la impresion de datos
        std::string muestraDatos(); // polimorfismo
};

Pelicula::Pelicula()
{
    nomi = " ";
}
Pelicula::Pelicula(std::string tipoVideo, std::string nombreVideo, std::string genero, std::string clasif, float calificacion, int anioLanzamiento, std::string nomi, int duracion)
{
    this -> tipoVideo = tipoVideo;
    this -> nombreVideo = nombreVideo;
    this -> genero = genero;
    this -> clasif = clasif;
    this -> calificacion = calificacion;
    this -> anioLanzamiento = anioLanzamiento;
    this -> nomi = nomi;
    this -> duracion = duracion;
}

Pelicula::~Pelicula() {} // destructor vacio

void Pelicula::setNomi(std::string nomi)
{
    this -> nomi = nomi;
}

std::string Pelicula::getNomi()
{
    return nomi;
}

std::string Pelicula::muestraDatos()
{
    std::cout << "Tipo de video: " << tipoVideo << std::endl;
    std::cout << "Nombre del video: " << nombreVideo << std::endl;
    std::cout << "Genero: " << genero << std::endl;
    std::cout << "Clasificacion: " << clasif << std::endl;

    if (calificacion != 0) // verificamos si la calificacion es diferente de cero, en caso de serlo, se muestre en pantalla, de lo contrario, que no se muestre en pantalla
    {
        std::cout << "Calificacion: " << calificacion << std::endl;
    }

    std::cout << "Anio de Lanzamiento: " << anioLanzamiento << std::endl;
    std::cout << "Nominaciones a: " << nomi << std::endl;
    std::cout << "Duracion del video: " << duracion << " mins" << std::endl;
    
    return "";
}