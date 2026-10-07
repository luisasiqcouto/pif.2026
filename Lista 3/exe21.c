#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char secreta, chute;
    int tentativas = 0;

    srand(time(NULL));
    secreta = rand() % 26 + 'a';

    do {
        printf("Chute uma letra (a-z): ");
        scanf(" %c", &chute);
        tentativas++;

        if (chute < secreta) {
            printf("A letra secreta vem DEPOIS no alfabeto.\n");
        } else if (chute > secreta) {
            printf("A letra secreta vem ANTES no alfabeto.\n");
        }
    } while (chute != secreta);

    printf("Parabens! Voce acertou em %d tentativas.\n", tentativas);
    return 0;
}