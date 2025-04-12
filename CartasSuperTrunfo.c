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

printf("======= Cadastro da Carta 1 =======\n");

printf("Digite Código da Carta: \n");
scanf("%s", Carta1);

printf("Digite o Estado: \n");
scanf("%s", Estado1);  
getchar();

printf("Digite a Cidade \n");
scanf("%s", Cidade1);
getchar();
printf("Digite a População: \n");
scanf("%d", &Populacao1);
getchar();

printf("Digite a Área (em km²): \n");
scanf("%f", &Area1);

printf("Digite o PIB da Cidade: \n");
scanf("%f", &Pib1);

printf("Digite o Número de Pontos Turísticos da Cidade: \n");
scanf("%d", &Turisticos1);

printf("\n====== Cadastro da Carta 2 =======\n");

printf("Digite o Código da Carta: \n");
scanf("%s", Carta2);

printf("Digite o Estado: \n");
scanf("%s", Estado2);  
getchar();

printf("Digite a Cidade \n");
scanf("%s", Cidade2);
getchar();

printf("Digite a População: \n");
scanf("%d", &Populacao2);
getchar();

printf("Digite a Área (em km²): \n");
scanf("%f", &Area2);

printf("Digite o PIB da Cidade: \n");
scanf("%f", &Pib2);

printf("Digite o Número de Pontos Turísticos da Cidade: \n");
scanf("%d", &Turisticos2);

densidade1 = (float)Populacao1 / Area1;
densidade2 = (float)Populacao2 / Area2;

printf("\n\n====== INFORMAÇÕES DAS CARTAS ======\n");

 printf("\nCarta 1:\n");
 printf("Estado: %s\n", Estado1);
 printf("Nome da Cidade: %s\n", Cidade1);
 printf("População: %d\n", Populacao1);
 printf("Área (em km²): %.2f\n", Area1);
 printf("PIB: %.2f bilhões de reais\n", Pib1);
 printf("Pontos Turísticos da Cidade: %d\n", Turisticos1);
 printf("A Densidade Populacional é: %.2f hab/km²\n", densidade1);
 printf("\nCarta 2:\n");
 printf("Estado: %s\n", Estado2);
 printf("Nome da Cidade: %s\n", Cidade2);
 printf("População: %d\n", Populacao2);
 printf("Área (em km²): %.2f\n", Area2);
 printf("PIB: %.2f bilhões de reais\n", Pib2);
 printf("Pontos Turísticos da Cidade: %d\n", Turisticos2);
 printf("A Densidade Populacional é: %.2f hab/km²\n", densidade2);

 printf("\n\n==========================\n");

return 0;
}