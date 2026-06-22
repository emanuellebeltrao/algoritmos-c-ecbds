#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-41 - Primo com while                        *\n");
    printf("************************************************************\n\n");

    int num, i = 1, divisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while(i <= num) {
        if(num % i == 0) {
            divisores++;
        }
        i++;
    }

    if(divisores == 2) {
        printf("Numero primo.\n");
    }
    else {
        printf("Numero nao primo.\n");
    }

    return 0;
}
