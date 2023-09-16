

// Ejercicio 3.2. Obtener la suma de los cuadrados de los números entre a y b (leídos por teclado).

#include <stdio.h>
#include <stdlib.h>

void main ()
{

    int a, b, suma, i;

    printf("Deme el primer numero a elevar: ");
    scanf("%d", &a);

    printf("Deme el segundo numero a elevar: ");
    scanf("%d", &b);


    for (i=a+1; i<b; i++)
    {

        suma = suma + (i*i);

    }

    printf("La suma de los cuadrados entre %d y %d es %d", a, b, suma);
}
