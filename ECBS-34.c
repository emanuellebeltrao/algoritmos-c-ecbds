#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-34 - Numero primo                           *\n");
    printf("************************************************************\n\n");

    int num, i, divisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            divisores++;
        }
    }

    if(divisores == 2) {
        printf("Numero primo.\n");
    }
    else {
        printf("Numero nao primo.\n");
    }

    return 0;
}
