#include <stdio.h>
#include <math.h>

int main() {

    int ladoa, ladob, ladoc;
    float semip, area;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%d", &ladoa);

    printf("Digite o segundo lado do triangulo: ");
    scanf("%d", &ladob);

    printf("Digite o terceiro lado do triangulo: ");
    scanf("%d", &ladoc);

    semip = (ladoa + ladob + ladoc)/2;

    area = sqrt(semip * (semip -ladoa) * (semip - ladob) * (semip - ladoc));

    printf(" A área é: %f", area);

    return 0;

}
