#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-28 - Soma de 1 ate 100                      *\n");
    printf("************************************************************\n\n");

    int i, soma = 0;

    for(i = 1; i <= 100; i++) {
        soma = soma + i;
    }

    printf("A soma e %d.\n", soma);

    return 0;
}
