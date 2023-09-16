
//Ejercicio 1.7. Calcular la media aritmética de tres números reales leídos por teclado.

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int a, b, c, media;

  printf("Primer valor: \n");
  scanf("%d", &a);

  printf("Segundo valor: \n");
  scanf("%d", &b);

  printf("Tercer valor: \n");
  scanf("%d", &c);

  media = (a+b+c)/3;

  printf("La media de estos valores es: %d", media);

  return 0;
}
