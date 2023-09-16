
/*Ejercicio 3.9. Algoritmo que visualice el valor m�ximo y m�nimo de un conjunto de n�meros reales introducidos por teclado.
La lectura concluir� cuando se hayan le�do un m�ximo de cien n�meros (usar una constante) o alg�n n�mero negativo.*/

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
