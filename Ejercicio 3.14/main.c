
// Ejercicio 3.14. Escribir un programa que muestre las tablas de multiplicar de los números del 1 al 10

#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int i, j, n;
    for (i=1; i<=10; i++)
    {
        printf("Tabla del %d\n", i);

        for (j=1; j<=10; j++)
        {
            printf ("%d x %d = ", i, j);
            n = i*j;

            printf("%d\n", n);
        }
    }
}
