- Respostas teóricas da lista 02 -

01) 
a) Será exibido o valor '2'
b) Porque o compilador vai entender que o valor inserido é apenas o que esta antes do ponto, o valor inteiro, vai ignorar o que estiver depois do ponto. Isso se chama truncamento de tipos ou coerção implícita.
c) Para que isso seja concertado ele deve trocar a especificação da variável, de 'int' para 'float' e o '%d' por '%f' e caso queira que arrendonde é so colocar '%.1f' que arredonda para 3.00.

02) 
a) É uma extensão legada e não padronizada, criada originalmente para compiladores MS-DOS, além da falta de portaibilidade.
b) Getchar, para entradas, só muda que precisa do enter para processar o caractere. E putchar, para saídas.
c) char opcao;

    printf("Digite uma opcao (A, B ou C): ");
    
    // O espaço antes de %c descarta '\n' e espaços anteriores
    scanf(" %c", &opcao); 

    printf("Voce digitou: '%c'\n", opcao);

03) Primeiro tem q criar a variável que vai guardar o valor do número, Depois tem que solicitar que o usuário digite um número e que essa variável seja processada e se usa o 'prinf' e o 'scanf'. Depois é só usar outro printf para mostrar os valores dessa forma: printf("Decimal: %d\nxadecimal: %x\nOctal: %o\nASCII: %c\n", n1, n1, n1, n1);

04)
a) A expressão 'b + c' é avaliada primeiro e depois o resultado, que é 5, é somado ao valor de 'a', que é 1, e o resultado final é 6. a = 6; b = 2; c = 3; d =4.
b) Primeiro fazemos a expressão 'c = d + 2', que resulta em 'c = 6' e então fazemos 'b * 6', que é o mesmo de '2 * 6', e então o resultado final é 12. a = 6; b = 12; c = 6; d = 4.
c) Fazemos primeiro 'a + a + a' que agora é 6 então resulta em 18 e agora calculamos ' d % 18' que da 4 % 18 = 4. a = 6; b = 12; c = 6; d = 4.
d) Primeiro fazemos 'b - a' que é '12 - 6', então agora b = 6. Depois fazemos ' c - b' que é '6 - 6' então c vira 0. Por fim, 'd - c' que é '4 - 0' então 'd' continua 4. a = 6; b = 6; c = 0; d = 4.
e) Primeiro fazemos 'c + 7' então 'c' vira 7. Depois 'b + c' que é '6 + 7', então 'b' vira 13. Por fim, 'a + b' que é '6 + 13', então 'a' vira 19. a =19; b = 13; c = 7; d = 4.

05)
a) 1
b) 0
c) 0
d) 0
e) 1 
f) 1
g) 1
h) 1
i) 0
j) 0

06)
a) Prefixado ( ++n): O valor da variável é incrementado antes de ser utilizado na instrução. int x = ++n; Passa de 5 para 6, e depois 6 é atribuído a x. Trecho A: n = 6, x = 6.
Pós-fixado ( m++): O valor atual da variável é usado primeiro na instrução, e só depois a variável é incrementada na memória. int y = m++; O valor atual de m(5) é atribuído a y, e só então m passa para ser 6. Trecho B: m = 6, y = 5.