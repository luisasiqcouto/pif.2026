#include <stdio.h>

int main() {
    float salario_base, salario_liquido;

    printf("Digite o salario-base do funcionario: ");
    scanf("%f", &salario_base);

    salario_liquido = salario_base * (1.0 + 0.05 - 0.07);

    printf("Salario liquido a receber: R$ %.2f\n", salario_liquido);
    return 0;
}