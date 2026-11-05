#include <stdio.h> 
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int horas;
    float valor_total = 0.0; 

    printf("Digite a quantidade de horas inteiras de permanencia: "); 
    scanf("%d", &horas); 

    if (horas <= 0) { 
        printf("Erro: O tempo de permanencia deve ser de pelo menos 1 hora!\n"); 
        return 0; 
    }

    if (horas <= 2) { 
        valor_total = horas * 2.00;
    } else if (horas <= 4) { 
        valor_total = (2 * 2.00) + ((horas - 2) * 2.50);
    } else { 
        valor_total = (2 * 2.00) + (2 * 2.50) + ((horas - 4) * 3.00);
    }

    printf("\nTempo total de permanencia: %d hora(s)\n", horas); 
    printf("Valor final do ticket cobrado: R$ %.2f\n", valor_total); 

    return 0; 
}
