
/*Ejercicio 5.16. Escriba una función tal que dada una matriz cuadrada de NxN enteros, devuelva cierto si ésta tiene dos
elementos, uno en la diagonal principal y otro en la secundaria que sean iguales.*/


#include <stdio.h>
#include <stdlib.h>

#define NFIL 100
#define NCOL 100 //como es cuadrada, podriamos obviar algun porque NFIL=NCOL

int coincidePrincipalSecundaria (int m[NFIL][NCOL], int n);

void main ()
{
    int m[NFIL][NCOL] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    //LLamar a la función para recoger el resultado
    if (coincidePrincipalSecundaria (m,4))
    {
        printf("Hay un elemento de la matriz principal que esta en la secundaria");

    }
    else
    {
        printf("No hay ningun elemento de la matriz principal que este en la secundaria");
    }

}

int coincidePrincipalSecundaria (int m[NFIL][NCOL], int n) //n es el numero de elementos de la matriz
{
    int i, j, exito; //solo un exito porque la condicion de salida de una implica la salida de la otra

    /*Busqueda externa*/
    i=0;
    exito=0;
    while (i<n && !exito) // i es la diagonal principal
    {
        /*Procesamiento --> busqueda interna*/
        j=0;
        while (j<n && !exito)  // j es la diagonal secundaria
        {
            if (m[i][i] == m[i][n-j-1])
            {
                exito =1;
            }
            else
            {
                j++;
            }
        }
        if(!exito)
        {
            i++;
        }
    }
    return exito;
}
