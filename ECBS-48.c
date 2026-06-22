#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-48 - Menu com sair                          *\n");
    printf("************************************************************\n\n");

    int opcao;

    do {
        printf("\n1 - Mensagem");
        printf("\n2 - Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1) {
            printf("Voce escolheu a mensagem!\n");
        }
        else {
            if(opcao != 2) {
                printf("Opcao invalida.\n");
            }
        }

    } while(opcao != 2);

    printf("Programa encerrado.\n");

    return 0;
}
