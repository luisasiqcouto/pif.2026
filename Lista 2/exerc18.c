#include <stdio.h>

int main() {

    float raio, area, volume;
    float pi = 3.141593;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    area = 4.0 * pi * raio * raio;

    volume = (4.0 / 3.0) * pi * raio * raio * raio;

    printf("Area de Superficie: %.4f\n", area);
    printf("Volume da Esfera: %.4f\n", volume);

    return 0;
}