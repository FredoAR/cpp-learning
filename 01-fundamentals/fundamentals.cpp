#include <iostream>
using namespace std;

int main()
{
    /* Declaración de tipos de datos */
    string msg = "Hola mundo";
    int num = 3;
    const float pi = 3.141516;
    double myDoubleNum = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean

    /* Imprimir en pantalla, datos de salida */
    cout<<msg<<" dime, "<<num<<" cosas. \n\n";
    
    /* Declaración de variable para capturar datos de entrada */
    string saludo = "";
    cout<<"Dime hola: ";
    cin>>saludo;

    return 0;
}