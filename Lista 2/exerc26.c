#include <stdio.h>

int main() {
    float comprimento, largura, preco_metro;
    float perimetro_simples, metrage_total, custo_total;

    printf("Digite o comprimento do terreno (metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno (metros): ");
    scanf("%f", &largura);

    printf("Digite o preco por metro do arame farpado (R$): ");
    scanf("%f", &preco_metro);

    perimetro_simples = 2 * (comprimento + largura);

    metrage_total = perimetro_simples * 3;
    custo_total = metrage_total * preco_metro;

    printf("Total de arame necessario: %.2f metros\n", metrage_total);
    printf("Custo total do cercamento: R$ %.2f\n", custo_total);

    return 0;
}