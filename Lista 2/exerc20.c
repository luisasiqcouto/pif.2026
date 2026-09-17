#include <stdio.h>
#include <math.h>

int main() {
    float lado_a, lado_b, hipotenusa;

    printf("Digite o comprimento do cateto A: ");
    scanf("%f", &lado_a);

    printf("Digite o comprimento do cateto B: ");
    scanf("%f", &lado_b);

    hipotenusa = sqrt(pow(lado_a, 2) + pow(lado_b, 2));

    printf("Comprimento da Hipotenusa: %.2f\n", hipotenusa);
    return 0;
}