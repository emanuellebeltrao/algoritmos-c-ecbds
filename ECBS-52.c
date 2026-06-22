#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-52 - Soma ate multiplo de 10                *\n");
    printf("************************************************************\n\n");

    int num, soma = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);

        soma = soma + num;

    } while(num % 10 != 0);

    printf("Soma total: %d\n", soma);

    return 0;
}
