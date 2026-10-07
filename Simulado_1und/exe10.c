#include <stdio.h>
#include <math.h>

int main() {

    int total_segundos, horas, minutos, segundo, resto_minuto;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &total_segundos);

   horas = total_segundos / 3600;
   resto_minuto = total_segundos % 3600;

   minutos = resto_minuto / 60;
   segundo = resto_minuto % 60;

    printf("A hora total é: %d\nO minuto total: %d\nO segundo total é: %d\n", horas, minutos, segundo);


    return 0;

}