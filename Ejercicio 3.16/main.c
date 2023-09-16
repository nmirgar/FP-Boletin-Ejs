
// Ejercicio 3.16. Mostrar los números primos que existen entre a y b (a y b leídos por teclado).

#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int a, b, x, i, exito;

    printf("Deme el numero inicial: ");
    scanf("%d", &a);

    printf("Deme el numero final: ");
    scanf("%d", &b);

    for ( x=a+1; x<b; x++) // la x va avanzando un puesto desde a hasta b sin contarlos a ellos
    {
        i=2; // se inicia en 2 porque el 1 no se cuenta
        exito=0;
        while (i<x && !exito)
        {
            if (x%i == 0)
            {
                exito=1;
            }
            else
            {
                i++;
            }
        }

        if (exito == 0)
        {
            printf("%d\n",x);
        }
    }

}
