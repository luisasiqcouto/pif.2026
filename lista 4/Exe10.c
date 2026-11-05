#include <stdio.h>
#include <windows.h>

int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num, resto;

    printf("\nEscreva um número inteiro:\n");
    scanf("%d", &num);

    resto = num % 2;

    if (resto == 0) {
        printf("O número é par\n");
    }
    else {
        printf("O número é ímpar\n");
    }

    if (num < 0) {
        printf("O número é negativo\n");
    }
    else if (num == 0) {
        printf("O número é zero\n");
    }
    else {
        printf("O número é positivo\n");
    }

    return 0;

}