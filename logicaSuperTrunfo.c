#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Cidades
// Tema 2 - Comparação das Cartas
// Desenvolvido com base no código inicial do desafio anterior.

int main() {
    // Declaração das variáveis das duas cartas
    char estado1[50], codigo1[10], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    char estado2[50], codigo2[10], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Variáveis derivadas (calculadas)
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    printf("===== Cadastro da Carta 1 =====\n");
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o código da carta: ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n===== Cadastro da Carta 2 =====\n");
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o código da carta: ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Escolha do atributo para comparação (alterar manualmente)
    int atributo = 5; // 1=População, 2=Área, 3=PIB, 4=Densidade Populacional, 5=PIB per capita

    printf("\n============================================\n");
    printf("Comparação de cartas (Atributo: ");
    switch (atributo) {
        case 1: printf("População)\n\n"); break;
        case 2: printf("Área)\n\n"); break;
        case 3: printf("PIB)\n\n"); break;
        case 4: printf("Densidade Populacional)\n\n"); break;
        case 5: printf("PIB per capita)\n\n"); break;
    }

    // Comparação e resultado
    if (atributo == 1) {
        printf("%s (%s): %d habitantes\n", cidade1, estado1, populacao1);
        printf("%s (%s): %d habitantes\n\n", cidade2, estado2, populacao2);

        if (populacao1 > populacao2)
            printf("Resultado: %s venceu!\n", cidade1);
        else if (populacao2 > populacao1)
            printf("Resultado: %s venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");
    }

    else if (atributo == 2) {
        printf("%s (%s): %.2f km²\n", cidade1, estado1, area1);
        printf("%s (%s): %.2f km²\n\n", cidade2, estado2, area2);

        if (area1 > area2)
            printf("Resultado: %s venceu!\n", cidade1);
        else if (area2 > area1)
            printf("Resultado: %s venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");
    }

    else if (atributo == 3) {
        printf("%s (%s): R$ %.2f\n", cidade1, estado1, pib1);
        printf("%s (%s): R$ %.2f\n\n", cidade2, estado2, pib2);

        if (pib1 > pib2)
            printf("Resultado: %s venceu!\n", cidade1);
        else if (pib2 > pib1)
            printf("Resultado: %s venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");
    }

    else if (atributo == 4) {
        printf("%s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
        printf("%s (%s): %.2f hab/km²\n\n", cidade2, estado2, densidade2);

        // Menor densidade vence
        if (densidade1 < densidade2)
            printf("Resultado: %s venceu!\n", cidade1);
        else if (densidade2 < densidade1)
            printf("Resultado: %s venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");
    }

    else if (atributo == 5) {
        printf("%s (%s): R$ %.2f per capita\n", cidade1, estado1, pibPerCapita1);
        printf("%s (%s): R$ %.2f per capita\n\n", cidade2, estado2, pibPerCapita2);

        if (pibPerCapita1 > pibPerCapita2)
            printf("Resultado: %s venceu!\n", cidade1);
        else if (pibPerCapita2 > pibPerCapita1)
            printf("Resultado: %s venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");
    }

    printf("============================================\n");

    return 0;
}
