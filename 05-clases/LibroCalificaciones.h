// Definición de clase (encabezado) que se agregan en el archivo .cpp principal

#include <iostream>

using namespace std;

class LibroCalificaciones
{
private:
    /* data */
public:
    LibroCalificaciones(/* args */);
    ~LibroCalificaciones();

    void mostrarMensaje() const
    {
        cout<<"Bienvenido al libro"<<endl;        
    }
};

LibroCalificaciones::LibroCalificaciones(/* args */)
{
}

LibroCalificaciones::~LibroCalificaciones()
{
}
