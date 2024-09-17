#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main() {
    LibroCalificaciones libro("programación c++");

    cout<<"el libro es "<<libro.getNombreCurso()<<" estudia"<<endl;

    return 0;
}