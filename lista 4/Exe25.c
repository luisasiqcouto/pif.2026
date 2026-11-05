#include <stdio.h> 
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int valor_pagar, valor_entregue, troco, restante; 
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0; 

    printf("Digite o valor total a pagar (R$): "); 
    scanf("%d", &valor_pagar); 

    printf("Digite o valor entregue pelo cliente (R$): "); 
    scanf("%d", &valor_entregue); 

    if (valor_entregue < valor_pagar) { 
        printf("Erro: Valor entregue e insuficiente! Faltam R$ %d.\n", valor_pagar - valor_entregue); 
    }

    troco = valor_entregue - valor_pagar;

    printf("\nTroco total a devolver: R$ %d\n", troco); 

    if (troco == 0) { 
        printf("Pagamento exato. Nao ha troco a ser devolvido.\n"); 
        return 0; 
    }

    restante = troco; 

    if (restante % 2 != 0) { 
        if (restante >= 5) { 
            n5 = 1; 
            restante -= 5; 
        }
    }

    n100 = restante / 100; 
    restante %= 100; 

    n50 = restante / 50; 
    restante %= 50; 

    n20 = restante / 20; 
    restante %= 20; 

    n10 = restante / 10;
    restante %= 10; 

    n2 = restante / 2; 
    restante %= 2; 

    printf("=== DECOMPOSICAO DO TROCO ===\n");
    if (n100 > 0) printf("Cedulas de R$ 100: %d\n", n100); 
    if (n50 > 0)  printf("Cedulas de R$ 50:  %d\n", n50);  
    if (n20 > 0)  printf("Cedulas de R$ 20:  %d\n", n20);  
    if (n10 > 0)  printf("Cedulas de R$ 10:  %d\n", n10);  
    if (n5 > 0)   printf("Cedulas de R$ 5:   %d\n", n5);   
    if (n2 > 0)   printf("Cedulas de R$ 2:   %d\n", n2);   
    return 0;
}   