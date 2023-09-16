
//Ejercicio 2.1. Solicitar tres números al usuario e imprimirlos en orden ascendente.

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int a, b, c, aux;

  printf("Primer numero: ");
  scanf("%d", &a);

  printf("Segundo numero: ");
  scanf("%d", &b);

  printf("Tercer numero: ");
  scanf("%d", &c);

  if (a > b) {
    aux = a;
    a = b;
    b = aux;
  }
  if (b > c) {
    aux = b;
    b = c;
    c = aux;
  }
  if (a > b) {
    aux = a;
    a = b;
    b = aux;
  }

  printf("%d < %d < %d", a, b, c);

  return 0;
}

