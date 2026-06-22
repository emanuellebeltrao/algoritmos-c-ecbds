#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-38 - Senha correta                          *\n");
    printf("************************************************************\n\n");

    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while(senha != 1234) {
        printf("Senha errada. Digite novamente: ");
        scanf("%d", &senha);
    }

    printf("Senha correta. Acesso liberado!\n");

    return 0;
}
