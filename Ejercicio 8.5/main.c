
/*Ejercicio 8.5. Escribir un programa que solicite por teclado al usuario datos de libros: título, autores, año de publicación y
número de páginas. Defina una estructura Libro con los campos necesarios y use una tabla de estructuras para almacenar
los datos leídos desde teclado. Una vez leídos todos los libros, escribir en un fichero de texto el número de libros introducidos
y, a continuación, todos los datos de cada uno. Crear una función para leer los datos de los libros y otra para escribir los
datos de libros en el fichero. */


#include <stdio.h>
#include <stdlib.h>

#define TAM 100

typedef struct
{
    char titulo [TAM];
    char autor [TAM];
    int anyo;
    int pags;

} Libro;

int lecturaDatosLibros(Libro libros [TAM]);
void escrituraDatosLibros(Libro libros [TAM], int numLib, char datos_libros [TAM]);

void main()
{
    Libro libros [TAM];

    int numLib;

    numLib = lecturaDatosLibros(libros);

    escrituraDatosLibros(libros, numLib, "datos_libros");

}

int lecturaDatosLibros(Libro libros [TAM])
{
    int i, numLib;

    printf("Seleccione un numero de libros: \n");
    scanf("%d", numLib);

    for (i=0; i<numLib; i++)
    {
        printf("Libro %d.-\n", i+1);//no se que es esto, lo pone en el ejercicio resuelto. igualmente no funciona el programa
        printf("Titulo: \n");
        fflush(stdin);//se usa para que al gets no le de un chungito
        gets(libros[i].titulo); //se utiliza gets porque es mas de una palabra

        printf("Autor: \n");
        gets(libros[i].titulo);

        printf("Anyo publicacion: \n");
        scanf("%d", &libros[i].anyo);

        printf("Num. paginas: \n");
        scanf("%d", &libros[i].pags);

    }

    return numLib;
}

void escrituraDatosLibros(Libro libros [TAM], int numLib, char datos_libros [TAM])
{
    FILE *f;

    int i;

    f = fopen("datos_libros.txt", "w");

    if (f == NULL)
    {
        printf("Error de apertura de fichero");
    }
    else
    {
        fprintf(f, "%d\n", numLib);

        for (i=0; i<numLib; i++)
        {
            fprintf(f, "%s\n%s\n%d\n%d\n\n", libros[i].titulo, libros[i].autor, libros[i].anyo, libros[i].pags);
        }

        fclose(f);
    }

}

