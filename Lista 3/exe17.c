#include <stdio.h>

int main() {
    float nota, soma = 0.0, maior = -1.0, menor = 11.0;
    int qtd = 0;

    printf("Digite a nota (-1.0 para sair): ");
    scanf("%f", &nota);

    while (nota != -1.0) {
        if (nota >= 0.0 && nota <= 10.0) {
            soma += nota;
            qtd++;
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        }
        printf("Digite a nota (-1.0 para sair): ");
        scanf("%f", &nota);
    }

    if (qtd > 0) {
        printf("a) Total de alunos: %d\n", qtd);
        printf("b) Maior nota: %.2f\n", maior);
        printf("c) Menor nota: %.2f\n", menor);
        printf("d) Media geral: %.2f\n", soma / qtd);
    } else {
        printf("Nenhuma nota registrada.\n");
    }

    return 0;
}