#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-44 - Contar digitos                         *\n");
    printf("************************************************************\n\n");

    int num, contador = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    if(num == 0) {
        contador = 1;
    }

    while(num > 0) {
        num = num / 10;
        contador++;
    }

    printf("Quantidade de digitos: %d\n", contador);

    return 0;
}
