
/* Ejercicio 2.3. Dados tres números d, m y a, representando el día, mes y año de una fecha, indicar si la fecha es válida,
considerando los años bisiestos. Son años bisiestos los múltiplos de 4, excepto los múltiplos de 100 que no son múltiplos
de 400. */


#include <stdio.h>
#include <stdlib.h>

int main(void) {

      int dia, mes, anho;

      printf("Dia existente:  ");
      scanf("%d", &dia);

      printf("Mes existente:  ");
      scanf("%d", &mes);

      printf("Anho no me importa cual:  ");
      scanf("%d", &anho);

     //Son válidos los años bisiestos

      if (anho %4 == 0 && anho %100 != 0 ){
        printf("La fecha es valida\n");

      }else
        printf("La fecha no es valida\n");

     printf("Dia: %d,Mes: %d,Anho: %d", dia, mes, anho);

      return 0;
}

