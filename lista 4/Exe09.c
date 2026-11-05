#include <stdio.h>
#include <windows.h>

int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota1, nota2, nota3, notapeso2, notapeso3, notapeso5, media;

    printf("\nEscreva as 3 notas do aluno:\n");
    scanf("%f, %f, %f", &nota1, &nota2, &nota3);

    notapeso2 = nota1 * 2;
    notapeso3 = nota2 * 3;
    notapeso5 = nota3 * 5;
    media = (notapeso2 + notapeso3 + notapeso5) / 10;

    if (media <= 2.9) {
        printf("O aluno está reprovado!");
    }
    else if (media >= 3.0 && media <= 4.9) {
        printf("O aluno está em recuperação");
    }
    else {
        printf("O aluno está aprovado");
    }

    return 0;
}