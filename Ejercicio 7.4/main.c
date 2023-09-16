
/*Ejercicio 7.4. Usando la estructura Asignatura definida en el Ejercicio 7.1, definir una función que reciba una matriz de
asignaturas, junto con sus dimensiones útiles y devuelva la calificación media de las asignaturas de la matriz, la calificación
mínima, máxima y el promedio del número de matriculaciones.*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 100
#define NFIL 100
#define NCOL 100

typedef struct
{
    char nombre [TAM];
    int curso, semestre;
    float calificacion;
    int numMatric;

}Asignatura;

float estadAsig (Asignatura m[NFIL][NCOL], int nfil, int ncol, float *califMedia, float *califMin, float *califMax);

//Este enunciado no pide el main, no habría que hacerlo, pero se hace para probarlo
void main()
{
    //No pide scanf así que relleno la matriz como quiera
    Asignatura m [NFIL][NCOL] = {
                                 {{"FP", 1, 1, 10, 1}, {"CAL", 1, 1, 9.6, 1}},
                                 {{"SDG", 1, 1, 5.5, 2}, {"XXX", 1, 1, 7.6, 1}},
                                 {{"XXX", 1, 1, 4.4, 2}, {"XXX", 1, 1, 7.9, 1}}
                                 };

    float califMedia, califMin, califMax, promMatric;

    promMatric = estadAsig(m, 3, 2, &califMedia, &califMin, &califMax);

    printf("Calificacion media: %f\n", califMedia);
    printf("Calificacion minima: %f\n", califMin);
    printf("Calificacion maxima: %f\n", califMax);
    printf("Promedio matriculados: %f\n", promMatric);
}

float estadAsig (Asignatura m[NFIL][NCOL], int nfil, int ncol, float *califMedia, float *califMin, float *califMax)
{
    int i, j;
    float promMatric; //res

    promMatric = 0;

    *califMin = m[0][0].calificacion;
    *califMax = m[0][0].calificacion;
    *califMedia = 0;

    for (i = 0; i < nfil; i++)
    {
        for (j = 0; j < ncol; j++)
        {
            *califMedia += m[i][j].calificacion;
            promMatric += m[i][j].numMatric;

            if (m[i][j].calificacion > *califMin)
            {
                *califMin = m[i][j].calificacion;
            }
            if (m[i][j].calificacion < *califMax)
            {
                *califMax = m[i][j].calificacion;
            }
        }
    }
    *califMedia /= nfil * ncol;
    promMatric /= nfil* ncol;

    return promMatric; //res
}
