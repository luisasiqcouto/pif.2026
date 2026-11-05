#include <stdio.h>
#include <windows.h>

int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int faltas;
    float nota;

    printf("\nEscreva a nota do aluno:\n");
    scanf("%f", &nota);

    printf("Escreva a quantidade de faltas do aluno:\n");
    scanf("%d", &faltas);

    if (nota >= 9.0 && nota <= 10.0 && faltas <= 20) {
        printf("Conceito A");
    }
    else if (nota >= 9.0 && nota <= 10.0 && faltas >= 20) {
        printf("Conceito B");
    }
    else if (nota >= 7.5 && nota <= 8.9 && faltas <= 20) {
        printf("Conceito B");
    }
    else if (nota >= 7.5 && nota <= 8.9 && faltas >= 20) {
        printf("Conceito C");
    }
    else if (nota >= 5.0 && nota <= 7.4 && faltas <= 20) {
        printf("Conceito C");
    }
    else if (nota >= 5.0 && nota <= 7.4 && faltas >= 20) {
        printf("Conceito D");
    }
    else if (nota >= 4.0 && nota <= 4.9 && faltas <= 20) {
        printf("Conceito D");
    }
    else if (nota >= 4.0 && nota <= 4.9 && faltas >= 20) {
        printf("Conceito E");
    }
    else {
        printf("Conceito E");
    }

    return 0;
}