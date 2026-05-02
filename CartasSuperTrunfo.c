#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Comparação entre as cartas.
// Objetivo: No nível Mestre.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1, codigo_da_carta1[10],nome_da_cidade1[50];
    int numeros_de_pontos_turisticos1;
    unsigned int populacao1;
    float area1,pib1,densidade_populacional1, pib_percapto1, 
    super_poder1, InversoDensidadePopulacional1; 

    char estado2,codigo_da_carta2[10],nome_da_cidade2[50];
    int numeros_de_pontos_turisticos2;
    unsigned int populacao2;
    float area2, pib2, densidade_populacional2, pib_percapto2, 
    super_poder2, InversoDensidadePopulacional2;

  // Área para entrada de dados

             // Dados da Carta 01

    printf("     Dados da Carta 01\n");
    printf("01/07 - Qual o Estado será essa carta? ");
    scanf(" %c", &estado1);
    
    printf("02/07 - Qual será código da carta? ");
    scanf("%s", codigo_da_carta1);

    printf("03/07 - Qual o nome da cidade dessa carta? ");
    scanf("%s", nome_da_cidade1);

    printf("04/07 - Qual a população dessa cidade? ");
    scanf("%d", &populacao1);

    printf("05/07 - Qual a Área em m² dessa cidade? ");
    scanf("%f", &area1);

    printf("06/07 - Qual o P.I.B. dessa cidade? ");
    scanf("%f", &pib1);

    printf("07/07 - Quantos pontos turisticos tem nessa cidade? ");
    scanf("%d", &numeros_de_pontos_turisticos1);
    printf("\n\n");
    

            // Dados da Carta 02
    
    printf("     Dados da Carta 02\n");
    printf("01/07 - Qual o Estado será essa carta? ");
    scanf(" %c", &estado2);
    
    printf("02/07 - Qual será código da carta? ");
    scanf("%s", codigo_da_carta2);

    printf("03/07 - Qual o nome da cidade dessa carta? ");
    scanf("%s", nome_da_cidade2);

    printf("04/07 - Qual a população dessa cidade? ");
    scanf("%d", &populacao2);

    printf("05/07 - Qual a Área em m² dessa cidade? ");
    scanf("%f", &area2);

    printf("06/07 - Qual o P.I.B. dessa cidade? ");
    scanf("%f", &pib2);

    printf("07/07 - Quantos pontos turisticos tem nessa cidade? ");
    scanf("%d", &numeros_de_pontos_turisticos2);
    printf("\n\n");

  //Área para cálculo de dados (Nível Intermédiario)

    //    Carta 01

    densidade_populacional1 = (float) populacao1 / area1;
    pib_percapto1 = (float) pib1 / (float) populacao1;

    //    Carta 02

    densidade_populacional2 = (float) populacao2 / area2;
    pib_percapto2 = (float) pib2 / (float) populacao2;

    //Inversão de valores da densidade populacional

    InversoDensidadePopulacional1 = (float) 1 / densidade_populacional1;
    InversoDensidadePopulacional2 = (float) 1 / densidade_populacional2;

    //calculo de super poder

    super_poder1 = (float) populacao1 + area1 + pib1 + numeros_de_pontos_turisticos1 + 
    pib_percapto1 + InversoDensidadePopulacional1;
  
    super_poder2 = (float) populacao2 + area2 + pib2 + numeros_de_pontos_turisticos2 +
    pib_percapto2 + InversoDensidadePopulacional2;


  // Área para exibição dos dados da cidade

  // Carta 01

  printf("    *** CARTA 01 ***\n\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo_da_carta1);
  printf("Nome da Cidade: %s\n", nome_da_cidade1);
  printf("População: %d habitantes\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: %.2f bilhôes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", numeros_de_pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab./Km²\n", densidade_populacional1);
  printf("PIB Per capita: R$ %f \n", pib_percapto1);
  printf("Super Poder: %.2f \n\n", super_poder1);

  // Carta 02

  printf("    *** CARTA 02 ***\n\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo_da_carta2);
  printf("Nome da Cidade: %s\n", nome_da_cidade2);
  printf("População: %d habitantes\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f bilhôes de reais \n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", numeros_de_pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab./Km²\n", densidade_populacional2);
  printf("PIB Per capita: R$ %f \n", pib_percapto2);
  printf("Super Poder: %.2f \n\n", super_poder2);

  //Área para comparação das cartas (Nível Mestre)

  int resultado_populacao, resultado_area, resultado_pib, resultado_PontosTuristicos,
  resultado_DensidadePopulacinal, resultado_SuperPoder, resultado_pibpercapita;

  resultado_populacao = populacao1 > populacao2;
  resultado_area = area1 > area2;
  resultado_pib = pib1 > pib2;
  resultado_PontosTuristicos = numeros_de_pontos_turisticos1 > numeros_de_pontos_turisticos2;
  resultado_DensidadePopulacinal = densidade_populacional1 > densidade_populacional2;
  resultado_pibpercapita = pib_percapto1 > pib_percapto2;
  resultado_SuperPoder = super_poder1 > super_poder2;

  printf("Comparação de Cartas (Atributo: População)\n");
  if (resultado_populacao == 1)
  { printf("Resultado: Carta 1 (São Paulo) Venceu!!\n\n");
  } else { printf("Resultado: Carta 2 (Rio de Janeiro) Venceu!!\n\n");
  }
  
    printf("Comparação de Cartas (Atributo: Área)\n");
  if (resultado_area == 1)
  { printf("Resultado: Carta 1 (São Paulo) Venceu!!\n\n");
  } else { printf("Resultado: Carta 2 (Rio de Janeiro) Venceu!!\n\n");
  }
  
    printf("Comparação de Cartas (Atributo: PIB)\n");
  if (resultado_pib == 1)
  { printf("Resultado: Carta 1 (São Paulo) Venceu!!\n\n");
  } else { printf("Resultado: Carta 2 (Rio de Janeiro) Venceu!!\n\n");
  }  

    printf("Comparação de Cartas (Atributo: Pontos Turisticos)\n");
  if (resultado_PontosTuristicos == 1)
  { printf("Resultado: Carta 1 (São Paulo) Venceu!!\n\n");
  } else { printf("Resultado: Carta 2 (Rio de Janeiro) Venceu!!\n\n");
  }

    printf("Comparação de Cartas (Atributo: Densidade Populacional)\n");
  if (resultado_DensidadePopulacinal == 1)
  { printf("Resultado: Carta 1 (São Paulo) Venceu!!\n\n");
  } else { printf("Resultado: Carta 2 (Rio de Janeiro) Venceu!!\n\n");
  }

      printf("Comparação de Cartas (Atributo: PIB per capita)\n");
  if (resultado_pibpercapita == 1)
  { printf("Resultado: Carta 1 (São Paulo) Venceu!!\n\n");
  } else { printf("Resultado: Carta 2 (Rio de Janeiro) Venceu!!\n\n");
  }

    printf("Comparação de Cartas (Atributo: Super Poder)\n");
  if (resultado_SuperPoder == 1)
  { printf("Resultado: Carta 1 (São Paulo) Venceu!!\n\n");
  } else { printf("Resultado: Carta 2 (Rio de Janeiro) Venceu!!\n\n");
  }


  /*
  printf("**COMPARANDO AS CARTAS**\n\n");
  printf("Legenda: resultado 1: vencedor CARTA 01\n");
  printf("         resultado 0: vencedor CARTA 02\n\n");

  printf("População vencedora ____________: %d\n", resultado_populacao);
  printf("Área vencedora__________________: %d\n", resultado_area);
  printf("PIB vencedora___________________: %d\n", resultado_pib);
  printf("Pontos Turisticos vencedora_____: %d\n", resultado_PontosTuristicos);
  printf("Densidade Populacional vencedora: %d\n", resultado_DensidadePopulacinal);
  printf("PIB per capito vencedora________: %d\n", resultado_pibpercapita);
  printf("Super Poder vencedora___________: %d\n\n", resultado_SuperPoder);
*/

return 0;

} 