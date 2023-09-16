
/* Ejercicio 2.7. Dados dos instantes de tiempo con sus horas, minutos y segundos (h1:m1:s1 y h2:m2:s2), leídos por teclado,
obtener el número de horas, minutos y segundos comprendido entre ambos instantes. Por ejemplo, si los instantes son
12:30:15 y 13:15:40, entonces el número de horas, minutos y segundos comprendido entre ambos instantes sería: 0 horas,
45 minutos y 25 segundos */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int h1, m1, s1;
    int h2, m2, s2;
    int h3, m3, s3;
    long segtotal1=0, segtotal2;
    long diferencia;

    //Dos tiempos

    printf("Dime el primer tiempo (el mayor) en horas, minutos, segundos: ");
    scanf("%d%d%d", &h1, &m1, &s1);

    printf("Dime el segundo tiempo (el menor) en horas, minutos, segundos: ");
    scanf("%d%d%d", &h2, &m2, &s2);

    //Horas en segundos y diferencia

    //poner esto en valor absoluto (??)  segtotal1 = (h1*3600) + (m1*60) + s1;
    segtotal2 = (h2*3600) + (m2*60) + s2;

    diferencia = segtotal2 - segtotal1;

    //Diferencia en hora, minutos y segundos

    s3 = diferencia %60;
    m3 = (diferencia/60)%60;
    h3 = (diferencia/60)/60;

    printf("\nLa diferencia entre los dos tiempos es de %d horas, %d minutos y %d segundos\n", h3,m3,s3);

    return 0;
}
