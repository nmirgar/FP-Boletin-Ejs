
/*Ejercicio 5.4. Escribir una función que calcule el máximo de un vector de números reales. Implementar una función main
para probar el funcionamiento con datos leídos desde teclado.*/


#include <stdio.h>
#include <stdlib.h>

#define TAM 100

float maximo (float v[TAM], int tam);

void main ()
{
    float v[TAM], max;
    int n, i;

    printf("Introduzca el vector de numeros reales: \n");

    printf("Numero de elementos: \n");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        printf("Numero: \n");
        scanf("%f", &v[i]); //leva & porque es un float a pesar de ser un vector (no es cadena de caracteres)

    }

    max = maximo(v, n); //solo se pone v porque es el vector entero, porque sino se determina posición

    printf("El maximo es %f\n", max);


}

float maximo (float v[TAM], int tam)
{
    int i;
    float res=v[0]; //si pongo res=0 no contempla números negativos

    for (i=1; i<tam; i++)
    {
        if (v[i]>res)
        {
            res = v[i];
        }
    }
    return res;
}
