#include <stdio.h>
#include <windows.h>

int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int idade, anoT;

    printf("\nDigite quantos anos tem e quandos anos trabalhou:\n");
    scanf("%d\n %d", &idade, &anoT);

    if (idade >= 65) {
        printf("Você pode se aposentar!");
    }
    else if (anoT >= 30) {
        printf("Você pode se aposentar!");
    }
    else if (idade >= 60 && anoT >=25) {
        printf("Você pode se aposentar!");
    }
    else {
        printf("Você não pode se aposentar");
    }
    
    return 0;
}