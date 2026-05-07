#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Comparação entre as cartas.
// Objetivo: TEMA 3 - NIVEL INTERMEDIARIO

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
/*
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
*/

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

  //MENU
  
  int opcao, selecao_de_carta, atributo1, atributo2;

  printf("**** SUPER TRUNDO - PAISES ***\n\n");
  
  printf("          **MENU**\n\n");

  printf("1. Iniciar o Jogo\n");
  printf("2. Como Jogar\n");
  printf("3. Sair do Jogo\n\n");
  printf("Digite uma opcão: ");
  scanf("%d", &opcao);
  printf("\n===============================================\n\n");
  
    switch (opcao) //Opção do menu
    {
    case 1: // Parte da Lógica
      
      printf("*** SUPER TRUNFO PAISES ***\n\n");
      printf(" ** SELEÇÃO DE CARTAS **\n\n");       

      printf("1 - SÃO PAULO\n");
      printf("2 - RIO DE JANEIRO\n\n");
      printf("Escolha sua Carta: ");
      scanf("%d", &selecao_de_carta);

      switch (selecao_de_carta) //Switch de Seleção da carta
      {
      case 1:
        printf("DADOS DA CARTA\n\n");

        // Carta 01

        printf("    *** CARTA 01 - SÃO PAULO ***\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo_da_carta1);
        printf("Nome da Cidade: %s\n\n", nome_da_cidade1);

        printf("*** ATRIBUTOS ***\n\n");

        printf("1. População: %d habitantes\n", populacao1);
        printf("2. Área: %.2f Km²\n", area1);
        printf("3. PIB: %.2f bilhôes de reais\n", pib1);
        printf("4. Numero de Pontos Turisticos: %d\n", numeros_de_pontos_turisticos1);
        printf("5. Densidade Populacional: %.2f hab./Km²\n", densidade_populacional1);
        printf("6. PIB Per capita: R$ %f \n", pib_percapto1);
        printf("7. Super Poder: %.2f \n\n", super_poder1);        
        printf(" ESCOLHA QUAL ATRIBUTO VOCÊ IRÁ UTILIZAR?: ");
        scanf("%d", &atributo1);
        printf("\n===============================================\n\n");
        printf("\n\n");

          switch (atributo1) // Inicio Switch de Comparação entre carta 01 e 02
          {
          case 1:
            
            // Atributo População
            printf("* COMPARANDO ATRIBUTOS *\n\n");
            printf("Sua Carta: %s: %d - ", nome_da_cidade1, populacao1);
            printf("Carta do Oponente: %s: %d", nome_da_cidade2, populacao2);

              if (populacao1 == populacao2)
              {
                printf("============================================\n");
                printf("EMPATE!\n");
                printf("============================================\n");

              } else if (populacao1 > populacao2)
              {
                printf("============================================\n");
                printf("PARABÉNS, VOCÊ GANHOU\n");
                printf("============================================\n");
              } else {
                printf("============================================\n");
                printf("INFELIZMENTE, VOCÊ PERDEU!\n");
                printf("============================================\n");
              } // fim do IF
              

            break;
          

          case 2:
            
            // Atributo Área
            printf("* COMPARANDO ATRIBUTOS *\n\n");
            printf("Sua Carta: %s: %.2f - ", nome_da_cidade1, area1);
            printf("Carta do Oponente: %s: %.2f", nome_da_cidade2, area2);

              if (area1 == area2)
              {
                printf("\n============================================\n");
                printf("EMPATE!\n");
                printf("============================================\n");

              } else if (area1 > area2)
              {
                printf("\n============================================\n");
                printf("PARABÉNS, VOCÊ GANHOU\n");
                printf("============================================\n");
              } else {
                printf("\n============================================\n");
                printf("INFELIZMENTE, VOCÊ PERDEU!\n");
                printf("============================================\n");
              } // fim do IF
              

            break;


          case 3:
            
            // Atributo PIB
            printf("* COMPARANDO ATRIBUTOS *\n\n");
            printf("Sua Carta: %s: %.2f - ", nome_da_cidade1, pib1);
            printf("Carta do Oponente: %s: %.2f", nome_da_cidade2, pib2);

              if (pib1 == pib2)
              {
                printf("\n============================================\n");
                printf("EMPATE!\n");
                printf("============================================\n");

              } else if (pib1 > pib2)
              {
                printf("\n============================================\n");
                printf("PARABÉNS, VOCÊ GANHOU\n");
                printf("============================================\n");
              } else {
                printf("\n============================================\n");
                printf("INFELIZMENTE, VOCÊ PERDEU!\n");
                printf("============================================\n");
              } // fim do IF
              

            break;

          case 4:
            
            // Atributo Pontos Turisticos
            printf("* COMPARANDO ATRIBUTOS *\n\n");
            printf("Sua Carta: %s: %d - ", nome_da_cidade1, numeros_de_pontos_turisticos1);
            printf("Carta do Oponente: %s: %d", nome_da_cidade2, numeros_de_pontos_turisticos2);

              if (numeros_de_pontos_turisticos1 == numeros_de_pontos_turisticos2)
              {
                printf("\n============================================\n");
                printf("EMPATE!\n");
                printf("============================================\n");

              } else if (numeros_de_pontos_turisticos1 > numeros_de_pontos_turisticos2)
              {
                printf("\n============================================\n");
                printf("PARABÉNS, VOCÊ GANHOU\n");
                printf("============================================\n");
              } else {
                printf("\n============================================\n");
                printf("INFELIZMENTE, VOCÊ PERDEU!\n");
                printf("============================================\n");
              } // fim do IF
              

            break;

          case 5:
            
            // Atributo Densidade populacional
            printf("* COMPARANDO ATRIBUTOS *\n\n");
            printf("Sua Carta: %s: %.2f - ", nome_da_cidade1, densidade_populacional1);
            printf("Carta do Oponente: %s: %.2f", nome_da_cidade2, densidade_populacional2);

              if (densidade_populacional1 == densidade_populacional2)
              {
                printf("\n============================================\n");
                printf("EMPATE!\n");
                printf("============================================\n");

              } else if (densidade_populacional1 < densidade_populacional2)
              {
                printf("\n============================================\n");
                printf("PARABÉNS, VOCÊ GANHOU\n");
                printf("============================================\n");
              } else {
                printf("\n============================================\n");
                printf("INFELIZMENTE, VOCÊ PERDEU!\n");
                printf("============================================\n");
              } // fim do IF
              

            break;

          case 6:
            
            // Atributo PIB Per carpito
            printf("* COMPARANDO ATRIBUTOS *\n\n");
            printf("Sua Carta: %s: %f - ", nome_da_cidade1, pib_percapto1);
            printf("Carta do Oponente: %s: %f", nome_da_cidade2, pib_percapto2);

              if (pib_percapto1 == pib_percapto2)
              {
                printf("\n============================================\n");
                printf("EMPATE!\n");
                printf("\n============================================\n");

              } else if (pib_percapto1 > pib_percapto2)
              {
                printf("\n============================================\n");
                printf("PARABÉNS, VOCÊ GANHOU\n");
                printf("============================================\n");
              } else {
                printf("\n============================================\n");
                printf("INFELIZMENTE, VOCÊ PERDEU!\n");
                printf("============================================\n");
              } // fim do IF
              

            break;

          case 7:
            
            // Atributo Super Poder
            printf("* COMPARANDO ATRIBUTOS *\n\n");
            printf("Sua Carta: %s: %.2f - ", nome_da_cidade1, super_poder1);
            printf("Carta do Oponente: %s: %.2f", nome_da_cidade2, super_poder2);

              if (super_poder1 == super_poder2)
              {
                printf("\n============================================\n");
                printf("EMPATE!\n");
                printf("============================================\n");

              } else if (super_poder1 > super_poder2)
              {
                printf("\n============================================\n");
                printf("PARABÉNS, VOCÊ GANHOU\n");
                printf("============================================\n");
              } else {
                printf("\n============================================\n");
                printf("INFELIZMENTE, VOCÊ PERDEU!\n");
                printf("============================================\n");
              } // fim do IF
              

            break;
          


          


          


          


          


          






            
          default:
            break;
          } 
          
          // Fim do Switch de comparação entre carta 01 e 02



        
        break;
      
      case 2:

        printf("DADOS DA CARTA\n\n");

        // Carta 02

        printf("    *** CARTA 02 - RIO DE JANEIRO ***\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo_da_carta2);
        printf("Nome da Cidade: %s\n\n", nome_da_cidade2);

        printf("*** ATRIBUTOS ***\n\n");

        printf("1. População: %d habitantes\n", populacao2);
        printf("2. Área: %.2f Km²\n", area2);
        printf("3. PIB: %.2f bilhôes de reais\n", pib2);
        printf("4. Numero de Pontos Turisticos: %d\n", numeros_de_pontos_turisticos2);
        printf("5. Densidade Populacional: %.2f hab./Km²\n", densidade_populacional2);
        printf("6. PIB Per capita: R$ %f \n", pib_percapto2);
        printf("7. Super Poder: %.2f \n\n", super_poder2);        
        printf(" ESCOLHA QUAL ATRIBUTO VOCÊ IRÁ UTILIZAR?: ");
        scanf("%d", &atributo2);
        printf("\n===============================================\n\n");
        printf("\n\n");

          switch (atributo2) //Inicio Switch de Comparação entre carta 02 e 01
          {
          case 1:
            
            // Atributo População
            printf("* COMPARANDO ATRIBUTOS *\n\n");
            printf("Sua Carta: %s: %d - ", nome_da_cidade1, populacao2);
            printf("Carta do Oponente: %s: %d", nome_da_cidade2, populacao1);

              if (populacao2 == populacao1)
              {
                printf("\n============================================\n");
                printf("EMPATE!\n");
                printf("============================================\n");

              } else if (populacao2 > populacao1)
              {
                printf("\n============================================\n");
                printf("PARABÉNS, VOCÊ GANHOU\n");
                printf("============================================\n");
              } else {
                printf("\n============================================\n");
                printf("INFELIZMENTE, VOCÊ PERDEU!\n");
                printf("============================================\n");
              } // fim do IF
              

            break;
          

          case 2:
            
            // Atributo Área
            printf("* COMPARANDO ATRIBUTOS *\n\n");
            printf("Sua Carta: %s: %.2f - ", nome_da_cidade1, area2);
            printf("Carta do Oponente: %s: %.2f", nome_da_cidade2, area1);

              if (area2== area1)
              {
                printf("\n============================================\n");
                printf("EMPATE!\n");
                printf("============================================\n");

              } else if (area2 > area1)
              {
                printf("\n============================================\n");
                printf("PARABÉNS, VOCÊ GANHOU\n");
                printf("============================================\n");
              } else {
                printf("\n============================================\n");
                printf("INFELIZMENTE, VOCÊ PERDEU!\n");
                printf("============================================\n");
              } // fim do IF
              

            break;


          case 3:
            
            // Atributo PIB
            printf("* COMPARANDO ATRIBUTOS *\n\n");
            printf("Sua Carta: %s: %.2f - ", nome_da_cidade1, pib2);
            printf("Carta do Oponente: %s: %.2f", nome_da_cidade2, pib1);

              if (pib2 == pib1)
              {
                printf("\n============================================\n");
                printf("EMPATE!\n");
                printf("============================================\n");

              } else if (pib2 > pib1)
              {
                printf("\n============================================\n");
                printf("PARABÉNS, VOCÊ GANHOU\n");
                printf("============================================\n");
              } else {
                printf("\n============================================\n");
                printf("INFELIZMENTE, VOCÊ PERDEU!\n");
                printf("============================================\n");
              } // fim do IF
              

            break;

          case 4:
            
            // Atributo Pontos Turisticos
            printf("* COMPARANDO ATRIBUTOS *\n\n");
            printf("Sua Carta: %s: %d - ", nome_da_cidade1, numeros_de_pontos_turisticos2);
            printf("Carta do Oponente: %s: %d", nome_da_cidade2, numeros_de_pontos_turisticos1);

              if (numeros_de_pontos_turisticos2 == numeros_de_pontos_turisticos1)
              {
                printf("\n============================================\n");
                printf("EMPATE!\n");
                printf("============================================\n");

              } else if (numeros_de_pontos_turisticos2> numeros_de_pontos_turisticos1)
              {
                printf("\n============================================\n");
                printf("PARABÉNS, VOCÊ GANHOU\n");
                printf("============================================\n");
              } else {
                printf("\n============================================\n");
                printf("INFELIZMENTE, VOCÊ PERDEU!\n");
                printf("============================================\n");
              } // fim do IF
              

            break;

          case 5:
            
            // Atributo Densidade populacional
            printf("* COMPARANDO ATRIBUTOS *\n\n");
            printf("Sua Carta: %s: %.2f - ", nome_da_cidade1, densidade_populacional2);
            printf("Carta do Oponente: %s: %.2f", nome_da_cidade2, densidade_populacional1);

              if (densidade_populacional1 == densidade_populacional2)
              {
                printf("\n============================================\n");
                printf("EMPATE!\n");
                printf("============================================\n");

              } else if (densidade_populacional2< densidade_populacional1)
              {
                printf("\n============================================\n");
                printf("PARABÉNS, VOCÊ GANHOU\n");
                printf("============================================\n");
              } else {
                printf("\n============================================\n");
                printf("INFELIZMENTE, VOCÊ PERDEU!\n");
                printf("============================================\n");
              } // fim do IF
              

            break;

          case 6:
            
            // Atributo PIB Per carpito
            printf("* COMPARANDO ATRIBUTOS *\n\n");
            printf("Sua Carta: %s: %f - ", nome_da_cidade1, pib_percapto2);
            printf("Carta do Oponente: %s: %f", nome_da_cidade2, pib_percapto1);

              if (pib_percapto2 == pib_percapto1)
              {
                printf("\n============================================\n");
                printf("EMPATE!\n");
                printf("============================================\n");

              } else if (pib_percapto2 > pib_percapto1)
              {
                printf("\n============================================\n");
                printf("PARABÉNS, VOCÊ GANHOU\n");
                printf("============================================\n");
              } else {
                printf("\n============================================\n");
                printf("INFELIZMENTE, VOCÊ PERDEU!\n");
                printf("============================================\n");
              } // fim do IF
              

            break;

          case 7:
            
            // Atributo Super Poder
            printf("* COMPARANDO ATRIBUTOS *\n\n");
            printf("Sua Carta: %s: %.2f - ", nome_da_cidade1, super_poder2);
            printf("Carta do Oponente: %s: %.2f", nome_da_cidade2, super_poder1);

              if (super_poder2 == super_poder1)
              {
                printf("\n============================================\n");
                printf("EMPATE!\n");
                printf("============================================\n");

              } else if (super_poder2 > super_poder1)
              {
                printf("\n============================================\n");
                printf("PARABÉNS, VOCÊ GANHOU\n");
                printf("============================================\n");
              } else {
                printf("\n============================================\n");
                printf("INFELIZMENTE, VOCÊ PERDEU!\n");
                printf("============================================\n");
              } // fim do IF
              

            break;     


          


          


          


          


          






            
          default:
            break;
          } 
          
          // Fim do Switch de comparação entre carta 02 e 01
        break;
      
      







      default:
        break;
      } // fim do switch de Seleção da carta 

      break;

    case 2:
      
      printf("*** PÁGINA DE COMO JOGAR ***\n\n");

      printf("Como Jogar: Cada jogador recebe um conjunto de cartas com informações sobre países, estados ou cidades\n");
      printf("cada rodada, o jogador da vez escolhe um atributo da sua carta (como população, PIB, área ou número de pontos turísticos).\n");
      printf("Os outros jogadores comparam o mesmo atributo de suas cartas.Quem tiver o maior valor vence a rodada e fica com todas as cartas da mesa.\n");
      printf("O jogo continua até que um jogador conquiste todas as cartas ou até atingir um objetivo definido.\n\n");
            

      printf("0. Voltar\n");

      printf("\n===============================================\n\n");

      break;
    
    case 3:

      printf("*** SAIR DO JOGO ***\n\n");

      printf("1. SAIR DO JOGO\n");
      printf("2. CANCELAR\n\n");

      break;





    default:
      printf("Opção Inválida\n\n");
      printf("0. Voltar\n");
      printf("\n===============================================\n\n");
      break;
    } // Fim do switch de opção
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  /*
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