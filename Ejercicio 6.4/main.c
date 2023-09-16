
/*Ejercicio 6.4. Escribir una función que, dadas una matriz de enteros (m) y un valor entero (x), devuelva dos vectores de
enteros (llamados menores y mayores) y tres números enteros (nmenores, nmayores y niguales). Dicha función debe
obtener los números que sean menores, mayores y cuantos números iguales al entero x hay en la matriz m.*/

#include <stdio.h>
#include <stdlib.h>

#define NFIL 100
#define NCOL 100
#define TAM 100 //OJO: en el caso de que realmente utilizasemos una matriz 100x100, no cabrian todos los elementos en el vector

int menoresMayoresMatriz (int m[NFIL][NCOL], int nfil, int ncol, int x, int menores[TAM], int mayores[TAM], int * nmenores, int * nmayores);
//todas las tablas son punteros de por sí

void main()
{
    //el main no lleva variables declaradas con punteros
    int m [NFIL][NCOL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int menores [TAM], mayores [TAM];
    int nmenores, nmayores, niguales;
    int i;

    niguales = menoresMayoresMatriz(m, 3, 3, 6, menores, mayores, &nmenores, &nmayores); //matriz, nfil, ncol, x=6, los punteros aquí llevan &

    printf("Menores: ");
    for (i=0; i <nmenores; i++)
    {
        printf("%d", menores[i]);
    }
    printf("\nMayores: ");
    for (i=0; i <nmayores; i++)
    {
        printf("%d", mayores[i]);
    }
    printf("\nNumeros iguales: %d\n", niguales);
}

int menoresMayoresMatriz (int m[NFIL][NCOL], int nfil, int ncol, int x, int menores[TAM], int mayores[TAM], int * nmenores, int * nmayores)
{
    //esquema de recorrido dentro de recorrido
    int i, j; //no se inicializa porque uso un for
    int niguales; //sin puntero, es solo una variable

    *nmenores = 0;
    *nmayores = 0;

    for (i=0; i<nfil; i++)
    {
        for (j=0; j<ncol; j++)
        {
            if (m[i][j] > x)
            {
                mayores[*nmayores] = m[i][j];
                (*nmayores)++; //entre paréntesis para que acceda primero al puntero y después incremente uno
                //*nmayores += 1;
            }
            else if (m[i][j] < x)
            {
                menores[*nmenores] = m[i][j];
                (*nmenores)++;
            }else
            {
                niguales++;
            }
        }
    }
}
