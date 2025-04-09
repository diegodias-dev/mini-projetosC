#include <stdio.h>

int main() {
    int testes, cobaias, coelho = 0, rato = 0, sapo = 0, quantidade = 0;
    char especie;
    
    printf("Quantos casos de testes serao digitalizados? ");
    scanf("%i", &testes);

    for (int i = 0; i < testes; i++) {
        printf("Tipo de cobaia (c - coelho, r - rato, s - sapo): ");
        scanf(" %c", &especie);  // O espaço antes de %c garante que não haja problemas com o buffer
        printf("Quantidade de cobaia: ");
        scanf("%i", &quantidade);

        if (especie == 'c') {
            coelho += quantidade;  // Acumula a quantidade de coelhos
        } else if (especie == 'r') {
            rato += quantidade;    // Acumula a quantidade de ratos
        } else if (especie == 's') {
            sapo += quantidade;    // Acumula a quantidade de sapos
        }
    }

    // Exibe o total de cada tipo de cobaia
    printf("\nTotal de coelhos: %i\n", coelho);
    printf("Total de ratos: %i\n", rato);
    printf("Total de sapos: %i\n", sapo);

    // Exibe a quantidade total de cobaias
    int totalCobaias = coelho + rato + sapo;
    printf("Total de cobaias: %i\n", totalCobaias);

    return 0;
}
