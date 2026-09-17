#include <stdio.h>

int main() {
    char maiuscula, minuscula;

    printf("Digite uma letra maiuscula (A-Z): ");
    scanf(" %c", &maiuscula);

    minuscula = maiuscula + 32; 

    printf("Letra convertida para minuscula: %c\n", minuscula);
    return 0;
}