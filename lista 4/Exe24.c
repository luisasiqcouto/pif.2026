#include <stdio.h> 
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a1, a2, a3, soma_angulos; 

    printf("Digite os tres angulos internos do triangulo em graus: "); 
    scanf("%d %d %d", &a1, &a2, &a3); 

    if (a1 <= 0 || a2 <= 0 || a3 <= 0) { 
        printf("Erro: Os angulos de um triangulo devem ser estritamente positivos!\n"); 
    }

    soma_angulos = a1 + a2 + a3; 

    if (soma_angulos == 180) { 
        printf("Os angulos informados formam um triangulo valido.\n"); 

        if (a1 == 90 || a2 == 90 || a3 == 90) { 
            printf("Classificacao: Triangulo Retangulo\n"); 
        } else if (a1 > 90 || a2 > 90 || a3 > 90) { 
            printf("Classificacao: Triangulo Obtusangulo\n"); 
        } else { 
            printf("Classificacao: Triangulo Acutangulo\n"); 
        }
    } else { 
        printf("Erro: A soma dos angulos e %d graus. Nao forma um triangulo valido (soma deve ser 180)!\n", soma_angulos);
    }

    return 0; 
}