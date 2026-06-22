#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-14 - Tipo de Triangulo                      *\n");
    printf("************************************************************\n\n");

    float lado1, lado2, lado3;

    printf("Digite o primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o terceiro lado: ");
    scanf("%f", &lado3);

    if(lado1 == lado2 && lado2 == lado3) {
        printf("\nO triangulo e Equilatero.\n");
    }
    else {
        if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("\nO triangulo e Isosceles.\n");
        }
        else {
            printf("\nO triangulo e Escaleno.\n");
        }
    }

    return 0;
}
