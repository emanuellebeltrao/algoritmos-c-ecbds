#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-37 - Soma ate zero                          *\n");
    printf("************************************************************\n\n");

    int num, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while(num != 0) {
        soma = soma + num;
        printf("Digite outro numero: ");
        scanf("%d", &num);
    }

    printf("Soma total: %d\n", soma);

    return 0;
}
