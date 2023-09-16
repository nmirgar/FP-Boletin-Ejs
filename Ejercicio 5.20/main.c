
/* Ejercicio 5.20. Función que indique cuántos subvectores, de cualquier tamaño estrictamente positivo (mayores que cero) y menor o igual que
N (el completo es tambien un subvector), formados por elementos consecutivos del vector t de N enteros, suman el mismo valor que algún elemento del vector. (ver si coincide con algun elemento del vector)*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int contarSubvectores ( int v[TAM], int tam);

void main()
{
    int v[TAM] = {1, 2, 3, 4};
    int res;

    res = contarSubvectores (v, 4); //siendo 4 el tamaño logico

    printf("Numero subvectores: %d\n", res);

}

int contarSubvectores ( int v[TAM], int tam)
{
    int i, j, k, s, exito, res = 0;

    for (i = 0; i < tam; i++)
    {
        for (j=1; j < tam; j++)
        {
            s = 0;
            for (k = i; k <= j; k++)
            {
                s = s + v[k];

                //Busqueda
                exito = 0;
                k = 0;
                while ( k < tam && !exito)
                {
                    if (s == v[k])
                    {
                        exito = 1;
                    }
                    else
                    {
                        k++;
                    }
                }
                if (exito)
                {
                    res++;
                }
            }
        }
    }

    return res;
}
