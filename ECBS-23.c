#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-23 - Maior de dois numeros                  *\n");
    printf("************************************************************\n\n");

    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if(n1 > n2) {
        printf("O maior numero e %d.\n", n1);
    }
    else {
        if(n2 > n1) {
            printf("O maior numero e %d.\n", n2);
        }
        else {
            printf("Os numeros sao iguais.\n");
        }
    }

    return 0;
}
