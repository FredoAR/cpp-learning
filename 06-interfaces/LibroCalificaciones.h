#include <iostream>
#include <string>

using namespace std;

class LibroCalificaciones
{
private:
    /* data */
    string nombreCurso;
public:
    explicit LibroCalificaciones(string);
    ~LibroCalificaciones();

    void setNombreCurso(string);
    string getNombreCurso() const;
    void mostrarMensaje() const;
};

