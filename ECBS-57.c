#include <stdio.h>

int main() {

    char cor;

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-57 - Brinquedo Eletronico                  *\n");
    printf("************************************************************\n\n");

    printf("Digite a cor que acendeu:\n");
    printf("V - Verde\n");
    printf("A - Amarelo\n");
    printf("R - Vermelho\n");
    printf("Opcao: ");
    scanf(" %c", &cor);

    switch(cor) {
        case 'V':
        case 'v':
            printf("O urso diz: Vamos brincar la fora!\n");
            break;

        case 'A':
        case 'a':
            printf("O urso diz: Estou ficando com soninho...\n");
            break;

        case 'R':
        case 'r':
            printf("O urso diz: Estou com fome, hora do lanche!\n");
            break;

        default:
            printf("Cor desconhecida.\n");
    }

    return 0;
}
