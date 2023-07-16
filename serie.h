// Marco & Alejandro Miloslavich Airola
// 14-07-2023

#include <iostream>
#include "video.h"
#pragma once

class Serie : public Video
{
    // atributos privados
    int episodios;
    int temporadas;

    // metodos publicos
    public:
        // constructores
        Serie(); // por omision
        Serie(std::string, std::string, std::string, std::string, float, int, int, int, int); // constructor sobrecargado

        // destructor
        virtual ~Serie();

        // setters [metodos de modificacion]
        void setEpisodios(int);
        void setTemporadas(int);

        // getters [metdos de acceso]
        int getEpisodios();
        int getTemporadas();

        // metodo para impresion de datos
        std::string muestraDatos(); // polimorfismo
};

Serie::Serie()
{
    episodios = 0;
    temporadas = 0;
}
Serie::Serie(std::string tipoVideo, std::string nombreVideo, std::string genero, std::string clasif, float calificacion, int anioLanzamiento, int episodios, int temporadas, int duracion)
{
    this -> tipoVideo = tipoVideo;
    this -> nombreVideo = nombreVideo;
    this -> genero = genero;
    this -> clasif = clasif;
    this -> calificacion = calificacion;
    this -> anioLanzamiento = anioLanzamiento;
    this -> episodios = episodios;
    this -> temporadas = temporadas;
    this -> duracion = duracion;
}

Serie::~Serie() {} // destructor vacio

void Serie::setEpisodios(int episodios)
{
    this -> episodios = episodios;
}
void Serie::setTemporadas(int temporadas)
{
    this -> temporadas = temporadas;
}

int Serie::getEpisodios()
{
    return episodios;
}
int Serie::getTemporadas()
{
    return temporadas;
}

std::string Serie::muestraDatos()
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
    std::cout << "Episodios: " << episodios << std::endl;
    std::cout << "Temporadas: " << temporadas << std::endl;
    std::cout << "Duracion del video: " << duracion << " mins" << std::endl;
    
    return "";
}