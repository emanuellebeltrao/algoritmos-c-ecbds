#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-43 - Soma dos pares                         *\n");
    printf("************************************************************\n\n");

    int i = 1, soma = 0;

    while(i <= 100) {
        if(i % 2 == 0) {
            soma = soma + i;
        }
        i++;
    }

    printf("Soma dos pares: %d\n", soma);

    return 0;
}
