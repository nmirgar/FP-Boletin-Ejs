
/* Ejercicio 5.19. Sea un vector t de N enteros, ordenado ascendentemente, y un entero k³0. Diseñar un algoritmo que calcule
el número de pares (i,j) que verifiquen: 0<=i<=j<N y t[j] – t[i] <= k */


#include <stdio.h>
#include <stdlib.h>

#define TAM 100

//funcion : datos --> vector, tamaño lógico del vector y k ; devuelve --> contador
int contarParejasK ( int v[TAM], int tam, int k );

void main()
{
    int v[TAM] = { 1, 2, 4, 4};
    int n=4;
    int k=1;
    int res; //salida

    //Llamar a la funcion
    res = contarParejasK(v, n, k); // se pone v sin tamaño

    printf( "Numero de parejas: %d\n", res);


}

int contarParejasK ( int v[TAM], int tam, int k )
{
    int i, j;
    int res =0; //se puede poner res=0 aqui, realmente da igual porque no se tiene que reinicializar

    for (i =0; i < tam; i++)
    {
        for (j= i; j<tam; j++)
        {
            if (v[j] - v[i] <= k )
            {
                res++; // se suma uno cada vez que encuentre una pareja
            }
        }
        // no se pone j++ o i++ porque es un for, se va actualizando. Si fuese un while si se pone
    }
    return res;
}
