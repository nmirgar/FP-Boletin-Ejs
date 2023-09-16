
/*Ejercicio 7.7. Usando la estructura Familia definida en el Ejercicio 7.5, definir una función que reciba un vector de familias
y devuelva otro vector (y su número de elementos) con sólo aquellas familias donde exista al menos una mujer (campo
sexo=’M’ de la estructura Persona).s*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 100

typedef struct
{
    char nombre [TAM];
    char sexo [TAM];
    int edad;
    float altura, peso;

}Persona;

typedef struct
{
    Persona v [TAM];
    int tam;

}Familia;

void modifFamilias (Familia f[TAM], Familia modif[TAM]);

void main ()
{
    Persona p1 = {"Marta", "Female", 9, 1.40, 46};
    Persona p2 = {"Juan", "Male", 17, 1.67, 56};
    Persona p3 = {"Fran", "NB", 27, 1.65, 59};
    Persona p4 = {"Natalia", "NB", 56, 1.70, 59};

    Familia f1;
    Familia f2;
    Familia f3;

    f1.v[0] = p1;
    f1.v[1] = p2;

    f2.v[0] = p2;
    f2.v[1] = p3;
    f2.v[3] = p4;

    f3.v[0] = p1;
    f3.v[1] = p4;

    Familia f[] = {f1, f2, f3};

    f->tam = 3;

    Familia modif [TAM];

    modifFamilias(f, modif);

    int i;

    for (i=0; i<f->tam; i++)
    {
        for
        printf();
    }
}

void modifFamilias (Familia f[TAM], Familia modif[TAM])
{
    int i, j, exito, aux;

    for (i=0; i<f->tam; i++)
    {
        j=0;
        exito=0;
        aux=0;

        while (j<f->tam && !exito)
        {
            if (f[i].v[j].sexo == "Female")
            {
                f[i].v[j] = modif[i].v[j];
                i++;
            }
        j++;
        exito=1;
        }
    }
}

