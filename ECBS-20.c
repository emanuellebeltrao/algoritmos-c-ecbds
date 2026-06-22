#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-20 - Ano bissexto                           *\n");
    printf("************************************************************\n\n");

    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        printf("Ano bissexto.\n");
    }
    else {
        printf("Ano nao bissexto.\n");
    }

    return 0;
}
