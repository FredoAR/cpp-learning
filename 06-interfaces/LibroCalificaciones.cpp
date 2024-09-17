#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

// Constructor
LibroCalificaciones::LibroCalificaciones(string nombre) : nombreCurso (nombre) {

}

LibroCalificaciones::~LibroCalificaciones() {    // Destructor vac%C3%ADo

}

void LibroCalificaciones::setNombreCurso(string nombre){
    nombreCurso = nombre;
}

string LibroCalificaciones::getNombreCurso() const {
    return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const {
    cout<<"Bienvenido al curso"<<getNombreCurso()<<"!"<<endl;
}