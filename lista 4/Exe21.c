#include <stdio.h> 
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float salario_atual, aumento, novo_salario; 
    int codigo_cargo; 

    printf("\nDigite o salario atual do funcionario (R$):\n"); 
    scanf("%f", &salario_atual); 

    printf("Codigos de cargo:\n1 - Tecnico\n2 - Gerente\n3 - Demais Cargos\nDigite o codigo do cargo: "); 
    scanf("%d", &codigo_cargo); 

    switch (codigo_cargo) {
        case 1:
            if (salario_atual <= 3000.0) { 
                aumento = salario_atual * 0.15; 
            } else { 
                aumento = salario_atual * 0.10; 
            }
            break; 
        case 2: 
            if (salario_atual <= 5000.0) { 
                aumento = salario_atual * 0.10; 
            } else { 
                aumento = salario_atual * 0.05; 
            }
            break; 
        case 3: 
            aumento = salario_atual * 0.08; 
            break; 
        default: 
            printf("Erro: Codigo de cargo invalido!\n"); 
            return 0; 
    }

    novo_salario = salario_atual + aumento; 

    printf("\nValor do aumento concedido: R$ %.2f\n", aumento);
    printf("Novo salario reajustado: R$ %.2f\n", novo_salario); 

    return 0; 
}