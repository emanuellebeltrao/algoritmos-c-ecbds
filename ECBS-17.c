#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-17 - Sensor do Parque                       *\n");
    printf("************************************************************\n\n");

    int altura;

    printf("Digite a altura em centimetros: ");
    scanf("%d", &altura);

    if(altura >= 140) {
        printf("Luz verde: liberado.\n");
    }
    else {
        printf("Luz vermelha: barrado.\n");
    }

    return 0;
}
