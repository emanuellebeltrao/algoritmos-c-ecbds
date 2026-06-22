#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-47 - Tabuada do while                       *\n");
    printf("************************************************************\n\n");

    int num, i = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    do {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while(i <= 10);

    return 0;
}
