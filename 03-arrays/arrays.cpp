#include <iostream>
using namespace std;

int main()
{
    /* Declaración y asignación de array */
    string beers[5];    /* declaración */
    /* asignación */    
    beers[0] = "victoria";
    beers[1] = "leon";

    string myBeers[5] = { "corona", "victoria", "indio", "pacifico", "leon"}; /* declaración y asignación */
    int litros[3] = {1, 3, 5 };
    double precio[2] = {3.1416, 299.99};

    /* Mostrar elementos por inidice */
    cout<<"MyBeers: "<<myBeers[0]<<", "<<myBeers[4]<<"\n";
    cout<<"Litros: "<<litros[2]<<", "<<litros[0]<<"\n";
    cout<<"Precio: "<<precio[1]<<"\n";

    cout<<"Mostrar array myBeers: \r\n";

   /* mostrar elementos con estrucutura de control for */
    for (int i = 0; i < 5; i++)
    {
        cout<<"["<<i<<"] "<<myBeers[i]<<"\n";
    }
    
    /* C++ 11 introduce for-each */
    for(string item: myBeers){
        cout<<"- "<<item<<", ";
    }

    /* Tamaño del array, sizeof(array) devuelve el tamaño de un tipo bytes. int = 4 bytes*/
    cout<<"\nSizeOf: "<<sizeof(litros);

    /* Número de elementos en el array. */
    cout<<"\nLength: "<<sizeof(litros) / sizeof(int)<<"\n";


    return 0;
}