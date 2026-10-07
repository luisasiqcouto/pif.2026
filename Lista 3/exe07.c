#include <stdio.h>
#include <stdlib.h>

int main() {
int a, b = 0, c=0;

printf("for:\n");
for (a = 0; a <= 100; a++) {
    printf("%d\t", a);
}

printf("\nwhile:\n");
while(b <=100 ) {
    printf("%d\t", b);
    b = b+1;
}

printf("\nDo-while:\n");
do {
    printf("%d\t", c);
    c = c + 1;
} while (c<=100);

 return 0;
}

/*For, pois sabemos quantas vezes queremos que a instrução se repita.*/