# Clases e interfaces

La definición de una clse puede separarce de la implmentación para no
depender de la implementación, el cliente no requiera saber como funciona
sino saber que es lo que hace.

Al utilizar interfaces el cliente siempre tendra acceso a las operaciones que se describen en la interfaz pero no sabra como se realiza de esta forma se puede mantener la estrucutura del codigo cliente cuando alguna implementación cambie.

La definición de una interfaz de una clase mediante prototipos de funciones se realzia en archivos .h

La implementación de las funciones se realiza en un arhcivo separado .cpp
y requiere referencia a la interfaz: #include "MiInterface.h"

Para consumir la clase implementada se agrega referencia #include "MiInterface.h" en el archivo donde se hara uso de la implementación.

## Compilación
La implementación de la clase .cpp y el archivo main .cpp donde se utiliza la implementación deben compilarce y despues enlazarce.


> Consultar información del compilador para compilar programas con varios archivos.

## Comando de compilación
> g++ -std=c++17 -o main main.cpp LibroCalificaciones.cpp

- -std=c++17: Asegurar que se compila con c++17
- -o main: nombre del archivo ejecutable que se crea al compilar
- main.cpp LibroCalificaciones.cpp archivos incluidos en la compilación

## Comando para ejecutar el .exe
Desde el directorio del programa ejecutar:
> .\main.exe