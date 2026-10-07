#include <stdio.h>
#include <math.h>

int main() {

    float pi = 3.14159265;
    float r, area, vol, rquadrado, rcubico;

    printf("Digite o raio da esfera desejada: ");
    scanf("%f", &r);

    rquadrado = pow(r,2);
    rcubico = pow(r,3);
    area = 4 * pi * rquadrado;
    vol = (4.0/3.0) * pi * rcubico;

    printf("A área é: %.3f\nO volume é:%.3f\n", area, vol);

    return 0;

}