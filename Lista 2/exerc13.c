#include <stdio.h> 
#include <stdlib.h>

int main() {

    float qua, ret, tri;
    float quaL, retB, retH, triB, triH;

    printf("Por favor, insira o valor da lateral do quadrado:\n");
    printf("Lateral: ");
    scanf("%f", &quaL);

    printf("Agora insira o valor da base e altura do retângulo:\n");
    printf("Base: ");
    scanf("%f", &retB);
    printf("Altura: ");
    scanf("%f", &retH);

    printf("Por fim, insira o valor da base e altura do retângulo:\n");
    printf("Base: ");
    scanf("%f", &triB);
    printf("Altura: ");
    scanf("%f", &triH);

    qua = quaL * quaL;
    ret = retB * retH;
    tri = (triB * triH) / 2;

    printf("A área do quadrado é: %.2f\nA área do retângulo é: %.2f\nA área do triângulo é: %.2f", qua, ret, tri);

    return 0;

}