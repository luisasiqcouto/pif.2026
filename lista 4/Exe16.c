#include <stdio.h> 
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float distancia_km, litros_consumidos, consumo_kml; 

    printf("\nDigite a distancia percorrida em km:\n"); 
    scanf("%f", &distancia_km); 

    printf("Digite a quantidade de litros consumidos:\n"); 
    scanf("%f", &litros_consumidos); 

    consumo_kml = distancia_km / litros_consumidos; 

    printf("Consumo medio calculado: %.2f km/l\n", consumo_kml); 

    if (consumo_kml < 8.0) { 
        printf("Classificacao: Venda o carro!\n"); 
    } else if (consumo_kml >= 8.0 && consumo_kml <= 14.0) { 
        printf("Classificacao: Economico!\n"); 
    } else { 
        printf("Classificacao: Super economico!\n"); 
    }

    return 0; 
}