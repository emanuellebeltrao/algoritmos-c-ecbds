#include <stdio.h>

int main() {

    int a, b, c;

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-19 - Ordem crescente                       *\n");
    printf("************************************************************\n\n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    printf("\nOrdem crescente: ");

    if(a <= b && b <= c) {
        printf("%d %d %d\n", a, b, c);
    }
    else if(a <= c && c <= b) {
        printf("%d %d %d\n", a, c, b);
    }
    else if(b <= a && a <= c) {
        printf("%d %d %d\n", b, a, c);
    }
    else if(b <= c && c <= a) {
        printf("%d %d %d\n", b, c, a);
    }
    else if(c <= a && a <= b) {
        printf("%d %d %d\n", c, a, b);
    }
    else {
        printf("%d %d %d\n", c, b, a);
    }

    return 0;
}
