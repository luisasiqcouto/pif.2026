#include <stdio.h> 

int main() {

    int n1;
    int ant;
    int suc;

    printf("Escreva um número:\n");
    scanf("%d", &n1);

    ant = n1;
    suc = n1;
    --ant; /*Modifica apenas a variável 'ant' e não a 'n1' em si*/
    ++suc; /*Modifica apenas a variável 'suc' e não a 'n1' em si*/


    printf("O número antecessor é %d e o sucessor é %d\n", ant, suc);

    return 0;

}
