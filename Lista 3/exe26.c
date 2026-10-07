#include <stdio.h>

int main() {
    int a, b, i, j, divisores, soma_primos = 0;

    printf("Digite A e B (A < B): ");
    scanf("%d %d", &a, &b);

    printf("Primos no intervalo [%d, %d]: ", a, b);
    for (i = a; i <= b; i++) {
        if (i < 2) continue;
        divisores = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) divisores++;
        }
        if (divisores == 2) {
            printf("%d ", i);
            soma_primos += i;
        }
    }
    printf("\nSoma dos primos: %d\n", soma_primos);
    return 0;
}