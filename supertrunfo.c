#include <stdio.h>

int main () {

   char estado1 , estado2;
   char codigo1 [4], codigo2 [4];
   char nome_cidade1 [50], nome_cidade2 [50];
   unsigned long int populacao1, populacao2 ;
   float area1, area2;
   float pib1, pib2;
   int numero_turismo1, numero_turismo2 ;
   float mediadensidade1, mediadensidade2;
   float mediapib1, mediapib2;
   float superpoder1, superpoder2;
   int resultado;

printf("Carta 1: \n");
//Pede ao usuário para inserir os dados da primeira carta
printf("Escolha o Estado digitando uma letra de A a H: \n");
scanf(" %c", &estado1);

printf("Escolha o codigo de sua carta entre A01 e A02: \n");
scanf("%s", codigo1);

printf("Digite o nome da cidade sem espaços: \n");
scanf("%s", nome_cidade1);

printf("Digite a População (sem pontos ou virgulas): \n");
scanf("%ld", &populacao1);

printf("Digite a area da cidade (sem pontos ou virgulas): \n");
scanf(" %f", &area1);

printf("Digite o PIB da cidade: \n");
scanf(" %f", &pib1);

printf("Digite o numero de pontos turisticos: \n");
scanf("%d", &numero_turismo1);

printf("Super poder da carta 1: \n");

// Calcula a densidade populacional e o PIB per capita para a primeira carta
mediadensidade1 = populacao1 / area1;
mediapib1 = pib1 / populacao1;

// Calcula o super poder da primeira carta somando os atributos numéricos
superpoder1 = populacao1 + area1 + pib1 + numero_turismo1 + mediapib1 + (1 / mediadensidade1);



//***************Carta 2********************** */

printf("Carta 2: \n");
//Pede ao usuário para inserir os dados da segunda carta
printf("Escolha o Estado digitando uma letra de A a H: \n");
scanf(" %c", &estado2);

printf("Escolha o codigo de sua carta entre A01 e A02: \n");
scanf("%s", codigo2);

printf("Digite o nome da cidade sem espaços: \n");
scanf("%s", nome_cidade2);

printf("Digite a População (sem pontos ou virgulas): \n");
scanf("%ld", &populacao2);

printf("Digite a area da cidade (sem pontos ou virgulas): \n");
scanf("%f", &area2);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos: \n");
scanf("%d", &numero_turismo2); // numero de pontos turisticos da cidade

// Calcula a densidade populacional e o PIB per capita para a segunda carta
mediadensidade2 = populacao2 / area2;
mediapib2 = pib2 / populacao2;

// Calcula o super poder da segunda carta somando os atributos numéricos
superpoder2 = populacao2 + area2 + pib2 + numero_turismo2 + mediapib2 + (1 / mediadensidade2);


printf("\n--- Carta 1 ---\n");
// Exibe os dados da primeira carta
printf("Estado: %c\n", estado1);
printf("Codigo da Carta: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nome_cidade1);
printf("População: %ld\n", populacao1);
printf("Area da Cidade: %.2f km²\n", area1);
printf("PIB : %2.f\n", pib1);
printf("Densidade populacional: %.2f hab/km²\n", mediadensidade1);
printf("PIB per capita: %.2f reais\n", mediapib1);

printf("\n--- Carta 2 ---\n");
// Exibe os dados da segunda carta
printf("Estado: %c\n", estado2);
printf("Codigo da Carta: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nome_cidade2);
printf("População: %ld\n", populacao2);
printf("Area da Cidade: %.2f km²\n", area2);
printf("PIB: %2.f\n", pib2);
printf("Densidade populacional: %.2f hab/km²\n", mediadensidade2);
printf("PIB per capita: %.2f reais\n", mediapib2);

//Compara os atributos das cartas e exibe o resultado da comparação para cada atributo
printf("\nComparacao de Cartas:\n\n");


resultado = populacao1 > populacao2;
printf("População: Carta 1 venceu? %d\n", resultado);

resultado = area1 > area2;
printf("Area da Cidade: Carta 1 venceu? %d\n", resultado);

resultado = pib1 > pib2;
printf("PIB: Carta 1 venceu? %d\n", resultado);

resultado = numero_turismo1 > numero_turismo2;
printf("Numero de pontos turisticos: Carta 1 venceu? %d\n", resultado);

resultado = mediadensidade1 < mediadensidade2;
printf("Densidade populacional: Carta 1 venceu? %d\n", resultado);

resultado = mediapib1 > mediapib2;
printf("PIB per capita: Carta 1 venceu? %d\n", resultado);

resultado = superpoder1 > superpoder2;
printf("Super Poder: Carta 1 venceu? %d\n", resultado);

return 0;

}


/*Aprimorando o jogo
Criar variavel super poder para cada carta somando todos os atributos numéricos 
(população, área, PIB, número de pontos turísticos, 
PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder").
Para calcular o inverso da densidade, deve dividir 1 pela densidade populacional (1 / densidade). exemplo: se a densidade é 100 hab/km², 
o inverso da densidade é 1/100 = 0,01. Se a densidade é 10 hab/km², o inverso da densidade é 1/10 = 0,1. Portanto, 
quanto menor a densidade, maior o inverso da densidade e, consequentemente, maior o "poder" da carta).
armazenar o super poder como float

para descobrir  pib per capita, deve dividir o PIB pela população (PIB per capita = PIB / população). 
exemplo: se o PIB é 1.000.000 e a população é 100.000, o PIB per capita é 1.000.000 / 100.000 = 10.000 reais.

Criar a variavel resultado para comparar os atributos das cartas e exibir o resultado da comparação para cada atributo, 
indicando qual carta tem o maior valor para aquele atributo.
resultado deve ser do tipo inteiro, e vai receber 0 para verdadeiro e 1 para falso de toodas as comparações entre os atributos das cartas.
exemplo: resultado = superpoder1 > superpoder2;
exibir o resultado da comparação indicando qual carta tem o maior valor para aquele atributo.
   Fim do Programa */

