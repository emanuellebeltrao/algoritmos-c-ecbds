#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-45 - Menu ate sair                          *\n");
    printf("************************************************************\n\n");

    int opcao = 0;

    while(opcao != 3) {
        printf("\n1 - Ver saldo");
        printf("\n2 - Fazer saque");
        printf("\n3 - Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1) {
            printf("Saldo consultado.\n");
        }
        else {
            if(opcao == 2) {
                printf("Saque escolhido.\n");
            }
            else {
                if(opcao == 3) {
                    printf("Saindo do sistema.\n");
                }
                else {
                    printf("Opcao invalida.\n");
                }
            }
        }
    }

    return 0;
}
