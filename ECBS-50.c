#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-50 - Positivo obrigatorio                   *\n");
    printf("************************************************************\n\n");

    int num;

    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);

        if(num <= 0) {
            printf("Valor invalido.\n");
        }

    } while(num <= 0);

    printf("Valor aceito: %d\n", num);

    return 0;
}
