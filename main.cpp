// Marco & Alejandro Miloslavich Airola
// 14-07-2023

#include <iostream>
#include <list>
#include "video.h"
#include "pelicula.h"
#include "serie.h"

int main()
{
    std::list<Video *> Videos;

    Videos.push_back(new Pelicula("Pelicula", "Spider-Man (A traves del Spider Verso)", "Ciencia Ficcion, Accion, Aventura & Animacion", "PG-13", 5, 2023, "Mejor pelicula animada, Mejor sonido, Mejores efectos especiales y mas", 130));
    Videos.push_back(new Pelicula("Pelicula", "El Sorprendente Hombre Arania", "SciFi & Accion", "PG-13", 4.5, 2012, "Mejor pelicula, Mejor actor, Mejor actriz, Mejor villano, Pelicula favorita y mas", 142));
    Videos.push_back(new Pelicula("Pelicula", "Lucy", "SciFi & Accion", "R", 4.3, 2014, "Mejor actriz", 89));
    Videos.push_back(new Pelicula("Pelicula", "Karate Kid", "Cine dramatico & Para toda la familia", "PG", 4.1, 2010, "Mejor pelicula de deportes, Mejor actor, Quimica favorita y mas", 140));
    Videos.push_back(new Serie("Serie", "The Witcher", "Serie dramatica, Basada en libros", "TV-MA", 5, 2019, 21, 3, 67));
    Videos.push_back(new Serie("Serie", "Sandman", "Serie dramatica, De fantasia", "TV-MA", 4.5, 2022, 11, 1, 64));
    Videos.push_back(new Serie("Serie", "Lucifer", "Serie dramatica, Sobre crimenes", "TV-14", 4.4, 2016, 93, 4, 55));

    std::cout << "-------- Peliculas y Series Disponibles --------" << std::endl;
    std::list<Video*>::iterator vids;
    vids = Videos.begin();
    while(vids != Videos.end())
    {
        std::cout << "" << (*vids) -> muestraDatos() << std::endl;

        vids++;
    }

    char opcion;

    // se hace un "do-while" para que siempre se nos muestre en pantalla la posibilidad de seguir escogiendo, con la excepción que, cuando se elija <N>, se deje de repetir
    while (opcion != 'N' || opcion != 'n')
    {
        std::cout << "Desea ver los episodios de alguna serie? [S] Si, [N] No: ";
        std::cin >> opcion;
        if (opcion == 'S' || opcion == 's')
        {
            std::cout << "De cual serie te gustaria ver los episodios disponibles? 1, 2 o 3: ";
            int num;
            std::cin >> num;

            switch (num)
            {
                case 1:
                    std::cout << "---- Serie: The Witcher ----" << std::endl;
                    std::cout << "- Temporada 1:" << std::endl;
                    std::cout << "1. Principio del fin\n2. Cuatro marcos\n3. Luna traicionera\n4. Banquetes, bastardos y entierros\n5. Apetitos incontenibles\n6. Especies raras\n7. Antes de la caida\n8. Mucho mas\n" << std::endl;
                    std::cout << "- Temporada 2:" << std::endl;
                    std::cout << "1. La semilla de la verdad\n2. Kaer Morhen\n3. Perdidas\n4. Servicio secreto de Redania\n5. Decisiones y consecuencias\n6. Querido amigo...\n7. Voleth Meir\n8. Familia\n" << std::endl;
                    std::cout << "- Temporada 3:" << std::endl;
                    std::cout << "1. Shaerrawedd\n2. Rumbos separados\n3. Reencuentros\n4. La invitacion\n5. El arte de la ilusion\n" << std::endl;
                    break;

                case 2:
                    std::cout << "---- Serie: Sandman ----" << std::endl;
                    std::cout << "-Temporada 1:" << std::endl;
                    std::cout << "1. El suenio de los justos\n2. Anfitriones imperfectos\n3. Suenia conmigo\n4. Una esperanza en el infierno\n5. 24 horas\n6. El son de sus alas\n7. La casa de muniecas\n8. Jugar a papas y mamas\n9. Coleccionistas\n10. Corazones perdidos\n11. Un suenio de mil gatos/Caliope\n" << std::endl;
                    break;

                case 3:
                    std::cout << "---- Serie: Lucifer ----" << std::endl;
                    std::cout << "- Temporada 1:" << std::endl;
                    std::cout << "1. Piloto\n2. Quieto, Lucifer. Buen diablo.\n3. El presunto Principe de las Tinieblas\n4. Cosas de hombres\n5. Lindos zapatos\n6. Hijo favorito\n7. Companiero Alado\n8. Et tu, doctor?\n9. Un padre entra a un bar\n10. Papi\n11. San Lucifer\n12. #EquipoLucifer\n13. Regresame al Infierno\n" << std::endl;
                    std::cout << "- Temporada 2:" << std::endl;
                    std::cout << "1. Todo resulta bien para Lucifer\n2. Engania enganiadora, dijo la gran zorra infame\n3. Devorador de pecados\n4. Las senioritas se van\n5. El Exterminador\n6. Monstruo\n7. Mi adorada hija\n8. Al filo de la navaja\n9. Rompehogares\n10. Maldito crimina\n11. La azafata interrumpiendo\n12. Un buen dia para morir\n" << std::endl;
                    std::cout << "- Temporada 3:" << std::endl;
                    std::cout << "1. Han vuelto, cierto?\n2. El que tiene la pequenia zanahoria\n3. Senior y seniora Mazikeen Smith\n4. Que haria Lucifer?\n5. Bienvenida, Charlotte Richards\n6. Las Vegas con un poco de dulce\n7. Extraoficialmente\n8. Chloe se hace Lucifer\n9. El hombre del pecado\n10. El lugar del pecado\n11. Ciudad de angeles?\n" << std::endl;
                    std::cout << "- Temporada 4:" << std::endl;
                    std::cout << "1. Todo esta bien\n2. Alguien ha estado leyendo el infierno de Dante\n3. Hombres de poca fe, padre\n4. Todo por Eva\n5. Con fecha de expiracion\n6. Des-vestido para la orgia\n7. Diablo es el que hace diabluras\n8. El peor novio\n9. Salvar a Lucifer\n10. Quien es el nuevo rey del infierno?\n" << std::endl;
                    std::cout << "- Temporada 5:" << std::endl;
                    std::cout << "1. El principe triste\n2. Lucifer, Lucifer, Lucifer!\n3. Diablo!\n4. Una historia en clave noir\n5. Detective Amenadiel\n6. Carnal\n7. Aprender a compartir\n8. El gemelo maldito\n9. Cena en familia\n10. Karaoke celestial\n11. Por Dios!\n12. Daniel Espinoza, desnudo y aterrado\n13. Vigilancia inofensiva\n" << std::endl;
                    std::cout << "- Temporada 6:" << std::endl;
                    std::cout << "1. Nada nunca cambia aqui\n2. Muchos traumas\n3. Yabadabadu, si!\n4. Adivina quien es tu papi\n5. El asesinato de Lucifer Estrella de la Maniana\n6. Te vas a ensuciar mucho mas que eso\n7. La boda de mi mejor amigo\n8. Salva al diablo, salva al mundo\n9. Adios, Lucifer\n10. Companieros hasta el fin\n" << std::endl;
                    break;

                default:
                    std::cout << "Opcion Invalida! Selecciona alguna de las opciones disponibles (1, 2 o 3)" << std::endl;
            }
        }
        else if (opcion == 'N' || opcion == 'n')
        {
            std::cout << "Perfecto, muchas gracias por ver el catalogo!" << std::endl;
            break;
        }
        else if (opcion != 'S' || opcion != 's' && opcion != 'N' || opcion != 'n')
        {
            // si la respuesta no es ninguna de las opciones mencionadas anteriormente, el programa debera pedirle al usuario que seleccione alguna de las disponibles
            std::cout << "Opcion Invalida! Por favor introduce alguna de las opciones disponibles [S] para Si o [N] para No" << std::endl;
            continue; // se le indica un "continue" para que se regrese al inicio del codigo en caso de no ser la respuesta que se esperaba recibir (en este caso sería <S> o <N>)
        }
    }
        
    char eval; // para que el usuario pueda calificar los videos ("evaluar")

    while (eval != 'S' || eval != 's')
    {
        std::cout << "Desea calificar algun video o serie? [C] calificar, [S] Salir: ";
        char deci; // decision
        std::cin >> eval;
        if (eval == 'C' || eval == 'c')
        {
            std::cout << "Desea calificar una serie o una pelicula? [P] Pelicula, [S] Serie: ";
            std::cin >> deci;
            int peliOpt; // pelicula a calificar
            int serieOpt; // serie a calificar
            if (deci == 'P' || deci == 'p')
            {
                std::cout << "Cual pelicula desea calificar? 1, 2, 3 o 4: ";
                std::cin >> peliOpt;
                int calif; // calificacion para la pelicula declarada
                if (peliOpt == 1)
                {
                    std::cout << "Favor de establecer la calificacion para la primer pelicula: ";
                    std::cin >> calif;
                    Videos.push_back(new Pelicula("Pelicula", "Spider-Man (A traves del Spider Verso)", "Ciencia Ficcion, Accion, Aventura & Animacion", "PG-13", calif, 2023, "Mejor pelicula animada, Mejor sonido, Mejores efectos especiales y mas", 130));
                    continue;
                }
                else if (peliOpt == 2)
                {
                    std::cout << "Favor de establecer la calificacion para la segunda pelicula: ";
                    std::cin >> calif;
                    Videos.push_back(new Pelicula("Pelicula", "El Sorprendente Hombre Arania", "SciFi & Accion", "PG-13", calif, 2012, "Mejor pelicula, Mejor actor, Mejor actriz, Mejor villano, Pelicula favorita y mas", 142));
                    continue;
                }
                else if (peliOpt == 3)
                {
                    std::cout << "Favor de establecer la calificacion para la tercer pelicula: ";
                    std::cin >> calif;
                    Videos.push_back(new Pelicula("Pelicula", "Lucy", "SciFi & Accion", "R", calif, 2014, "Mejor actriz", 89));
                    continue;
                }
                else if (peliOpt == 4)
                {
                    std::cout << "Favor de establecer la calificacion para la cuarta pelicula: ";
                    std::cin >> calif;
                    Videos.push_back(new Pelicula("Pelicula", "Karate Kid", "Cine dramatico & Para toda la familia", "PG", calif, 2010, "Mejor pelicula de deportes, Mejor actor, Quimica favorita y mas", 140));
                    continue;
                }
                else if (peliOpt != 1 && peliOpt != 2 && peliOpt != 3 && peliOpt != 4)
                {
                    std::cout << "Opcion Invalida! Favor de seleccionar de las opciones disponibles [1, 2, 3, 4]" << std::endl;
                    continue;
                }
            }
            else if (deci == 'S' || deci == 's')
            {
                std::cout << "Cual serie desea calificar? 1, 2 o 3: ";
                std::cin >> serieOpt;
                int calif; // calificacion para la serie declarada
                if (serieOpt == 1)
                {
                    std::cout << "Favor de establecer la calificacion para la primera serie: ";
                    std::cin >> calif;
                    Videos.push_back(new Serie("Serie", "The Witcher", "Serie dramatica, Basada en libros", "TV-MA", calif, 2019, 21, 3, 67));
                    continue;
                }
                else if (serieOpt == 2)
                {
                    std::cout << "Favor de establecer la calificacion para la segunda serie: ";
                    std::cin >> calif;
                    Videos.push_back(new Serie("Serie", "Sandman", "Serie dramatica, De fantasia", "TV-MA", calif, 2022, 11, 1, 64));
                    continue;
                }
                else if (serieOpt == 3)
                {
                    std::cout << "Favor de establecer la calificacion para la tercera serie: ";
                    std::cin >> calif;
                    Videos.push_back(new Serie("Serie", "Lucifer", "Serie dramatica, Sobre crimenes", "TV-14", calif, 2016, 93, 4, 55));
                    continue;
                }
                else if (serieOpt != 1 && serieOpt != 2 && serieOpt != 3)
                {
                    std::cout << "Opcion Invalida! Favor de seleccionar de las opciones disponibles [1, 2, 3]" << std::endl;
                    continue;
                }
            }
        }
        else if (eval == 'S' || eval == 's')
        {
            std::cout << "Perfecto! Muchas gracias por brindar tu evaluacion! Nos vemos :)" << std::endl;
            break;
        }
        else if (eval != 'S' || eval != 's' && eval != 'C' || eval != 'c')
        {
            std::cout << "Opcion Invalida! Favor de ingresar de las opciones disponibles [C] Calificar, [S] Salir" << std::endl;
            continue;
        }
    }
    
    return 0;
}