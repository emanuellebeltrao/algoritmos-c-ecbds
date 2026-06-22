#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-42 - Quantidade de impares                  *\n");
    printf("************************************************************\n\n");

    int i = 1, num, qtd = 0;

    while(i <= 10) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num % 2 != 0) {
            qtd++;
        }

        i++;
    }

    printf("Quantidade de impares: %d\n", qtd);

    return 0;
}
