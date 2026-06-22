#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-54 - Validar de 1 a 5                       *\n");
    printf("************************************************************\n\n");

    int nivel;

    do {
        printf("Digite um nivel de 1 a 5: ");
        scanf("%d", &nivel);

        if(nivel < 1 || nivel > 5) {
            printf("Nivel invalido.\n");
        }

    } while(nivel < 1 || nivel > 5);

    printf("Nivel escolhido: %d\n", nivel);

    return 0;
}
