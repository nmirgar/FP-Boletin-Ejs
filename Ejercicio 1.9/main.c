#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int base, exponente, potencia, i;


  printf("Dame la base\n");
  scanf("%d", &base);

  printf("Dame el exponente\n");
  scanf("%d", &exponente);

  //izq destinatario ; derecha emisor
  potencia = base;
  for (i=1; i<exponente; i++){
    potencia *= base;
  }

  printf("La potencia es: %d", potencia);


  return 0;
}
