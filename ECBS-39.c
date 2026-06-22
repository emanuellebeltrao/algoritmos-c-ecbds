#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-39 - Numero positivo                        *\n");
    printf("************************************************************\n\n");

    int num;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    while(num <= 0) {
        printf("Numero invalido. Digite um positivo: ");
        scanf("%d", &num);
    }

    printf("Numero aceito: %d\n", num);

    return 0;
}
