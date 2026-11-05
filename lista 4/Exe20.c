#include <stdio.h> 
#include <math.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float a, b, c, delta, x1, x2; 

    printf("\nDigite os coeficiente a, b, c:\n"); 
    scanf("%f\n %f\n %f", &a, &b, &c); 

    if (a == 0.0) { 
        printf("Erro: O coeficiente 'a' deve ser diferente de zero em uma equacao do 2o grau!\n"); 
    }

    delta = (b * b) - (4.0 * a * c);

    printf("Valor de Delta: %.2f\n", delta); 

    if (delta < 0.0) {
        printf("A equacao nao possui raizes reais.\n"); 
    } else if (delta == 0.0) { 
        x1 = -b / (2.0 * a); 
        printf("A equacao possui uma raiz real unica: x = %.2f\n", x1); 
    } else { 
        x1 = (-b + sqrt(delta)) / (2.0 * a); 
        x2 = (-b - sqrt(delta)) / (2.0 * a); 
        printf("A equacao possui duas raizes reais distintas:\n");
        printf("x1 = %.2f\n", x1); 
        printf("x2 = %.2f\n", x2); 
    }

    return 0; 
}