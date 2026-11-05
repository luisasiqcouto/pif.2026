#include <stdio.h>
#include <windows.h>

int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int ano, div400, div4, div100;

    printf("\nEscreva qual ano deseja saber se é bissexto:\n");
    scanf("%d", &ano); 

    div400 = ano % 400; 
    div4 = ano % 4;
    div100 = ano % 100;

    if ((div400 == 0 || div4 == 0) && div100 != 0) {
        printf("Esse ano é bissexto"); 
    }
    else {
        printf("Esse ano não é bissexto");
    }

    return 0;

}