#include <stdio.h>
#include <windows.h>

int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num1, num2, num3; 

    printf("\nEscreva três números inteiros:\n");
    scanf("%d,%d,%d", &num1, &num2, &num3);

    if (num1 <= num2 && num2 <= num3){
        printf("A ordem crescente é: %d %d %d", num1, num2, num3);
    }
    else if (num1 <= num3 && num3 <= num2){
        printf("A ordem crescente é: %d %d %d", num1, num3, num2);
    }
    else if (num2 <= num1 && num1 <= num3){
        printf("A ordem crescente é: %d %d %d", num2, num1, num3);
    }
    else if (num2 <= num3 && num3 <= num1){
        printf("A ordem crescente é: %d %d %d", num2, num3, num1);
    }
    else if (num3 <= num1 && num1 <= num2){
        printf("A ordem crescente é: %d %d %d", num3, num1, num2);
    }
    else {
        printf("A ordem crescente é: %d %d %d", num3, num2, num1);
    }

    return 0;
}