#include <stdio.h>

int main() {
    int i;
    long long int soma = 0;

    for (i = 1; i <= 100; i++) {
        int quad = i * i;
        printf("%d -> %d\n", i, quad);
        soma += quad;
    }
    printf("Soma total dos quadrados = %lld\n", soma);
    return 0;
}