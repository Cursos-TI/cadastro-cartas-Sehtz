#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1;
    char codigo_da_carta1[10];
    char nome_da_cidade1[50];
    int populacao1;
    int numeros_de_pontos_turisticos1;
    float area1;
    float pib1;

    char estado2;
    char codigo_da_carta2[10];
    char nome_da_cidade2[50];
    int populacao2;
    int numeros_de_pontos_turisticos2;
    float area2;
    float pib2;

  // Área para entrada de dados

             // Dados da Carta 01

    printf("Dados da Carta 01\n");
    printf("01/07 - Qual o Estado será essa carta? ");
    scanf(" %c", &estado1);
    
    printf("Dados da Carta 01\n");
    printf("02/07 - Qual será código da carta? ");
    scanf("%s", codigo_da_carta1);

    printf("Dados da Carta 01\n");
    printf("03/07 - Qual o nome da cidade dessa carta? ");
    scanf("%s", nome_da_cidade1);

    printf("Dados da Carta 01\n");
    printf("04/07 - Qual a população dessa cidade? ");
    scanf("%d", &populacao1);

    printf("Dados da Carta 01\n");
    printf("05/07 - Qual a Área em m² dessa cidade? ");
    scanf("%f", &area1);

    printf("Dados da Carta 01\n");
    printf("06/07 - Qual o P.I.B. dessa cidade? ");
    scanf("%f", &pib1);

    printf("Dados da Carta 01\n");
    printf("07/07 - Quantos pontos turisticos tem nessa cidade? ");
    scanf("%d", &numeros_de_pontos_turisticos1);
    system("clear");

            // Dados da Carta 02
    
    printf("Dados da Carta 02\n");
    printf("01/07 - Qual o Estado será essa carta? ");
    scanf(" %c", &estado2);
    
    printf("Dados da Carta 02\n");
    printf("02/07 - Qual será código da carta? ");
    scanf("%s", codigo_da_carta2);

    printf("Dados da Carta 02\n");
    printf("03/07 - Qual o nome da cidade dessa carta? ");
    scanf("%s", nome_da_cidade2);

    printf("Dados da Carta 02\n");
    printf("04/07 - Qual a população dessa cidade? ");
    scanf("%d", &populacao2);

    printf("Dados da Carta 02\n");
    printf("05/07 - Qual a Área em m² dessa cidade? ");
    scanf("%f", &area2);

    printf("Dados da Carta 02\n");
    printf("06/07 - Qual o P.I.B. dessa cidade? ");
    scanf("%f", &pib2);

    printf("Dados da Carta 02\n");
    printf("07/07 - Quantos pontos turisticos tem nessa cidade? ");
    scanf("%d", &numeros_de_pontos_turisticos2);
    system("clear");


  // Área para exibição dos dados da cidade

  // Carta 01

  printf("     CARTA 01\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo_da_carta1);
  printf("Nome da Cidade: %s\n", nome_da_cidade1);
  printf("População: %d habitantes\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: %.2f bilhôes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", numeros_de_pontos_turisticos1);

  // Carta 02

  printf("     CARTA 02\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo_da_carta2);
  printf("Nome da Cidade: %s\n", nome_da_cidade2);
  printf("População: %d habitantes\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f bilhôes de reais \n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", numeros_de_pontos_turisticos2);





return 0;
} 
