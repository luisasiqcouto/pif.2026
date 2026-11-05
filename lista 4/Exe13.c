#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int num1, num2, total;
    char op;

    printf("\nEscolha dois números inteiros e um operador:\n");
    scanf("%d\n %d\n %c", &num1, &num2, &op); 

    if (num2 == 0 && op == '/' ) {
        printf("\nDivisão por zero! Escola um número positivo para divisão:\n");
        scanf("%d", &num2);
    }

    switch (op){
        case '+':
        total = num1 + num2;
        printf("O resultado da soma é %d", total);
        break;
        case '-':
        total = num1 - num2;
        printf("O resultado da subtração é %d", total);
        break;
        case '*':
        total = num1 * num2;
        printf("O resultado da multiplicação é %d", total);
        break;
        case '/':
        total = num1 / num2;
        printf("O resultado da divisão é %d", total);
        break;
        case '^': 
        total = pow(num1, num2);
        printf("O resultado da potenciação é %d", total);
        break;
        default: 
        printf("Erro! Operador inválido");

    }


    
}