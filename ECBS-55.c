#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-55 - Maior ate negativo                     *\n");
    printf("************************************************************\n\n");

    int num, maior = 0, primeiro = 1;

    do {
        printf("Digite um numero positivo ou negativo para sair: ");
        scanf("%d", &num);

        if(num >= 0) {
            if(primeiro == 1) {
                maior = num;
                primeiro = 0;
            }
            else {
                if(num > maior) {
                    maior = num;
                }
            }
        }

    } while(num >= 0);

    if(primeiro == 0) {
        printf("Maior numero digitado: %d\n", maior);
    }
    else {
        printf("Nenhum numero positivo foi digitado.\n");
    }

    return 0;
}
