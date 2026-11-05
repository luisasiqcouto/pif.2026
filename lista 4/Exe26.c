#include <stdio.h> 
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int mes, ano, bissexto; 

    printf("Digite o numero do mes (1 a 12): "); 
    scanf("%d", &mes); 

    printf("Digite o ano: ");
    scanf("%d", &ano); 

    if (mes < 1 || mes > 12) { 
        printf("Erro: Numero de mes invalido! Digite um valor entre 1 e 12.\n"); 
        return 0; 
    }

    bissexto = ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0));

    switch (mes) {
        case 1:  printf("Mes: Janeiro | Dias: 31 dias\n"); break;
        case 2: 
            if (bissexto) { 
                printf("Mes: Fevereiro | Dias: 29 dias (Ano Bissexto)\n"); 
            } else { 
                printf("Mes: Fevereiro | Dias: 28 dias\n"); 
            }
            break; 
        case 3:  printf("Mes: Marco | Dias: 31 dias\n"); break; 
        case 4:  printf("Mes: Abril | Dias: 30 dias\n"); break; 
        case 5:  printf("Mes: Maio | Dias: 31 dias\n"); break; 
        case 6:  printf("Mes: Junho | Dias: 30 dias\n"); break; 
        case 7:  printf("Mes: Julho | Dias: 31 dias\n"); break; 
        case 8:  printf("Mes: Agosto | Dias: 31 dias\n"); break; 
        case 9:  printf("Mes: Setembro | Dias: 30 dias\n"); break; 
        case 10: printf("Mes: Outubro | Dias: 31 dias\n"); break; 
        case 11: printf("Mes: Novembro | Dias: 30 dias\n"); break; 
        case 12: printf("Mes: Dezembro | Dias: 31 dias\n"); break;
    }

    return 0; 
}
