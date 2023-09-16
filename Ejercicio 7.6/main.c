
/*Ejercicio 7.6. Usando la estructura Familia definida en el Ejercicio 7.5, definir una función que reciba una familia y la
modifique eliminando todas las personas cuya edad esté comprendida entre dos valores indicados como parámetros.*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 100

typedef struct
{
    char nombre [TAM];
    char sexo[TAM];
    int edad;
    float altura, peso;

}Persona;

typedef struct
{
    Persona v[TAM];
    int tam;

}Familia;

void modFamilias (Familia *f, int a, int b);

void main ()
{
    Familia f;
    int i;

    f.tam = 3;

    Persona p1 = {"Marta", "Female", 9, 1.40, 46};
    Persona p2 = {"Juan", "Male", 17, 1.67, 56};
    Persona p3 = {"Fran", "NB", 27, 1.65, 59};

    f.v[0] = p1;
    f.v[1] = p2;
    f.v[3] = p3;

    modFamilias(&f, 16, 18);

    for (i=0; i<f.tam; i++)
    {
         printf("Nombre: %s\nSexo: %s\nEdad: %d\nAltura: %.2f\nPeso: %.2f\n\n", f.v[i].nombre, f.v[i].sexo, f.v[i].edad, f.v[i].altura, f.v[i].peso);
    }


}

void modFamilias (Familia *f, int a, int b)
{
    int i, j, aux=0;

    Familia modification;

    for(i=0; i<(*f).tam; i++)
    {
        if (!((*f).v[i].edad >= a && (*f).v[i].edad <= b))
        {
            modification.v[aux] = (*f).v[i];
            aux++;
        }
    }
    *f = modification;
}
