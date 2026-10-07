#include <stdio.h>

int main() {
    int valor;
    int c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);

    while (valor >= 100) { valor -= 100; c100++; }
    while (valor >= 50)  { valor -= 50;  c50++; }
    while (valor >= 20)  { valor -= 20;  c20++; }
    while (valor >= 10)  { valor -= 10;  c10++; }
    while (valor >= 5)   { valor -= 5;   c5++; }
    while (valor >= 2)   { valor -= 2;   c2++; }

    printf("Cedulas entregues:\n");
    if (c100 > 0) printf("R$ 100: %d\n", c100);
    if (c50 > 0)  printf("R$ 50: %d\n", c50);
    if (c20 > 0)  printf("R$ 20: %d\n", c20);
    if (c10 > 0)  printf("R$ 10: %d\n", c10);
    if (c5 > 0)   printf("R$ 5: %d\n", c5);
    if (c2 > 0)   printf("R$ 2: %d\n", c2);

    return 0;
}