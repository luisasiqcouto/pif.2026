#include <stdio.h>

int main() {
    int opcao;
    float salario, novo_salario, imposto;

    do {
        printf("\n--- MENU FOLHA DE PAGAMENTO ---\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o salario atual: R$ ");
                scanf("%f", &salario);
                if (salario <= 2000.0) novo_salario = salario * 1.15;
                else novo_salario = salario * 1.10;
                printf("Novo salario: R$ %.2f\n", novo_salario);
                break;
            case 2:
                printf("Digite o salario atual: R$ ");
                scanf("%f", &salario);
                if (salario <= 3000.0) imposto = salario * 0.08;
                else imposto = salario * 0.15;
                printf("Valor retido de IR: R$ %.2f\n", imposto);
                break;
            case 3:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
