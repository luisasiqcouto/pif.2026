#include <stdio.h>
#include <stdlib.h> 

int main() {
    int seg, horas, restoh, minutos, segundos;

    printf("Escreva o valor de segundos que deseja transformar:\n");
    scanf("%d",&seg);

    horas = seg / 3600;
    restoh = seg % 3600;
    minutos = restoh / 60;
    segundos = restoh % 60;

    printf("O valor é %d horas, %d minutos e %d segundos.",horas, minutos, segundos );

    return 0;
}

