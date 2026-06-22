#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-59 - GPS sem mapa                           *\n");
    printf("************************************************************\n\n");

    char letra;

    printf("Digite a letra da direcao: ");
    scanf(" %c", &letra);

    switch(letra) {
        case 'N':
            printf("Seguir para o Norte.\n");
            break;
        case 'S':
            printf("Seguir para o Sul.\n");
            break;
        case 'L':
            printf("Virar a Leste (Direita).\n");
            break;
        case 'O':
            printf("Virar a Oeste (Esquerda).\n");
            break;
        default:
            printf("Comando invalido! Pare o robo.\n");
    }

    return 0;
}
