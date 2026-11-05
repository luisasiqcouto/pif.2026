#include <stdio.h> 
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float a, b, c; 

    printf("\nDigite os tres lados do triangulo (A B C):\n"); 
    scanf("%f %f %f", &a, &b, &c); 

    if ((a < b + c) && (b < a + c) && (c < a + b)) { 
        printf("Os lados informados formam um triangulo valido.\n"); 

        if (a == b && b == c) { 
            printf("Classificacao: Triangulo Equilatero\n"); 
        } else if (a == b || a == c || b == c) { 
            printf("Classificacao: Triangulo Isosceles\n");
        } else { 
            printf("Classificacao: Triangulo Escaleno\n"); 
        }
    } else { 
        printf("Erro: Os lados fornecidos nao formam um triangulo!\n"); 
    }

    return 0; 
}