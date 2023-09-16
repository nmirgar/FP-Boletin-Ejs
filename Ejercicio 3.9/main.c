
/*Ejercicio 3.9. Algoritmo que visualice el valor máximo y mínimo de un conjunto de números reales introducidos por teclado.
La lectura concluirá cuando se hayan leído un máximo de cien números (usar una constante) o algún número negativo.*/

#include <stdio.h>
#include <stdlib.h>

#define N 100

void main ()
{
    int i=0;
    float num;
    float min, max;

    printf("Introduzca un numero: ");
    scanf("%f", &num);

    min = num;
    max = num;

    while (num >= 0 && i<N)
    {
        if (num > max)
        {

            max = num;

        }

        if(num < min)
        {
            min = num;
        }

        printf("Introduzca un numero: ");
        scanf("%f", &num);

        i++;
    }
    printf("El maximo es : %f\nEl minimo es: %f", max, min);

}
