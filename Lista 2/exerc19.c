#include <stdio.h>

int main() {
    int dias_trabalhados;
    float valor_bruto, valor_liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);

    valor_bruto = dias_trabalhados * 30.0;

    valor_liquido = valor_bruto * (1.0 - 0.08);

    printf("Valor Bruto: R$ %.2f\n", valor_bruto);
    printf("Valor Liquido (com 8% IR): R$ %.2f\n", valor_liquido);

    return 0;
}