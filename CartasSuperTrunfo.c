#include <stdio.h>

int main() {
    // Carta 1 - Curitiba
    char estado1 = 'C';
    char codigo1[4] = "C03";
    char nomeCidade1[50] = "Curitiba";
    int populacao1 = 1963726;
    float area1 = 434.89;
    float pib1 = 93.40;
    int pontosTuristicos1 = 25;

    // Carta 2 - Salvador
    char estado2 = 'D';
    char codigo2[4] = "D02";
    char nomeCidade2[50] = "Salvador";
    int populacao2 = 2886698;
    float area2 = 693.83;
    float pib2 = 63.60;
    int pontosTuristicos2 = 40;

    // Exibição dos dados
    printf("=== Dados das Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
