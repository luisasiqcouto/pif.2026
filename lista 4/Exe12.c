#include <stdio.h>
#include <windows.h>

int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int num;

    printf("\nEscolha um dia da semana de acordo com o número de 1 a 7:\n");
    scanf("%d", &num);

    switch (num) {
        case 1: 
        printf("1 = Domingo\n");
        break;
        case 2:
        printf("2 = Segunda\n");
        break;
        case 3:
        printf("3 = Terça\n");
        break;
        case 4:
        printf("4 = Quarta\n");
        break;
        case 5:
        printf("5 = Quinta");
        break;
        case 6: 
        printf("6 = Sexta\n");
        break;
        case 7:
        printf("7 = Sábado\n");
        break;
        default:
        printf("Erro! Opção inválida");
    }

    return 0;

}