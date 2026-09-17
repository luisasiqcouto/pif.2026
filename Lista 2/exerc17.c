#include <stdio.h>

int main() {

    float raio, area, circunferencia;
    float pi = 3.141593;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;
    circunferencia = 2 * pi * raio;

    printf("Area do Circulo: %.4f\n", area);
    printf("Circunferencia: %.4f\n", circunferencia);

    return 0;
}