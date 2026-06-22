#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-58 - Calculadora simples                    *\n");
    printf("************************************************************\n\n");

    float n1, n2, resultado;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    switch(op) {
        case '+':
            resultado = n1 + n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = n1 - n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = n1 * n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if(n2 != 0) {
                resultado = n1 / n2;
                printf("Resultado: %.2f\n", resultado);
            }
            else {
                printf("Nao pode dividir por zero.\n");
            }
            break;
        default:
            printf("Operacao matematica nao reconhecida.\n");
    }

    return 0;
}
