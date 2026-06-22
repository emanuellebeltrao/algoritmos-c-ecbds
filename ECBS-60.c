#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-60 - Validador de dias                      *\n");
    printf("************************************************************\n\n");

    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch(dia) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia Util. Acesso liberado para o trabalho.\n");
            break;
        case 1:
        case 7:
            printf("Fim de Semana. Predio fechado.\n");
            break;
        default:
            printf("Numero de dia invalido.\n");
    }

    return 0;
}
