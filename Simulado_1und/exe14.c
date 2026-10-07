#include <stdio.h>

int main() {
    int senha_secreta = 2026;
    int tentativa, i;

    for (i = 1; i <= 3; i++) {
        printf("Digite a senha: ");
        scanf("%d", &tentativa);

        if (tentativa == senha_secreta) {
            printf("Acesso Concedido!\n");
            return 0;
        }
    }

    printf("Conta Bloqueada por Seguranca!\n");
    return 0;
}