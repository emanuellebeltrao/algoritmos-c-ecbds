#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-22 - Par ou Impar                           *\n");
    printf("************************************************************\n\n");

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("Numero par.\n");
    }
    else {
        printf("Numero impar.\n");
    }

    return 0;
}
