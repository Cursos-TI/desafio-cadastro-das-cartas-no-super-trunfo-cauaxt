#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char codigo1[4];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    // Declaração das variáveis da Carta 2
    char codigo2[4];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    // Variáveis calculadas
    float densidade1, densidade2;
    float perCapita1, perCapita2;
    float superPoder1, superPoder2;

    // Entrada - Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Código: ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada - Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Código: ");