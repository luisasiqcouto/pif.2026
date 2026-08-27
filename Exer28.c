#include <stdio.h>
#include <stdlib.h> 

int main() {

    float n1, n2, n3, media;

    printf("Escreva suas notas:");
    scanf("%f,%f,%f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) /3;

    printf("Sua média é %.2f", media);

    return 0;
}

