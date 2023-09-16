

/* Ejercicio 4.29. Algoritmo que sume todos los cuadrados perfectos que se encuentran en un vector de números enteros

Un numero es perfecto cuando la suma de sus divisores da ese mismo numero

8 = 1 + 2 + 4 --> No es perfecto
6 = 1 + 2 + 3 --> Si es perfecto

Esquema de busqueda: buscar hasta que la suma sea mayor que el numero
*/

#include <stdio.h>
#include <stdlib.h>

#include <math.h> //funciones matematicas

#define TAM 100 //tamaño fisico del vector

void main ()
{
    int v [TAM] = {2, 4, 9, 17, 6, 63};
    int tam = 6;
    int i;
    int j;
    int s; // se declara pero no se inicializa, debe ser dentro del for para que se actualice
    int sumaPerfectos; //suma de numeros perfectos
    int exito; //se inicializa a cero antes de usarlo

    //Recorrifo completo del vector

    sumaPerfectos = 0;
    for (i=0; i<tam; i++)
    {

        //Búsqueda para averiguar si v[i] es perfecto

        exito = 0;
        j = 1;

        while ( pow(j,2) <= v[i]&& !exito)  //se pone condicion porsi la suma de divisores es menor que el mismo numero
        {
            if (pow(j,2) == v[i])
            {
                exito = 1;
            }
            else
            {
                j++;
            }
        }

        if (exito)
        {
            sumaPerfectos += v[i];
        }
    }

    //Imprimir suma de numeros perfectos
    printf (" La suma de los cuadrados perfectos es %d\n", sumaPerfectos);
}
