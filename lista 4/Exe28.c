#include <stdio.h> 
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int opcao;

    printf("=== SISTEMA DE ATENDIMENTO BANCARIO (SAC) ===\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite a opcao desejada: "); 
    scanf("%d", &opcao); 

    switch (opcao) {
        case 1: 
            printf("\n[SAC] Direcionando para: Consulta de Saldo. Aguarde um instante...\n"); 
            break; 
        case 2: 
            printf("\n[SAC] Direcionando para: Emissao de Extrato Bancario...\n"); 
            break; 
        case 3: 
            printf("\n[SAC] Direcionando para: Area de Transferencias Pix e TED...\n"); 
            break; 
        case 4: 
            printf("\n[SAC] Aguarde na linha, transferindo para um de nossos atendentes...\n"); 
            break; 
        default: 
            printf("\n[SAC] Erro: Opcao invalida! Por favor, digite um numero entre 1 e 4.\n"); 
            break; 
    }

    return 0; 
}
