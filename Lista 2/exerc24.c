#include <stdio.h>

int main() {
    float kmh, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6;

    printf("Velocidade convertida: %.2f m/s\n", ms);
    return 0;
}