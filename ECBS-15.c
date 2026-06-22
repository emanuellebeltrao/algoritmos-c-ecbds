#include <stdio.h>

int main() {

    printf("************************************************************\n");
    printf("* Aluna: EMANUELLE CRISTINA BELTRAO DE SOUZA             *\n");
    printf("* RA: 0027452                                            *\n");
    printf("* Programa ECBS-15 - Caixas no Caminhao                     *\n");
    printf("************************************************************\n\n");

    // Medidas do caminhao
    int alturaCaminhao, larguraCaminhao, comprimentoCaminhao;
    int alturaCaminhaoaixa, larguraCaminhaoaixa, comprimentoCaminhaoaixa;
    // Quantidade de caixas que cabem em cada lado
    int quantidadeAltura, quantidadeLargura, quantidadeComprimento, totalCaixas;

    printf("Digite a altura do caminhao: ");
    scanf("%d", &alturaCaminhao);

    printf("Digite a largura do caminhao: ");
    scanf("%d", &larguraCaminhao);

    printf("Digite o comprimento do caminhao: ");
    scanf("%d", &comprimentoCaminhao);

    printf("Digite a altura da caixa: ");
    scanf("%d", &alturaCaminhaoaixa);

    printf("Digite a largura da caixa: ");
    scanf("%d", &larguraCaminhaoaixa);

    printf("Digite o comprimento da caixa: ");
    scanf("%d", &comprimentoCaminhaoaixa);

    quantidadeAltura = alturaCaminhao / alturaCaminhaoaixa;
    quantidadeLargura = larguraCaminhao / larguraCaminhaoaixa;
    quantidadeComprimento = comprimentoCaminhao / comprimentoCaminhaoaixa;

    totalCaixas = quantidadeAltura * quantidadeLargura * quantidadeComprimento;

    printf("\nCabem %d caixas no caminhao.\n", totalCaixas);

    return 0;
}
