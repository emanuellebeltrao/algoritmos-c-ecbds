#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-56 - Menu Fast Food                         *\n");
    printf("************************************************************\n\n");

    int opcao;

    printf("1 - Combo Hamburguer\n");
    printf("2 - Combo Pizza\n");
    printf("3 - Combo Salada\n");
    printf("4 - Combo Frango\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Combo Hamburguer + Batata + Refri - R$ 30,00\n");
            break;
        case 2:
            printf("Combo Pizza Brotinho + Refri - R$ 25,00\n");
            break;
        case 3:
            printf("Combo Salada + Suco Natural - R$ 22,00\n");
            break;
        case 4:
            printf("Combo Balde de Frango + Molho - R$ 35,00\n");
            break;
        default:
            printf("Opcao invalida! Escolha de 1 a 4.\n");
    }

    return 0;
}
