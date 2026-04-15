#include <stdio.h>

int main () {

   char estado1 , estado2;
   char codigo1 [4], codigo2 [4];
   char nome_cidade1 [50], nome_cidade2 [50];
   int populacao1, populacao2 ;
   float area1, area2;
   float pib1, pib2;
   int numero_turismo1, numero_turismo2 ;
   float mediadensidade1, mediadensidade2;
   float mediapib1, mediapib2;

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

mediadensidade1 = populacao1 / area1;
mediapib1 = pib1 / populacao1;



//***************Carta 2********************** */

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

mediadensidade2 = populacao2 / area2;
mediapib2 = pib2 / populacao2;


printf("\n--- Carta 1 ---\n");

printf("Estado: %c\n", estado1);
printf("Codigo da Carta: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nome_cidade1);
printf("Numero da População: %d\n", populacao1);
printf("Area da Cidade: %.2f km²\n", area1);
printf("PIB da cidade: %2.f\n", pib1);
printf("A densidade é: %.2f hab/km²\n", mediadensidade1);
printf("O PIB per capita é: %.2f reais\n", mediapib1);

printf("\n--- Carta 2 ---\n");

printf("Estado: %c\n", estado2);
printf("Codigo da Carta: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nome_cidade2);
printf("População: %d\n", populacao2);
printf("Area da Cidade: %.2f km²\n", area2);
printf("PIB: %2.f\n", pib2);
printf("A densidade é: %.2f hab/km²\n", mediadensidade2);
printf("O PIB per capita é: %.2f reais\n", mediapib2);




return 0;

}


/*Aprimorando o jogo
Exibir na tela a densidade populacional eo pib per capita
dividir a população pelo área para ter a densidade
dividir o pib pela população para ter o pib per capita
armazenar valores na variavel float
exibir os resultados na tela com duas casas decimais 
media1 = populacao1 / area1;
media2 = populacao2 / area2;
media1 = pib1 / populacao1;
media2 = pib2 / populacao2;
   Fim do Programa */
