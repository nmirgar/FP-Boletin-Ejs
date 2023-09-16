

// Ejercicio 3.1. Obtener la suma de los números entre a y b (leídos por teclado).

#include <stdio.h>
#include <stdlib.h>

void main ()
{


    int a,b,suma,i;

    printf("Dame el primer numero: ");
    scanf("%d", &a);

    printf("Dame el segundo numero: ");
    scanf("%d", &b);

    for (i=a+1; i<b; i++)
    {
        suma = suma + i;
    }

    printf("La suma de los numeros entre %d y %d es %d", a, b, suma);

}



