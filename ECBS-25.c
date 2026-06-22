#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-25 - Notas e aprovacao                      *\n");
    printf("************************************************************\n\n");

    float media;

    printf("Digite a media final: ");
    scanf("%f", &media);

    if(media >= 7) {
        printf("Aluno aprovado.\n");
    }
    else {
        if(media >= 5) {
            printf("Aluno em recuperacao.\n");
        }
        else {
            printf("Aluno reprovado.\n");
        }
    }

    return 0;
}
