#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-30 - Fatorial                               *\n");
    printf("************************************************************\n\n");

    int num, i, fat = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        fat = fat * i;
    }

    printf("O fatorial de %d e %d.\n", num, fat);

    return 0;
}
