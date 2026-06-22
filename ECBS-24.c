#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-24 - Pode votar                             *\n");
    printf("************************************************************\n\n");

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 16) {
        printf("Pode votar.\n");
    }
    else {
        printf("Nao pode votar.\n");
    }

    return 0;
}
