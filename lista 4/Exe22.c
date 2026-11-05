#include <stdio.h> 
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float valor_produto, preco_final, imposto; 
    int codigo_estado; 

    printf("\nDigite o valor do produto (R$):\n"); 
    scanf("%f", &valor_produto); 

    printf("Codigos de estado de destino:\n1 - MG (7%%)\n2 - SP (12%%)\n3 - RJ (15%%)\n4 - MS (8%%)\nDigite o codigo do estado: ");
    scanf("%d", &codigo_estado); 

    switch (codigo_estado) {
        case 1: 
            imposto = valor_produto * 0.07; 
            break; 
        case 2: 
            imposto = valor_produto * 0.12; 
            break; 
        case 3: 
            imposto = valor_produto * 0.15; 
            break; 
        case 4: 
            imposto = valor_produto * 0.08; 
            break; 
        default: 
            printf("Erro: Codigo de estado invalido!\n"); 
            return 0; 
    }

    preco_final = valor_produto + imposto; 

    printf("\nValor do imposto estadual: R$ %.2f\n", imposto); 
    printf("Preco final do produto com imposto: R$ %.2f\n", preco_final); 

    return 0; 
}
