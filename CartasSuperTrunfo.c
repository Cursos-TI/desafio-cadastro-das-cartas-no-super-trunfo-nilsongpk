#include <stdio.h>


int main() {
char Carta[20];
char Estado;
char Cidade[50];
int Populacao;
float Area;
float Pib;
int Turisticos;


printf("Digite Código da Carta: \n");
scanf("%s", Carta);

printf("Digite o Estado: \n");
scanf("%s", Estado);  
getchar();

printf("Digite a Cidade \n");
scanf("%s", Cidade);


printf("Digite a População: \n");
scanf("%d", &Populacao);

printf("Digite Área (em km²): \n");
scanf("%f", Area);

return 0;

}
