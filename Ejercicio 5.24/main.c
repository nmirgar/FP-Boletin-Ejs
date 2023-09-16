
/*Ejercicio 5.24. Sea una tabla bidimensional con las coordenadas de 100 puntos del plano. Se define centro del subespacio
al punto cuya distancia media a los restantes es más pequeña. Considere la distancia Euclídea. Escribir una función que
devuelva la posición en la tabla del centro del subespacio*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NPUNTOS 5 //como se entrega el ejercicio es con NPUNTOS 100

int centroSubespacio (float puntos [NPUNTOS][2]);
float distanciaEuclidea (float x1, float y1, float x2, float y2);

void main()
{
    float puntos [NPUNTOS][2] = {{1,2}, {3,4}, {4,5}};
    int res;

    res = centroSubespacio(puntos);

    printf("Centro subespacio: (%f,%f)\n", puntos[res][0], puntos [res][1]);

}

int centroSubespacio (float puntos [NPUNTOS][2])
{
    int i, j;
    int posicion, suma, distanciaMin;

    posicion = 0;
    distanciaMin = 1000; // optimizar
    for (i=0; i<NPUNTOS; i++)
    {
        for (j=0; j<NPUNTOS; j++)
        {
            suma = 0; //se inicializa dentro porque en este for empieza a hacer la suma
            if (i!=j)
            {
                suma += distanciaEuclidea(puntos[i][0], puntos [i][1], puntos [j][0], puntos[j][1]);
            }
        }
        suma/= NPUNTOS - 1;
        if ( suma < distanciaMin )
        {
            distanciaMin = suma;
            posicion = i; //guardar la posicion más pequeña
        }
    }
    return posicion;
}

float distanciaEuclidea (float x1, float y1, float x2, float y2)
{
    return sqrt( pow (x1-x2, 2) + pow (y1-y2, 2));
}
