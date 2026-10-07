01- Letra C

02- Primeiro erro é o ponto e vírgula no '#include <stdlib.h>'. O 'main' esta com a inicial maiúscula. Não colocou aspas dentro do printf na frase. E 'cout << endl;' pertence ao C++.

03- 
a) a = 11
b) b = 32; c = 8
c) d = 4
d) c = 13; b = 45; a = 56

04- 
a) 1
b) 1
c) 0
d) 1
e) 1

05- While: Começa ja testando a condição e caso seja falso, não roda nenhuma vez. Do while: Começa ja rodando o bloco pelo menos uma vez, independente da condição ser verdadeira ou falsa, e depois faz o primeiro teste para decidir se repete ou não.

06- 
a) Porque a variável soma só foi declarada dentro do bloco for.

b) O bloco for será executado de toda forma normal, porém o printf retornará um valor do lixo de memória. O break encerra o bloco independente se ainda tivesse quanrtas vezes o bloco ainda fosse rodar. O continue faz com que o fluxo de uma pausa rápida e pule aquele valor e siga para o próximo. 

c) Código corrigido: 

#include <stdio.h>
#include <stdlib.h>

int main() {

 int i;
 int soma = 0;

 for (i = 1; i <= 10; i++) {
 if (i == 5) continue;
 if (i == 8) break;
 soma += i * i;
 }

 printf("Soma final = %d\n", soma);
 return 0;
}

Impressão no terminal: 
Soma final = 115