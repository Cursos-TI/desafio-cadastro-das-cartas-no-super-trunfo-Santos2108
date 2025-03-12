#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da primeira carta
    printf("Carta 1:\n");

    printf("Estado: ");
    scanf(" %c", &estado1);
    getchar();  

    printf("Código: ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0';  // Substitui o '\n' por '\0'

    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';  

    printf("População: ");
    scanf(" %d", &populacao1);
    getchar();  

    printf("Área (km²): ");
    scanf(" %f", &area1);
    getchar();  

    printf("PIB (bilhões de reais): ");
    scanf(" %f", &pib1);
    getchar();  

    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);
    getchar();  

    // Leitura dos dados da segunda carta
    printf("\nCarta 2:\n");

    printf("Estado: ");
    scanf(" %c", &estado2);
    getchar();  

    printf("Código: ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';  

    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';  

    printf("População: ");
    scanf(" %d", &populacao2);
    getchar();  

    printf("Área (km²): ");
    scanf(" %f", &area2);
    getchar();  

    printf("PIB (bilhões de reais): ");
    scanf(" %f", &pib2);
    getchar();

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);
    getchar();  

    // Exibição dos dados da carta um
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da carta dois
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

