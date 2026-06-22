#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-21 - Positivo ou Negativo                   *\n");
    printf("************************************************************\n\n");

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num > 0) {
        printf("Numero positivo.\n");
    }
    else {
        if(num < 0) {
            printf("Numero negativo.\n");
        }
        else {
            printf("Numero zero.\n");
        }
    }

    return 0;
}
