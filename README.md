# Modelado de Servicio Streaming

Para este proyecto debemos de realizar un servicio de streaming donde se le desplieguen un catálogo de series y películas para el usuario en donde el mismo pueda cambiar la calificación de las mismas y, en caso de así quererlo, poder también ver los episodios de las series enlistadas.

## Clases

* "main.cpp": Dentro de esta clase vamos a tener la inicialización de las demás clases los "push_back" de cada una de las series y películas con sus respectivos datos así como las opciones en donde el usuario pueda indicar si quiere ver los episodios de las series, si quiere calificar algún video (película o serie), poder realizar los cambios y poder observar los mismos solicitando que se vuelvan a desplegar los videos nuevamente.
* "video.h": Esta clase nos ayuda a definir las bases de los datos que se estarán solicitando en las otras dos clases (sin contar los datos específicos de cada clase por separado). Además, se definirá lo de la calificación para que el usuario pueda realizar el cambio que desee.
* "pelicula.h": Aquí es donde definimos el atributo de las "nominaciones" de cada una de las películas. De igual forma, vamos a establecer (nuevamente) el dato para que el usuario pueda hacer el cambio de la calificación a como la prefiera o si decide dejarla como ya está definida por defecto, también poder hacerlo y que aparezca en los datos finales.
* "serie.h": Es en esta clase donde definimos el atributo de los "episodios" y las "temporadas", esto para poder definir (en caso de que sea un video de tipo serie) los episodios y temporadas totales que tiene dicha serie. También, volvemos a establecer lo de la clase "video" de la calificación para que el usuario pueda hacer el cambio (si así lo desea) o dejarlo como ya está establecido.

En resumen, nuestro sistema despliega la información del catálogo de películas y series al usuario para después preguntarle si quiere ver los episodios de alguna de las series. En caso de si querer ver los episodios, el programa le preguntará de qué serie quiere ver los episodios para después desplegárselos. Por otro lado, en caso de que el usuario decida no ver los episodios, únicamente le preguntará si quiere calificar alguno de los videos (serie o película), si el usuario responde [SI], se le preguntará por el video que quiera calificar para cambiar la calificación y que le muestre la nueva una vez pida que se le desplieguen los videos nuevamente. 

En caso de que el usuario tampoco quiera cambiar las calificaciones establecidas por defecto, el programa simplemente terminará y le despliegará un mensaje de agradecimiento para luego terminar.

## Tecnología utilizada

* git y github
* 100% C++
* Uso de herencia: "video.h" para las clases de "pelicula" y "serie" en cuanto a los atributos utilizados dentro de esta clase como "calificacion", entre otras.
* Uso de polimorfismo: "muestraDatos()" para las clases de "pelicula" y "serie" y que se puedan volver a desplegar y modificar los datos que se desplieguen acorde al tipo de video que el usuario esté queriendo ver.
* Uso de apuntadores: En el caso de las clases "pelicula" y "serie" hemos usado los apuntadores para poder hacer las listas de peliculas y series que se le estarán mostrando al usuario en la terminal/consola/pantalla.

## Importante

* El ÚNICO archivo de tipo ".cpp" será el main (para evitarnos cualquier tipo de problema que nos pueda llegar a aparecer creando múltiples archivos .cpp o múltiples archivos .exe).
* Todas las clases DEBEN de ir dentro de "main.cpp" como #include.
* Es necesario conectar nuestro GitHub con el IDE que estamos utilizando (en caso de estar haciendo uso de alguno).