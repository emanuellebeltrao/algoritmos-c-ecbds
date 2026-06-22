#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-29 - Pares de 0 a 50                        *\n");
    printf("************************************************************\n\n");

    int i;

    for(i = 0; i <= 50; i++) {
        if(i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
