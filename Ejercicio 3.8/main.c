
//Ejercicio 3.8. Algoritmo que calcule el producto de dos números a y b (sin utilizar el operador de multiplicación *).

#include <stdio.h>
#include <stdlib.h>

void main (){

    float a, b, i, x;

    printf("Deme el primer numero: ");
    scanf("%f", &a);

    printf("Deme el segundo numero: ");
    scanf("%f", &b);


    for (i=1; i<=b; i++){
        x += a;
    }

    printf("La multiplicacion es %.2f", x);

}
