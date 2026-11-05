#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao; 
    float temp_entrada, temp_convertida; 

    printf("\n=== MENU DE CONVERSOR DE TEMPERATURA ===\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opcao: "); 
    scanf("%d", &opcao); 

    switch (opcao) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temp_entrada); 
            temp_convertida = (temp_entrada * 1.8) + 32.0; 
            printf("%.2f Celsius = %.2f Fahrenheit\n", temp_entrada, temp_convertida); 
            break; 
        case 2: 
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temp_entrada); 
            temp_convertida = temp_entrada + 273.15; 
            printf("%.2f Celsius = %.2f Kelvin\n", temp_entrada, temp_convertida); 
            break; 
        case 3: 
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temp_entrada); 
            temp_convertida = (temp_entrada - 32.0) / 1.8; 
            printf("%.2f Fahrenheit = %.2f Celsius\n", temp_entrada, temp_convertida); 
            break; 
        case 4: 
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &temp_entrada); 
            temp_convertida = temp_entrada - 273.15; 
            printf("%.2f Kelvin = %.2f Celsius\n", temp_entrada, temp_convertida); 
            break; 
        default: 
            printf("Erro: Opcao de conversao invalida!\n"); 
            break; 
    }

    return 0; 
}