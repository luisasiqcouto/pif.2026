#include <stdio.h>

int main() {
    int n, i, divisores = 0;

    printf("Digite N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("%d eh PRIMO! (Possui %d divisores)\n", n, divisores);
    } else {
        printf("%d NAO eh primo. (Possui %d divisores)\n", n, divisores);
    }
    return 0;
}