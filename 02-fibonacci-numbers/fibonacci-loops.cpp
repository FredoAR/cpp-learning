#include <iostream>
using namespace std;

/* Declaración de funciones o prototipos, se declaran porque en C++ importa el orden en 
que se mandan a llamar las funciones, al definirlas aqui el compilador puede validar que 
se manden llamar correctamente */
void fibonacciWithLoopFor();
void fibonacciWithRecursion(int, int);
int findNthFibonacciNumWithRecursion(int limit);

int count = 0;

int main()
{
    /* 1.- Usando loop: for */
    fibonacciWithLoopFor();
    
    /* 2.- Usando recursion: */
    cout<<"\nfibonacciWithRecursion:\r\n";
    int f1 = 0, f2 = 1;    
    cout<<f1<<", "<<f2;
    count = 2;
    fibonacciWithRecursion(f1, f2);

    /* 3.- Usando fromula de calculo de enesimo numero de fibonacci con recursion: */
    cout<<"\nfindNthFibonacciNumWithRecursion:\r\n";
    int n = 19;
    cout<<findNthFibonacciNumWithRecursion(n);

    return 0;
}

/* Definición de funciones (cuerpo de funciones declaradas/prototipos)  */

/* Genera sucesión fibonacci con loop for*/
void fibonacciWithLoopFor(){
    cout<<"fibonacciWithLoopFor:\r\n";

    int f1 = 0, f2 = 1;
    int limit = 18;
    cout<<f1<<", "<<f2;

    int newValue = -1;
    for (int i = 0; i < limit; i++)
    {
        newValue = f1 + f2;
        cout<<", "<<newValue;
        f1 = f2;
        f2 = newValue;
    }
}

/* Genera secuencia fibonacci con recursividad*/
void fibonacciWithRecursion(int f1, int f2){
    if(count > 19)
        return;
    
    int newValue = f1 + f2;
    cout<<", "<<newValue;
    f1 = f2;
    f2 = newValue;
    count += 1;
    fibonacciWithRecursion(f1, f2);    
}

/* Obtiene el valor calculado para la posición n dentro de la secuencia fibonacci */
int findNthFibonacciNumWithRecursion(int n){
    if(n <= 1)
        return n;
    else{
        return 
            findNthFibonacciNumWithRecursion(n - 1) + findNthFibonacciNumWithRecursion(n - 2);
    }

}