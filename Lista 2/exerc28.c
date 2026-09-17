#include <stdio.h>

int main() {
    float horas_normais, horas_extras;
    float salario_bruto, excedente, imposto;

    printf("Digite o total de horas NORMAIS trabalhadas no ano: ");
    scanf("%f", &horas_normais);

    printf("Digite o total de horas EXTRAS trabalhadas no ano: ");
    scanf("%f", &horas_extras);

    salario_bruto = (horas_normais * 10.0) + (horas_extras * 15.0);

    excedente = salario_bruto - 12000.0;

    imposto = (excedente > 0.0) ? (excedente * 0.10) : 0.0;

    printf("Salario Anual Bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto Retido a Pagar: R$ %.2f\n", imposto);

    return 0;
}