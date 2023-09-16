
/* Ejercicio 3.17. Leer de teclado n secuencias de números reales (n es leído por teclado al principio), calcular la suma de
cada secuencia y mostrar la suma mayor. No se deben usar tablas. La lectura de cada secuencia desde teclado termina
cuando el usuario introduce un cero. */

#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int i, exito, n;
    float suma, x;

    printf("Seleccione un numero de secuencias: ");
    scanf("%d", n);

    for (i = 1; i <= n; i++) //recorrro las secuencias
    {
        suma = 0;
        exito = 0;

        while(!exito)
        {
            printf("Numero a sumar: ");
            scanf("%f", &x);

            if (x != 0)
            {
                suma += x;
            }
            else
            {
                exito = 1;
            }
        }
    }
}




