
/* Ejercicio 8.1. Escribir un programa que solicite por teclado a un alumno las notas que ha obtenido en las asignaturas del
grado y las almacene en un fichero de texto. Para ello, se preguntará primero al alumno cuántas asignaturas desea
introducir. Si el alumno no se ha examinado aun de una asignatura introducirá un valor -1 */


#include <stdio.h>
#include <stdlib.h>

#define TAM 100

void main()
{
    FILE * f;
    char nombreAsignatura [TAM];
    float nota;
    int n, i;

    printf("Numero de asignaturas: ");
    scanf("%d", &n);

    f = fopen("notasAsignaturas.txt", "w"); //Apertura del fichero

    if (f == NULL)//Comprobar que se ha abierto correctamente
    {
        printf("No se ha podido abrir el fichero");
    }
    else
    {
        //Esquema de recorrido para escritura
        for (i = 1; i <= n; i++)
        {
            printf("Asignatura %d: ", i);
            scanf("%s", nombreAsignatura); //no tiene espacios así que se puede con scanf

            printf("Nota: ");
            scanf("%f", &nota);

            fprintf(f, "%s %.2f\n", nombreAsignatura, nota);
        }

        fclose(f);
    }
}
