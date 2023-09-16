
/*Ejercicio 8.3. Escribir un programa que lea un fichero de notas de asignaturas (con el formato del Ejercicio 8.1), las cargue
en un vector de estructuras de tipo Asignatura y las imprima por pantalla. El tipo Asignatura debe ser una estructura con
dos campos: una cadena que contiene el nombre de la asignatura y un número real que contiene una calificación numérica*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 100

typedef struct
{
    char nombre [TAM];
    float calificacion;

} Asignatura;

void main()
{
    Asignatura v [TAM];

    int i;
    int n = 0; //contar asignaturas

    FILE * f; //manejar fichero

    f = fopen("asignaturas.txt", "r"); //nombre de fichero

    if (f == NULL)
    {
        printf("No se ha podido abrir.\n");
    }
    else
    {
        // Esquema de lectura de fichero (busqueda)
        fscanf(f, "%s%f", v[n].nombre, &v[n].calificacion);//lectura adelantada

        while (!feof(f))
        {
            n++; //Procesamiento
            fscanf(f, "%s%f", v[n].nombre, &v[n].calificacion); //volver a leer
        }
        fclose(f); //Cierre fichero
    }

    // Imprimir asignaturas
    for (i = 0; i < n; i++)
    {
        printf("Asignatura: %s (%.2f)\n", v[i].nombre, v[i].calificacion);
    }
}

/*Poner enter después del último dato para que lea este mismo*/
