#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-16 - Multiplo de 3 e 5                      *\n");
    printf("************************************************************\n\n");

    int num;

    printf("Digite o numero do pedido: ");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 5 == 0) {
        printf("Ganhou refrigerante e sobremesa.\n");
    }
    else {
        if(num % 3 == 0) {
            printf("Ganhou refrigerante.\n");
        }
        else {
            if(num % 5 == 0) {
                printf("Ganhou sobremesa.\n");
            }
            else {
                printf("Nao ganhou brinde.\n");
            }
        }
    }

    return 0;
}
