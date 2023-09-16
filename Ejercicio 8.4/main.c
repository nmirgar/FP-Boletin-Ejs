
/* Ejercicio 8.4. Escribir un programa que lea un fichero de notas de asignaturas (con el formato del Ejercicio 8.1) y calcule la
nota media de las asignaturas evaluadas (excluyendo las de calificación igual a -1) y el porcentaje de asignaturas aprobadas
con respecto al total de asignaturas incluidas en el fichero.*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 100
#define MAXCAR 100

void main()
{
    FILE * f;

    char asignatura [TAM][MAXCAR];
    float nota [MAXCAR];

    int cont;
    int porc;

    float suma;
    float media;
    float porcAprob;

    int i = 0; //Inicializo a cero para que comience por la primera posicion v[0]

    f = fopen("notas_asignaturas.txt", "r"); //Nombre de fichero

    if(f == NULL)
    {
        printf("Error de apertura de fichero");
    }
    else
    {
        fscanf(f, "%s", asignatura[i]);//Se tiene que leer todo lo que viene en el fichero aunque no se vaya a usar
        fscanf(f, "%f", &nota[i]);//Lectura adelantada

        suma = 0;
        cont = 0;
        media = 0;
        porc = 0;
        //Inicializo todo a cero porque soy una paranoica y ya no se que se pone a cero para que no haya basura y que no

        while(!feof(f))
        {
                i++;
                fscanf(f, "%s", asignatura[i]);
                fscanf(f, "%f", &nota[i]);
        }
        fclose(f);

        int j;
        for (j=0; j<i; j++)
        {
            if (nota[j] != -1)
            {
                suma += nota[j];
                cont++;
            }

            if (nota[j] >= 5)
            {
                porc++;
            }
        }

        media = suma / cont;
        printf("La media de asignaturas es %.2f\n", media);

        porcAprob = (porc * 100) / cont;
        printf("El porcentaje de asignaturas aprobadas es %.0f porciento", porcAprob);
    }
}
