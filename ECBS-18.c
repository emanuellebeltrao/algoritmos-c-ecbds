#include <stdio.h>

int main() {

    int usuario, senha;

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-18 - Login simples                         *\n");
    printf("************************************************************\n\n");

    printf("Digite o usuario numerico: ");
    scanf("%d", &usuario);

    printf("Digite a senha: ");
    scanf("%d", &senha);

    if(usuario == 123 && senha == 1111) {
        printf("Acesso permitido.\n");
    }
    else {
        printf("Acesso negado.\n");
    }

    return 0;
}
