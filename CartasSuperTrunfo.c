#include <stdio.h>

int main() {
    char Carta1[10], Carta2[10];
    char Estado1[3], Estado2[3];
    char Cidade1[50], Cidade2[50];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float Pib1, Pib2;
    int Turisticos1, Turisticos2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    float superpoder1, superpoder2;

    printf("======= Cadastro da Carta 1 =======\n");

    printf("Digite Código da Carta: ");
    scanf("%s", Carta1);

    printf("Digite o Estado: ");
    scanf("%s", Estado1);

    printf("Digite a Cidade: ");
    scanf(" %[^\n]", Cidade1);

    printf("Digite a População: ");
    scanf("%d", &Populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &Area1);

    printf("Digite o PIB da Cidade (Em Bilhões): ");
    scanf("%f", &Pib1);

    printf("Digite o Número de Pontos Turísticos da Cidade: ");
    scanf("%d", &Turisticos1);

    printf("\n======= Cadastro da Carta 2 =======\n");

    printf("Digite Código da Carta: ");
    scanf("%s", Carta2);

    printf("Digite o Estado: ");
    scanf("%s", Estado2);

    printf("Digite a Cidade: ");
    scanf(" %[^\n]", Cidade2);

    printf("Digite a População: ");
    scanf("%d", &Populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &Area2);

    printf("Digite o PIB da Cidade (em Bilhões): ");
    scanf("%f", &Pib2);

    printf("Digite o Número de Pontos Turísticos da Cidade: ");
    scanf("%d", &Turisticos2);

    densidade1 = (float)Populacao1 / Area1;
    densidade2 = (float)Populacao2 / Area2;
    percapita1 = (Pib1 * 1000000000.0) / Populacao1;
    percapita2 = (Pib2 * 1000000000.0) / Populacao2;
    superpoder1 = Populacao1 + Area1 + Pib1 + Turisticos1 + percapita1 + (1 / densidade1);
    superpoder2 = Populacao2 + Area2 + Pib2 + Turisticos2 + percapita2 + (1 / densidade2);


    printf("\n\n====== INFORMAÇÕES DAS CARTAS ======\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área (em km²): %.2f\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", Pib1);
    printf("Pontos Turísticos da Cidade: %d\n", Turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f mil\n", percapita1/ 1000);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área (em km²): %.2f\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", Pib2);
    printf("Pontos Turísticos da Cidade: %d\n", Turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f mil\n", percapita2);

    printf("\n\n====== COMPARAÇÃO DE CARTAS ======\n");
    printf("População: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
    printf("Área: Carta 1 venceu (%d)\n", Area1 > Area2);
    printf("PIB: Carta 1 venceu (%d)\n", Pib1 > Pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", Turisticos1 > Turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // Menor densidade vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", percapita1 > percapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);


    return 0;
}