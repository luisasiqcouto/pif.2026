#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float raiz, quadrado, num; 

    printf("Digite um número inteiro: ");
    scanf("%f", &num);

    if (num >= 0) {
        raiz = sqrt(num);
        printf("A raiz quadrada é %.2f", raiz);
    }
    else {
        quadrado = num * num;
        printf("O quadrado é %.2f", quadrado);
    }

    return 0;
}