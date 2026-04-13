#include <stdio.h>

int main () {

   char estado1 , estado2;
   char codigo1 [4], codigo2 [4];
   char nome_cidade1 [50], nome_cidade2 [50];
   int populacao1, populacao2 ;
   float area1, area2;
   float pib1, pib2;
   int numero_turismo1, numero_turismo2 ;

printf("Carta 1: \n");

printf("Escolha o Estado digitando uma letra de A a H: \n");
scanf(" %c", &estado1);

printf("Escolha o codigo de sua carta entre A01 e A02: \n");
scanf("%s", codigo1);

printf("Digite o nome da cidade sem espaços: \n");
scanf("%s", nome_cidade1);

printf("Digite a População (sem pontos ou virgulas): \n");
scanf("%d", &populacao1);

printf("Digite a area da cidade (sem pontos ou virgulas): \n");
scanf(" %f", &area1);

printf("Digite o PIB da cidade: \n");
scanf(" %f", &pib1);

printf("Digite o numero de pontos turisticos: \n");
scanf("%d", &numero_turismo1);


printf("Carta 2: \n");

printf("Escolha o Estado digitando uma letra de A a H: \n");
scanf(" %c", &estado2);

printf("Escolha o codigo de sua carta entre A01 e A02: \n");
scanf("%s", codigo2);

printf("Digite o nome da cidade sem espaços: \n");
scanf("%s", nome_cidade2);

printf("Digite a População (sem pontos ou virgulas): \n");
scanf("%d", &populacao2);

printf("Digite a area da cidade (sem pontos ou virgulas): \n");
scanf("%f", &area2);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos: \n");
scanf("%d", &numero_turismo2); // numero de pontos turisticos da cidade

printf("\n--- Carta 1 ---\n");

printf("Estado: %c\n", estado1);
printf("Codigo da Carta: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nome_cidade1);
printf("Numero da População: %d\n", populacao1);
printf("Area da Cidade: %.2f km²\n", area1);
printf("PIB da cidade: %2.f\n", pib1);


printf("\n--- Carta 2 ---\n");

printf("Estado: %c\n", estado2);
printf("Codigo da Carta: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nome_cidade2);
printf("População: %d\n", populacao2);
printf("Area da Cidade: %.2f km²\n", area2);
printf("PIB: %2.f\n", pib2);




return 0;

}