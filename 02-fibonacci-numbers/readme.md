# Sucesión de Fibonacci

Programa basico de practica para entender que es un algoritmo
e introducción a DSA Estrucutras de control y algoritmos.

La propuesta del programa es obtener los primeros 20 valores de la sucesión de fibonacci resolviendolo con: 
- Uso de loops, en este caso usando for
- Uso de recursividad
- Usando formular para calcular el enesimo (n) numero de fibonacci usando recursividad


## void fibonacciWithLoopFor();
Se utiliza estructura de control for para realizar el calculo de la sucesión fibonacci de 0 a n, donde n es el maximo numero que se mostrara, por ejemplo: n = 20, mostrara los primeros 20 numeros de la sucesión.

## void fibonacciWithRecursion(int, int);
Se utiliza recursión para realizar el calculo de la sucesión fibonacci de 0 a n, donde n es el maximo numero que se mostra por ejemplo count = 18, mostrara los primeros 20 numeros de la sucesión. Los primeros 2 se reciben como parametro y con estos se calcula el resto.

## int findNthFibonacciNumWithRecursion(int limit);
Calcula el enesimo número dentro de la sucesión de fibonacci
utilizando recursividad para llamarse a si misma usando la función: F(n) = F(n-1) + F(n - 2), el código se simplifica llamandose a si mismo 2 veces y en cada caso se estaria haciendo llamados (2 veces mas) y asi sucesivamente a pesar de que se ve practico implica más llamadas a la función mientras el número a buscar sea más grande volviendoce lento e ineficaz