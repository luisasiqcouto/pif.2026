#include <stdio.h> 
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float valor_total, valor_final, valor_parcela, comissao; 
    int opcao_pagamento; 

    printf("\nDigite o valor total da compra:\n "); 
    scanf("%f", &valor_total); 

    printf("Opcoes de pagamento:\n1 - A vista (10%% de desconto)\n2 - Parcelado em 3x sem juros\nEscolha a opcao: "); 
    scanf("%d", &opcao_pagamento); 

    if (opcao_pagamento == 1) { 
        valor_final = valor_total * 0.90; 
        comissao = valor_final * 0.05; 
        printf("Valor final a pagar: R$ %.2f\n", valor_final); 
        printf("Comissao do vendedor: R$ %.2f\n", comissao); 
    } else if (opcao_pagamento == 2) { 
        valor_parcela = valor_total / 3.0; 
        comissao = valor_total * 0.05; 
        printf("Valor de cada parcela (3x): R$ %.2f\n", valor_parcela); 
        printf("Comissao do vendedor: R$ %.2f\n", comissao); 
    } else { 
        printf("Erro: Opcao de pagamento invalida!\n"); 
    }

    return 0; 
}