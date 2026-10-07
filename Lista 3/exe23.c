#include <stdio.h>

int main() {
    int l, i, j;

    printf("Digite o lado L (3 a 20): ");
    scanf("%d", &l);

    for (i = 1; i <= l; i++) {
        for (j = 1; j <= l; j++) {
            if (i == 1 || i == l || j == 1 || j == l) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}