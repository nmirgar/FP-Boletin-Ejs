
/*Ejercicio 8.2. Escribir un programa que lea un fichero de notas de asignaturas, las cargue en un vector y las imprima por
pantalla. Este programa deberá ser compatible con el formato de fichero indicado en el Ejercicio 8.1. */

#include <stdio.h>
#include <stdlib.h>

#define TAM 100

void main()
{
    FILE * f;
    char nombreAsignatura[TAM];
    float notas [TAM];
    int n=0, i;

    f = fopen("notasAsignaturas.txt", "r"); //Apertura lectura del fichero

    if (f == NULL)//Comprobar que se ha abierto correctamente
    {
        printf("No se ha podido abrir el fichero");
    }
    else
    {
        fscanf(f, "%s%f", nombreAsignatura, &notas[n]); //notas[n] porque es lectura adelantada, primera posicion vector (n=0)
        while (!feof(f))
        {
            n++; //procesamiento
            fscanf(f, "%s%f", nombreAsignatura, &notas[n]); //Recopilar lo que pone en el fichero
        }
        fclose(f); //cierre de fichero

        for (i=0; i<n; i++)
        {
            printf("%.2f\t", notas[i]);
        }
    }
}

//Al introducir datos en ficheros es necesario un intro tras el último dato
