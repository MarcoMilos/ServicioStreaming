// Marco & Alejandro Miloslavich Airola
// 14-07-2023

#include <iostream>
#pragma once

class Video
{
    // atributos protegidos
    protected:
        std::string tipoVideo;
        std::string nombreVideo;
        std::string genero;
        std::string clasif; // clasificacion
        float calificacion;
        int anioLanzamiento;
        int duracion;
    // metodos publicos
    public:
        // constructor
        Video(); // por omision
        Video(std::string, std::string, std::string, std::string, float, int, int); // constructor sobrecargado

        // destructor
        virtual ~Video();

        // setters <metodos modificadores>
        void setTipoVideo(std::string);
        void setNombreVideo(std::string);
        void setGenero(std::string);
        void setClasif(std::string);
        void setCalif(float);
        void setAnLanzamiento(int);
        void setDuracion(int);

        // getters <metodos accesores>
        std::string getTipoVideo();
        std::string getNombreVideo();
        std::string getGenero();
        std::string getClasif();
        float getCalif();
        int getAnLanzamiento();
        int getDuracion();

        // metodo para la evaluacion del video
        void calificaVideo(float);

        // metodo para la impresion de datos
        virtual std::string muestraDatos(); // polimorfismo
};

Video::Video()
{
    tipoVideo = " ";
    nombreVideo = " ";
    genero = " ";
    clasif = " ";
    calificacion = 0;
    anioLanzamiento = 0;
    duracion = 0;
}

Video::Video(std::string tipoVideo, std::string nombreVideo, std::string genero, std::string clasif, float calificacion, int anioLanzamiento, int duracion)
{
    this -> tipoVideo = tipoVideo;
    this -> nombreVideo = nombreVideo;
    this -> genero = genero;
    this -> clasif = clasif;
    this -> calificacion = calificacion;
    this -> anioLanzamiento = anioLanzamiento;
    this -> duracion = duracion;
}

Video::~Video() {}

void Video::setTipoVideo(std::string tipoVideo)
{
    this -> tipoVideo = tipoVideo;
}
void Video::setNombreVideo(std::string nombreVideo)
{
    this -> nombreVideo = nombreVideo;
}
void Video::setGenero(std::string genero)
{
    this -> genero = genero;
}
void Video::setClasif(std::string clasif)
{
    this -> clasif = clasif;
}
void Video::setCalif(float calificacion)
{
    this -> calificacion = calificacion;
}
void Video::setAnLanzamiento(int anioLanzamiento)
{
    this -> anioLanzamiento = anioLanzamiento;
}
void Video::setDuracion(int duracion)
{
    this -> duracion = duracion;
}

std::string Video::getTipoVideo()
{
    return tipoVideo;
}
std::string Video::getNombreVideo()
{
    return nombreVideo;
}
std::string Video::getGenero()
{
    return genero;
}
std::string Video::getClasif()
{
    return clasif;
}
float Video::getCalif()
{
    return calificacion;
}
int Video::getAnLanzamiento()
{
    return anioLanzamiento;
}
int Video::getDuracion()
{
    return duracion;
}

void Video::calificaVideo(float calificacion)
{
    this -> calificacion = calificacion;
}

std::string Video::muestraDatos()
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
    std::cout << "Duracion del video: " << duracion << " mins" << std::endl;
    
    return "";
}