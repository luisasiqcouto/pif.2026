/* Erros: 
* segunda linha -> não deve colocar ';' quando usamos o #include
* terceira linha -> o main esta com letra maiúscula e não pode, além de trocas as posições das chaves e parenteses
* quinta linha -> Não colocou ""
* sexta linha -> cout << endl é usado em c++, para pular linha em c usa \n*/

/*Programa corrigido*/

#include <stdio.h> 
#include <stdlib.h> 

int main() {
    
    printf("Existem %d semanas no ano\n", 52);
    getchar(); /*estou usando o getchar pois minha configuração esta em linux mas o uso de system("PAUSE") no programa original esta correto*/
    return 0;
}