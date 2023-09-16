
// Ejercicio 3.7. Algoritmo que calcule el factorial de un número n (n!)

#include <stdio.h>
#include <stdlib.h>

void main (){

    int i, n, x=1;

    printf("Numero del que se quiere calcular el factorial: ");
    scanf("%d", &n);

    for (i=2; i<=n; i++){
        x = x*i;

    }

    printf("El factorial es %d", x);


}
