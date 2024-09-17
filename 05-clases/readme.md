# Clases
Las clases se implementan en archivos con extención .h
En la sección public se definen los campos y métodos que se expondran publicamente.

En la sección privada se definen los campos que seran de uso privado, me refiero a los que se usan dentro de la clase sin ser accesibles desde fuera de ella.

Para utilizar la clase desde un archivo en este caso el archivo main
se agrega una referenci a la clase a traves de #include "nombre-clase"
a diferencia de otras librerias/paquetes/modulos que se agregan a traves de include usando "< >" las clase se agregan usando comillas dobles "nombre_clase"

#include es una directiva del preprocessador, son procesadas antes de la compilación de programa, le indica al compilador que debe incluir los recursos necesarios del encabezado por ejemplo: <iostream> un encabezado para incluir operaciones de entrada de datos desde el teclado y salida de datos en pantalla.

#include <nombre> le indica al preprocesador que debe buscar en la biblioteca estandar de C++ 

#include "nombre" le indica al preprocesador que intente localizar el encabezado en el mismo directorio que el archivo en el que aparece la directiva #include (main.cpp). Sino lo encuentra buscara en el directorio de la biblioteca estandar de c++