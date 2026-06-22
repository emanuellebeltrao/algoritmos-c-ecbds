#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-49 - Senha ate acertar                      *\n");
    printf("************************************************************\n\n");

    int senha;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if(senha != 1111) {
            printf("Senha incorreta.\n");
        }

    } while(senha != 1111);

    printf("Acesso liberado!\n");

    return 0;
}
