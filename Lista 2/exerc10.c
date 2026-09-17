#include <stdio.h> 

int main() {

    float tempC; 
    float tempF;
    float tempK;

    printf("Escreva qual o valor da temperatura que deseja converter:\n");
    scanf("%f", &tempC);

    tempF = (tempC * 1.8) + 32;
    tempK = tempC + 273.15;

    printf("Valor em Fahrenheit: %.2f.\nValor em Kelvin: %.2f", tempF, tempK);

    return 0;
}