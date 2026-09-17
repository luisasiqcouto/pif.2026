#include <stdio.h>

int main() {
    char ch;

    printf("Digite um caractere: ");
    scanf(" %c", &ch);

    printf("O caractere '%c' corresponde ao codigo ASCII inteiro: %d\n", ch, ch);

    return 0;
}