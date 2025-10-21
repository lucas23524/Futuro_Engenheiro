#include <stdio.h>

int main()
{
    //Variaveis para as cartas
    int populacao1, populacao2;
    int numerosdepontosturisticos1, numerosdepontosturisticos2;
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char nomedacidade1[30], nomedacidade2[30];
    float areaemkm1, areaemkm2, pib1, pib2;
    float densidade1, pib_per_capita1, densidade2, pib_per_capita2;
    float superpoder1, superpoder2;

     // --- Leitura dos dados da primeira carta ---
    printf("\n--- Preencha os dados da primeira carta ---\n");

    printf("digite o Estado: \n");
    scanf(" %c", &estado1);

    printf("digite o Codigo: \n");
    scanf("%s", codigo1);

    printf("digite o Nome da Cidade:\n");
    scanf(" %[^\n]", nomedacidade1);

    printf("Digite a Populacao \n");
    scanf("%u", &populacao1);

    printf("Digite a Area \n");
    scanf("%f", &areaemkm1);

    printf("Digite o Pib \n");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turístico \n");
    scanf("%d", &numerosdepontosturisticos1);

    // --- Leitura dos dados da segunda carta ---
    printf("\n--- Preencha os dados da segunda carta ---\n");

    printf("digite o Estado: \n");
    scanf(" %c", &estado2);

    printf("digite o Codigo: \n");
    scanf("%s", codigo2);

    printf("digite o Nome da Cidade:\n");
    scanf(" %[^\n]", nomedacidade2);

    printf("Digite a Populacao \n");
    scanf("%u", &populacao2);

    printf("Digite a Area \n");
    scanf("%f", &areaemkm2);

    printf("Digite o Pib \n");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turístico \n");
    scanf("%d", &numerosdepontosturisticos2);

    // --- Cálculos para a primeira carta ---
    densidade1 = populacao1 / areaemkm1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;

    // --- Cálculos para a segunda carta ---
    densidade2 = populacao2 / areaemkm2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;

     // --- Impressão dos dados da primeira carta ---
    printf("\n--- Resumo das Cartas ---\n");
    printf("\nCarta1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("Populacao: %u\n", populacao1);
    printf("Area em km: %.2f km²\n", areaemkm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", numerosdepontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    // --- Impressão dos dados da segunda carta ---
    printf("\nCarta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("Populacao: %u\n", populacao2);
    printf("Area em km: %.2f km²\n", areaemkm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", numerosdepontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    return 0;
}