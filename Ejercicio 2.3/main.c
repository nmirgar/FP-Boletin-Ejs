
/* Ejercicio 2.3. Dados tres n�meros d, m y a, representando el d�a, mes y a�o de una fecha, indicar si la fecha es v�lida,
considerando los a�os bisiestos. Son a�os bisiestos los m�ltiplos de 4, excepto los m�ltiplos de 100 que no son m�ltiplos
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

     //Son v�lidos los a�os bisiestos

      if (anho %4 == 0 && anho %100 != 0 ){
        printf("La fecha es valida\n");

      }else
        printf("La fecha no es valida\n");

     printf("Dia: %d,Mes: %d,Anho: %d", dia, mes, anho);

      return 0;
}

