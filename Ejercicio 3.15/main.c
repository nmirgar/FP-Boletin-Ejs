
/* Ejercicio 3.15. Escribir un programa que muestre por pantalla un tri�ngulo de altura h (le�da por teclado) relleno de asteriscos */

#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int h, i, j;

    printf("Seleccione la altura del triangulo: ");
    scanf("%d", &h);

    for (i=1; i<=h; i++)
    {
        printf("\n");
        for (j=1; j<=i; j++)
        {
            printf("*");


        }

    }

}
