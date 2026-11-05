---------------------------- lista 4 ----------------------------

01 
a) Usando apenas (x=0) o código não será executado, pois usando apenas um '=' significa atribuição e com isso quando o programa for executar, o valor de 0 será atribuido a x, porém como 0 é falso, o programa nunca executará o bloco. 
   Já se colocarmos (x==0) ai sim o valor de X estará sendo comparado a 0 e caso a condição retorne verdadeira o bloco será executado. 

b) Em C, qualquer valor diferente de zero é considerado como verdadeiro e zero como falso. Então se colocarmos um valor que resulte em zero dentro de um if, o bloco não será executado. 

c) Será executado, pois mesmo sendo um valor negativo, é diferente de zero e retorna o valor verdadeiro. Sendo assim, será executado. 

02
a) Será exibido "opção b" devido ao if's estarem sem chaves e isso faz com que o else se ligue ao if mais próximo, independente de tabulações, e como o segundo if retorna falso, o bloco do else que será executado. 

b) O else se liga ao if mais próximo independente de tabulções e espaços. 

c) int x = 15, y = 5;
   if (x > 10) {
      if (y > 10) {
         printf("Opção A\n"); }
   }
   else {
      printf("Opção B\n"); }

03
a) Temos a variável 'situação' e vai ser guardado um valor nessa variável que será decidido pelo operador condicional ternário. Primeiro tem a condição que é '(media >= 7.0)' e é colocado '?' depois da condicional e ai colocamos o primeiro valor que será armazenado caso a condicão seja atendida, depois colocamos ':' e após isso colocamos o segundo valor que será armazenado caso a condição não seja atendida. Então é como se o primeiro valor fosse o 'if' e o segundo valor fosse o 'else' e a condição é definida antes. 

b) 
float nota1 = 6.8, nota2 = 6.8, media;
char situacao; 

media = (nota1 + nota2) / 2.0;

if (media >= 7.0) {
   situacao = 'A' }
else {
   situacao = 'R' }

printf("Situação = c%", situacao)

c) Não. Precisa ter um valor de retorno, não conseguimos executar um bloco de instruções complexo, só retorna um único valor ou expressão. E não é recomendado fazer aninhamento, pois prejudica a legibilidade. 

04
a) Prata e ouro. Isso acontece, pois a verificação de igualdade acontece apenas uma vez, por isso começa no case 2, mas após isso não tem mais verificação e como não tem o break, as próximas linhas serão executadas. 

b) O break serve como instrução para interromper a execução e sair do bloco switch. Sua omissão se chama Fall-through. 

c) Só podemos usar valores inteiros ou discretos. Não, pois são pontos flutuantes. 

05
a) a = 0, b = 5, c = 8. Foi ignorado, pois 'a' não é diferente de zero e como o operador lógico é '&&', se um valor for falso, tudo será falso, então o incremento do ++b foi ignorado. 

b) A avaliação de curto-circuito é uma otimização desenvolvida pelo compilador da linguagem C na qual a avaliação de uma expressão lógica para de ser realizada assim que o resultado final, verdadeiro ou falso, já puder ser determinado com certeza.

c) a = 0, b = 5, c = 20.

06. 
a) Idoso, adulto e jovem, pois todos os if's são testados e no if de adulto e jovem é perguntado se é maior ou igual a 18 e 12, e 65 é maior que os dois, então a condição é verdadeira e por isso o vai ser exibido 'adulto e jovem' também. 

b) Em uma sequência de comandos if independentes, todos os if's vão ser testados e caso retorne verdadeiro as instruções serão executadas. No else-if, quando uma condição retornar verdadeiro, as demais não serão mais testadas.

c)  int idade = 65;
    
   if (idade >= 60) 
        printf("Idoso\n");
   
    else if (idade >= 18)
        printf("Adulto\n");
    

    else if (idade >= 12)
        printf("Jovem\n");
    
    else 
        printf("Criança\n");