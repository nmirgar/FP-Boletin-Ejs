
// Ejercicio 2.2. Averiguar el cuadrante en el que se encuentra un punto en el plano solicitado por teclado.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, y;

    printf("Dame la coordenada X: \n");
    scanf("%d", &x);

    printf("Dame la coordenada Y: \n");
    scanf("%d", &y);

    if (x==0 && y!=0){
     printf("El punto se encuentra en el eje de ordenadas (y)");
    }
    if (x!=0 && y==0){
      printf("El punto se encuentra en el eje de abscisas (x)");
    }

    if (x==0 && y==0){
      printf("El punto se encuentra en el origen");

    }else if (x>0 && y>0){
      printf("El punto se encuentra en el primer cuadrante");

    }else if (x<0 && y>0){
      printf("El punto se encuentra en el segundo cuadrante");

    }else if (x<0 && y<0){
      printf("El punto se encuentra en el tercer cuadrante");

    }else if (x!=0 && y!=0){
      printf("El punto se encuentra en el cuarto cuadrante");

    }

    return 0;
}
//funsiona :)
