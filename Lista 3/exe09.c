#include <stdio.h>

int main() {
    float val, soma = 0.0;
    int qtd = 0;

    printf("Digite um valor real (negativo para sair): ");
    scanf("%f", &val);

    while (val >= 0) {
        soma += val;
        qtd++;
        printf("Digite um valor real (negativo para sair): ");
        scanf("%f", &val);
    }

    if (qtd > 0) {
        printf("Quantidade: %d\n", qtd);
        printf("Soma: %.2f\n", soma);
        printf("Media: %.2f\n", soma / qtd);
    } else {
        printf("Nenhum valor valido foi digitado.\n");
    }

    return 0;
}