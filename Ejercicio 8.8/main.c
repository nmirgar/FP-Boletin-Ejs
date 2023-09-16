
/*Ejercicio 8.8. Escribir una función que reciba el nombre de un fichero de matrices (con el formato del Ejercicio 8.7), lo lea
y devuelva, por una parte, un vector de estructuras de tipo Matriz con las matrices leídas y, por otra parte, la media y la
desviación típica de las sumas de los elementos de las matrices del fichero y si existe alguna matriz cuya suma sea mayor
que la suma de la matriz que tiene menor número de columnas.*/

//punteros: SALIDA NT O ENTRAD/SAL NT

#include <stdio.h>
#include <stdlib.h>

#define NFIL 100
#define NCOL 100
#define TAM 100

typedef struct
{
    float matriz[NFIL][NCOL];
    int nfil, ncol;

} Matriz;

//se pone el de SALIDA NT que menos relacion tenga con el resto
int leerMatricesEstadisticas (char nombre[TAM], Matriz matrices[TAM], float *media, float *desvTipica);

void main()
{

}

int leerMatricesEstadisticas (char nombre[TAM], Matriz matrices[TAM], float *media, float *desvTipica)
{
    int i, j, k;
    int exito;
    int nmatrices;

    float suma [TAM];

    int posMatMenorCols;

    FILE * f;

    //Paso 1: Leer matrices fichero
    //Paso 2: Calcular media

    f = fopen(nombre, "r");

    if (f == NULL)
    {
        printf("Error de apertura");
    }
    else
    {
        fscanf(f, "%d", &nmatrices);
        for(i=0; i<nmatrices; i++)
        {
            fscanf(f,"%d%d", &matrices[i].nfil, &matrices[i].ncol); //por que con una i

        }
        //dos bucles for nfil ncol guardado en jk del campo matriz estructura matriz
    }
    fclose(f);
}
