
/*Ejercicio 8.7. Escribir un programa que solicite por teclado al usuario datos de matrices de números reales, cada una con
sus dimensiones (es decir, cada matriz podrá tener un número de filas y columnas distinto).*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 100 //cadena de caracteres del fichero

void leerMatricesFichero (char nombreFichero[TAM]);

void main()
{
    leerMatricesFichero("matrices.txt");
}

void leerMatricesFichero (char nombreFichero[TAM])
{
    int nmatrices; //numero de matrices
    int i;//recorrer matrices
    int j, k;//recorrer filas y columnas
    int nfil, ncol;
    float x; //numero dentro de la matriz

    FILE * f;

    f = fopen(nombreFichero, "w");

    if (f == NULL)
    {
        printf("Error de apertura de fichero");
    }
    else
    {
        printf("Cuantas matrices: ");
        scanf("%d", &nmatrices);

        fprintf(f, "%d\n", nmatrices);

        for (i=0; i<nmatrices; i++)
        {
            printf("Cuantas filas: ");
            scanf("%d", &nfil);

            printf("Cuantas columnas: ");
            scanf("%d", &ncol);

            fprintf(f, "%d %d\n", nfil, ncol);

            for (j=0; j<nfil; j++)
            {
                for (k=0; k<ncol; k++)
                {
                    printf("Elemento: ");
                    scanf("%f", &x);

                    fprintf(f, "%f ", x);
                }
                fprintf(f, "\n");
            }
        }
        fclose(f);
    }
}
