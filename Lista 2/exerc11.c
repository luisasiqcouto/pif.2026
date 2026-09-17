#include <stdio.h> 

int main() {

    float ang;
    float rad;
    float pi = 3.141593;

    printf("Escreva o valor do ângulo que deseja converter:\n");
    scanf("%f", &ang);

    rad = ang * (pi / 180.0);

    printf("O valor em radianos é: %.2f", rad);

    return 0;

}