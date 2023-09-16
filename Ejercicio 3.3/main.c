
/*Ejercicio 3.3. Solicitar una serie de gastos (en euros) al usuario hasta que la suma supere un total de presupuesto leído
previamente por teclado */

#include <stdio.h>
#include <stdlib.h>

void main ()
{

    float presup, gasto;

    printf("Seleccione el presupuesto maximo: ");
    scanf("%f", &presup);


    float suma=0;
    int exito=0;

    while (!exito)
    {
        printf("Introduzca un gasto en euros: ");
        scanf("%f", &gasto);

        suma = suma + gasto;

        if (suma>=presup)
        {
            exito=1;

        }

    }
    printf("La suma total de los gastos es: %f", suma);



}
