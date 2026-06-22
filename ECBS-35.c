#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-35 - Fibonacci                              *\n");
    printf("************************************************************\n\n");

    int n, i;
    int a = 0, b = 1, c;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    printf("Sequencia: ");

    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
