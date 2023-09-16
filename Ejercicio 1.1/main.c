
//Ejercicio 1.1. Obtener las horas, minutos y segundos de una hora expresada en segundos leída por teclado

#include <stdio.h>
#include <stdlib.h>

#define x 120

int main () {

  long hora, minutos, segundos, sobr1, sobr2;

    minutos  = (x/60);
    printf("El tiempo es: %ld \n",minutos);

    sobr1 = minutos % 60;
    printf("El tiempo es: %ld \n",sobr1);

    hora = (minutos/60);

    sobr2 = hora % 60;
    sobr2 /= 60;

    segundos = (sobr1 + sobr2);


    printf("El tiempo es: %ld,%ld,%ld",hora,minutos,segundos);

  return 0;
  }
