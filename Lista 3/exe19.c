#include <stdio.h>

int main() {
    int n, i;
    long long int t1 = 1, t2 = 1, proximo;

    printf("Digite N: ");
    scanf("%d", &n);

    if (n <= 0) return 0;

    printf("Termos: ");
    for (i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            printf("%lld ", (long long int)1);
        } else {
            proximo = t1 + t2;
            printf("%lld ", proximo);
            t1 = t2;
            t2 = proximo;
        }
    }
    printf("\n");
    return 0;
}