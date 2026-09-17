#include <stdio.h>
#include <stdlib.h>

int main() {
    int semente;
    int dado1, dado2, dado3;
    printf("Digite um numero inteiro para a semente aleatoria: ");
    scanf("%d", &semente);

    srand(semente);

    dado1 = (rand() % 6) + 1;
    dado2 = (rand() % 6) + 1;
    dado3 = (rand() % 6) + 1;

    printf("\nResultado do lancamento dos 3 dados:\n");
    printf("Dado 1: %d\n", dado1);
    printf("Dado 2: %d\n", dado2);
    printf("Dado 3: %d\n", dado3);

    return 0;
}