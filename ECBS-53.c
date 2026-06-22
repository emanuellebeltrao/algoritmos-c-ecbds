#include <stdio.h>

int main() {

    char sair;

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-53 - Confirmar saida                         *\n");
    printf("************************************************************\n\n");

    do {
        printf("Menu do sistema\n");
        printf("Operacao realizada.\n");

        printf("Deseja sair? Digite s para sair: ");
        scanf(" %c", &sair);

    } while(sair != 's');

    printf("Sistema encerrado.\n");

    return 0;
}
