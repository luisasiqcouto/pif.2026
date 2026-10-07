Lista 3 - Respostas teóricas

01- 
a) While: Começa ja testando a condição e caso seja falso, não roda nenhuma vez. Do while: Começa ja rodando o bloco pelo menos uma vez, independente da condição ser verdadeira ou falsa, e depois faz o primeiro teste para decidir se repete ou não. 

b) For: Quando já se sabe quantas vezes a instrução deve ser repetida.
   While: Quando não se sabe quantas vezes a instrução deve ser repetida.
   Do while: Quando não se sabe quantas vezes a instrução deve ser repetida, mas precisa roda pelo menos uma vez. 

c) É um erro de lógica. Quando é executado fica em loop vazio infinito. 

02- 
a) Porque a variável soma foi declarada apenas dentro do bloco for.

b) Porque a variável soma e função print será parte apenas do bloco e toda vez que o bloco iniciar vai ser criado um novo printf, então no terminal aparecerá "soma final" 9 vezes com o quadrado de cada némero e não a soma total entre eles.

c) Código corrigido: 
#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    int soma = 0;

    for (i = 1; i < 10; i++) {
        int soma = 0;
        soma += i * i;
    }
    
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

Visibilidade - É o conceito de uma variável ter valores diferentes dependendo do bloco em que esteja, ela pode ser igual a 10 e quando chamada dentro de um bloco é dado um novo valor como 50, dentro desse bloco será considerado 50 e ao sair desse bloco volta a ser 10. 
Escopo de bloco - É onde a varável vai ser reconhecida, se declara dentro de um bloco, quando ele se encerrar essa variável não será mais reconhecida. 
Tempo de vida - Se a variável for declarada dentro de {}, ela só será guardada na memória enquanto aquele bloco estiver aberto, ao encerrar essa variável é destruída. Mas se declarada em um espaço fixo da memória assim que o programa começar, só é destruída apenas quando o programa encerrar.

03- 
a) 36,18,9,4,2,1.

b) Lê um caractere digitado via getch()até que seja 'X'. A operação ch + 1pega o valor ASCII da tecla e imprime o caractere seguinte no alfabeto. Os parênteses (ch = getch())são necessários porque o operador de atribuição (=) tem menor precedência que o operador de diferença (!=).

c) O laço pode ser interrompido usando o comando breakcondicionado a alguma verificação interna.

04-
a) O break encerra imediatamente o laço, transferindo a execução para a primeira linha após o laço.

b) O continuepula o restante do código dentro do bloco e passa direto para a próxima iteração. No caso do for, ele salta imediatamente para a expressão de incremento.

c) Interrompe apenas o laço interno onde o breakfoi executado. 

05-
a) Executará exatamente 5 iterações. 

b) i = 0, j = 10 soma = 10
i = 1, j = 9 soma = 10
i = 2, j = 8 soma = 10
i = 3, j = 7 soma = 10
i = 4, j = 6 soma = 10

c) int i = 0, j = 10;
while (i < j) {
    printf("i = %d, j = %d soma = %d\n", i, j, i + j);
    i++;
    j--;
}

06- 
a) O valor final impresso será 6.

b) x=0: comparar 0 < 5 (v), x vira 1. 
x=1: comparar 1 < 5 (v), x vira 2. 
x=2: comparar 2 < 5 (v), x vira 3. 
x=3: comparar 3 < 5 (v), x vira 4. 
x=4 : comparar 4 < 5 (v), x vira 5.
x=5: comparar 5 < 5 (f), x vira 6.

c) int x = 0;
while (x < 5) {
    x++;
}
x++; 
printf("Valor final de x = %d\n", x);