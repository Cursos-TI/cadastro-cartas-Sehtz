#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Comparação entre as cartas.
// Objetivo: TEMA 3 - NIVEL INTERMEDIARIO

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1 = 'A', codigo_da_carta1[10] = "A01", nome_da_cidade1[50] = "SaoPaulo";
  int numeros_de_pontos_turisticos1 = 50;
  unsigned int populacao1 = 12325000;
  float area1 = 1521.11, pib1 = 699.28, densidade_populacional1, pib_percapto1,
        super_poder1, InversoDensidadePopulacional1;

  char estado2 = 'B', codigo_da_carta2[10] = "B02", nome_da_cidade2[50] = "RioDeJaneiro";
  int numeros_de_pontos_turisticos2 = 30;
  unsigned int populacao2 = 6748000;
  float area2 = 1200.25, pib2 = 300.50, densidade_populacional2, pib_percapto2,
        super_poder2, InversoDensidadePopulacional2;

  //    Carta 01

  densidade_populacional1 = (float)populacao1 / area1;
  pib_percapto1 = (float)pib1 / (float)populacao1;

  //    Carta 02

  densidade_populacional2 = (float)populacao2 / area2;
  pib_percapto2 = (float)pib2 / (float)populacao2;

  // Inversão de valores da densidade populacional

  InversoDensidadePopulacional1 = (float)1 / densidade_populacional1;
  InversoDensidadePopulacional2 = (float)1 / densidade_populacional2;

  // calculo de super poder

  super_poder1 = (float)populacao1 + area1 + pib1 + numeros_de_pontos_turisticos1 +
                 pib_percapto1 + InversoDensidadePopulacional1;

  super_poder2 = (float)populacao2 + area2 + pib2 + numeros_de_pontos_turisticos2 +
                 pib_percapto2 + InversoDensidadePopulacional2;

  // Área para comparação das cartas (Nível Mestre)

  int resultado_populacao, resultado_area, resultado_pib, resultado_PontosTuristicos,
      resultado_DensidadePopulacinal, resultado_SuperPoder, resultado_pibpercapita;

  int primeiro_atributo_carta_1, segundo_atributo_carta_1, primeiro_atributo_carta_2, segundo_atributo_carta_2;

  resultado_populacao = populacao1 > populacao2;
  resultado_area = area1 > area2;
  resultado_pib = pib1 > pib2;
  resultado_PontosTuristicos = numeros_de_pontos_turisticos1 > numeros_de_pontos_turisticos2;
  resultado_DensidadePopulacinal = densidade_populacional1 > densidade_populacional2;
  resultado_pibpercapita = pib_percapto1 > pib_percapto2;
  resultado_SuperPoder = super_poder1 > super_poder2;

  // MENU

  int opcao, selecao_de_carta, atributo1, atributo2;

  printf("\n**** SUPER TRUNDO - PAISES ***\n\n");

  printf("          **MENU**\n\n");

  printf("1. Iniciar o Jogo\n");
  printf("2. Como Jogar\n");
  printf("3. Sair do Jogo\n\n");
  printf("Digite uma opcão: ");
  scanf("%d", &opcao);
  printf("\n===============================================\n\n");

  switch (opcao) // Opção do menu
  {
  case 1: // Parte da Lógica

    printf("*** SUPER TRUNFO PAISES ***\n\n");

    printf(" ** SELEÇÃO DE CARTAS **\n\n");

    printf("1 - SÃO PAULO\n");
    printf("2 - RIO DE JANEIRO\n\n");

    printf("Escolha sua Carta: ");
    scanf("%d", &selecao_de_carta);
    printf("\n===============================================\n\n");

    switch (selecao_de_carta) // Switch de Seleção da carta
    {
    case 1:
      printf("DADOS DA CARTA\n\n");

      // Carta 01

      printf("    *** CARTA 01 - SÃO PAULO ***\n\n");

      printf("Estado: %c\n", estado1);
      printf("Código: %s\n", codigo_da_carta1);
      printf("Nome da Cidade: %s\n\n", nome_da_cidade1);

      printf("*** ATRIBUTOS ***\n\n");

      printf("1. População: %u habitantes\n", populacao1);
      printf("2. Área: %.2f Km²\n", area1);
      printf("3. PIB: %.2f bilhôes de reais\n", pib1);
      printf("4. Numero de Pontos Turisticos: %d\n", numeros_de_pontos_turisticos1);
      printf("5. Densidade Populacional: %.2f hab./Km²\n", densidade_populacional1);
      printf("6. PIB Per capita: R$ %f \n", pib_percapto1);
      printf("7. Super Poder: %.2f \n\n", super_poder1);
      printf(" ESCOLHA O 1º ATRIBUTO: ");
      scanf("%d", &primeiro_atributo_carta_1);

      // Menu para escolha do segundo atributo da carta 01

      printf("\n ESCOLHA O 2º ATRIBUTO DIFERENTE DO PRIMEIRO: ");
      scanf("%d", &segundo_atributo_carta_1);
      printf("\n");

      if (primeiro_atributo_carta_1 == segundo_atributo_carta_1)
      {
        printf("Atributos iguais, por favor escolha atributos diferentes\n");
      }
      else
      {
        printf("\n===============================================\n\n");
      }

      switch (primeiro_atributo_carta_1) // Inicio Switch de Comparação do 1º atributo entre a carta 01 e 02
      {
      case 1:

        // Atributo População
        printf("* COMPARANDO O PRIMEIRO ATRIBUTO *\n\n");

        printf("Sua Carta: %s, população: %u\n", nome_da_cidade1, populacao1);
        printf("Carta do Oponente: %s, população: %u\n", nome_da_cidade2, populacao2);

        if (populacao1 == populacao2)
        {
          printf("============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (populacao1 > populacao2)
        {
          printf("============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 2:

        // Atributo Área
        printf("* COMPARANDO O PRIMEIRO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, área: %.2f\n", nome_da_cidade1, area1);
        printf("Carta do Oponente: %s, área: %.2f\n", nome_da_cidade2, area2);

        if (area1 == area2)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (area1 > area2)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 3:

        // Atributo PIB
        printf("* COMPARANDO O PRIMEIRO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, PIB: %.2f\n", nome_da_cidade1, pib1);
        printf("Carta do Oponente: %s, PIB: %.2f\n", nome_da_cidade2, pib2);

        if (pib1 == pib2)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (pib1 > pib2)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 4:

        // Atributo Pontos Turisticos
        printf("* COMPARANDO O PRIMEIRO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, pontos turísticos: %d\n", nome_da_cidade1, numeros_de_pontos_turisticos1);
        printf("Carta do Oponente: %s, pontos turísticos: %d\n", nome_da_cidade2, numeros_de_pontos_turisticos2);

        if (numeros_de_pontos_turisticos1 == numeros_de_pontos_turisticos2)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (numeros_de_pontos_turisticos1 > numeros_de_pontos_turisticos2)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 5:

        // Atributo Densidade populacional
        printf("* COMPARANDO O PRIMEIRO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, densidade populacional: %.2f\n", nome_da_cidade1, densidade_populacional1);
        printf("Carta do Oponente: %s, densidade populacional: %.2f\n", nome_da_cidade2, densidade_populacional2);

        if (densidade_populacional1 == densidade_populacional2)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (densidade_populacional1 < densidade_populacional2)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 6:

        // Atributo PIB Per capita
        printf("* COMPARANDO O PRIMEIRO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, PIB per capita: %f\n", nome_da_cidade1, pib_percapto1);
        printf("Carta do Oponente: %s, PIB per capita: %f\n", nome_da_cidade2, pib_percapto2);

        if (pib_percapto1 == pib_percapto2)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("\n============================================\n");
        }
        else if (pib_percapto1 > pib_percapto2)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 7:

        // Atributo Super Poder
        printf("* COMPARANDO O PRIMEIRO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, super poder: %.2f\n", nome_da_cidade1, super_poder1);
        printf("Carta do Oponente: %s, super poder: %.2f\n", nome_da_cidade2, super_poder2);

        if (super_poder1 == super_poder2)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (super_poder1 > super_poder2)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      default:
        break;
      }

      // Fim do Switch de comparação do 1º atributo entre a carta 01 e 02

      switch (segundo_atributo_carta_1) // Inicio Switch de Comparação do 2º atributo entre a carta 01 e 02
      {
      case 1:

        // Atributo População
        printf("* COMPARANDO O SEGUNDO ATRIBUTO *\n\n");

        printf("Sua Carta: %s, população: %u\n", nome_da_cidade1, populacao1);
        printf("Carta do Oponente: %s, população: %u\n", nome_da_cidade2, populacao2);

        if (populacao1 == populacao2)
        {
          printf("============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (populacao1 > populacao2)
        {
          printf("============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 2:

        // Atributo Área
        printf("* COMPARANDO O SEGUNDO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, área: %.2f\n", nome_da_cidade1, area1);
        printf("Carta do Oponente: %s, área: %.2f\n", nome_da_cidade2, area2);

        if (area1 == area2)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (area1 > area2)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 3:

        // Atributo PIB
        printf("* COMPARANDO O SEGUNDO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, PIB: %.2f\n", nome_da_cidade1, pib1);
        printf("Carta do Oponente: %s, PIB: %.2f\n", nome_da_cidade2, pib2);

        if (pib1 == pib2)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (pib1 > pib2)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 4:

        // Atributo Pontos Turisticos
        printf("* COMPARANDO O SEGUNDO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, pontos turísticos: %d\n", nome_da_cidade1, numeros_de_pontos_turisticos1);
        printf("Carta do Oponente: %s, pontos turísticos: %d\n", nome_da_cidade2, numeros_de_pontos_turisticos2);

        if (numeros_de_pontos_turisticos1 == numeros_de_pontos_turisticos2)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (numeros_de_pontos_turisticos1 > numeros_de_pontos_turisticos2)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 5:

        // Atributo Densidade populacional
        printf("* COMPARANDO O SEGUNDO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, densidade populacional: %.2f\n", nome_da_cidade1, densidade_populacional1);
        printf("Carta do Oponente: %s, densidade populacional: %.2f\n", nome_da_cidade2, densidade_populacional2);

        if (densidade_populacional1 == densidade_populacional2)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (densidade_populacional1 < densidade_populacional2)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 6:

        // Atributo PIB Per capita
        printf("* COMPARANDO O SEGUNDO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, PIB per capita: %f\n", nome_da_cidade1, pib_percapto1);
        printf("Carta do Oponente: %s, PIB per capita: %f\n", nome_da_cidade2, pib_percapto2);

        if (pib_percapto1 == pib_percapto2)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("\n============================================\n");
        }
        else if (pib_percapto1 > pib_percapto2)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 7:

        // Atributo Super Poder
        printf("* COMPARANDO O SEGUNDO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, super poder: %.2f\n", nome_da_cidade1, super_poder1);
        printf("Carta do Oponente: %s, super poder: %.2f\n", nome_da_cidade2, super_poder2);

        if (super_poder1 == super_poder2)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (super_poder1 > super_poder2)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      default:
        break;
      } // FIM DO SWITCH DE COMPARAÇÃO DO 2º ATRIBUTO ENTRE CARTA 01 E 02

      break;

    case 2:

      printf("DADOS DA CARTA\n\n");

      // Carta 02

      printf("    *** CARTA 02 - RIO DE JANEIRO ***\n\n");
      printf("Estado: %c\n", estado2);
      printf("Código: %s\n", codigo_da_carta2);
      printf("Nome da Cidade: %s\n\n", nome_da_cidade2);

      printf("*** ATRIBUTOS ***\n\n");

      printf("1. População: %u habitantes\n", populacao2);
      printf("2. Área: %.2f Km²\n", area2);
      printf("3. PIB: %.2f bilhôes de reais\n", pib2);
      printf("4. Numero de Pontos Turisticos: %d\n", numeros_de_pontos_turisticos2);
      printf("5. Densidade Populacional: %.2f hab./Km²\n", densidade_populacional2);
      printf("6. PIB Per capita: R$ %f \n", pib_percapto2);
      printf("7. Super Poder: %.2f \n\n", super_poder2);
      printf(" ESCOLHA O 1º ATRIBUTO: ");
      scanf("%d", &primeiro_atributo_carta_2);

      // Menu para escolha do segundo atributo da carta 01

      printf("\n ESCOLHA O 2º ATRIBUTO DIFERENTE DO PRIMEIRO: ");
      scanf("%d", &segundo_atributo_carta_2);
      printf("\n");

      if (primeiro_atributo_carta_2 == segundo_atributo_carta_2)
      {
        printf("Atributos iguais, por favor escolha atributos diferentes\n");
      }
      else
      {
        printf("\n===============================================\n\n");
      }

      switch (primeiro_atributo_carta_2) // Inicio Switch de Comparação do 1º atributo entre a carta 01 e 02
      {
      case 1:

        // Atributo População
        printf("* COMPARANDO O PRIMEIRO ATRIBUTO *\n\n");

        printf("Sua Carta: %s, população: %u\n", nome_da_cidade2, populacao2);
        printf("Carta do Oponente: %s, população: %u\n", nome_da_cidade1, populacao1);

        if (populacao2 == populacao1)
        {
          printf("============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (populacao2 > populacao1)
        {
          printf("============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 2:

        // Atributo Área
        printf("* COMPARANDO O PRIMEIRO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, área: %.2f\n", nome_da_cidade2, area2);
        printf("Carta do Oponente: %s, área: %.2f\n", nome_da_cidade1, area1);

        if (area2 == area1)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (area2 > area1)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 3:

        // Atributo PIB
        printf("* COMPARANDO O PRIMEIRO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, PIB: %.2f\n", nome_da_cidade2, pib2);
        printf("Carta do Oponente: %s, PIB: %.2f\n", nome_da_cidade1, pib1);

        if (pib2 == pib1)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (pib2 > pib1)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 4:

        // Atributo Pontos Turisticos
        printf("* COMPARANDO O PRIMEIRO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, pontos turísticos: %d\n", nome_da_cidade2, numeros_de_pontos_turisticos2);
        printf("Carta do Oponente: %s, pontos turísticos: %d\n", nome_da_cidade1, numeros_de_pontos_turisticos1);

        if (numeros_de_pontos_turisticos2 == numeros_de_pontos_turisticos1)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (numeros_de_pontos_turisticos2 > numeros_de_pontos_turisticos1)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 5:

        // Atributo Densidade populacional
        printf("* COMPARANDO O PRIMEIRO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, densidade populacional: %.2f\n", nome_da_cidade2, densidade_populacional2);
        printf("Carta do Oponente: %s, densidade populacional: %.2f\n", nome_da_cidade1, densidade_populacional1);

        if (densidade_populacional2 == densidade_populacional1)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (densidade_populacional2 < densidade_populacional1)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 6:

        // Atributo PIB Per capita
        printf("* COMPARANDO O PRIMEIRO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, PIB per capita: %f\n", nome_da_cidade2, pib_percapto2);
        printf("Carta do Oponente: %s, PIB per capita: %f\n", nome_da_cidade1, pib_percapto1);

        if (pib_percapto2 == pib_percapto1)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("\n============================================\n");
        }
        else if (pib_percapto2 > pib_percapto1)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 7:

        // Atributo Super Poder
        printf("* COMPARANDO O PRIMEIRO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, super poder: %.2f\n", nome_da_cidade2, super_poder2);
        printf("Carta do Oponente: %s, super poder: %.2f\n", nome_da_cidade1, super_poder1);

        if (super_poder2 == super_poder1)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (super_poder2 > super_poder1)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      default:
        break;
      }

      // Fim do Switch de comparação do 1º atributo entre a carta 02 e 01

      switch (segundo_atributo_carta_2) // Inicio Switch de Comparação do 2º atributo entre a carta 01 e 02
      {
      case 1:

        // Atributo População
        printf("* COMPARANDO O SEGUNDO ATRIBUTO *\n\n");

        printf("Sua Carta: %s, população: %d\n", nome_da_cidade2, populacao2);
        printf("Carta do Oponente: %s, população: %d\n", nome_da_cidade1, populacao1);

        if (populacao2 == populacao1)
        {
          printf("============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (populacao2 > populacao1)
        {
          printf("============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 2:

        // Atributo Área
        printf("* COMPARANDO O SEGUNDO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, área: %.2f\n", nome_da_cidade2, area2);
        printf("Carta do Oponente: %s, área: %.2f\n", nome_da_cidade1, area1);

        if (area2 == area1)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (area2 > area1)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 3:

        // Atributo PIB
        printf("* COMPARANDO O SEGUNDO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, PIB: %.2f\n", nome_da_cidade2, pib2);
        printf("Carta do Oponente: %s, PIB: %.2f\n", nome_da_cidade1, pib1);

        if (pib2 == pib1)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (pib2 > pib1)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 4:

        // Atributo Pontos Turisticos
        printf("* COMPARANDO O SEGUNDO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, pontos turísticos: %d\n", nome_da_cidade2, numeros_de_pontos_turisticos2);
        printf("Carta do Oponente: %s, pontos turísticos: %d\n", nome_da_cidade1, numeros_de_pontos_turisticos1);

        if (numeros_de_pontos_turisticos2 == numeros_de_pontos_turisticos1)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (numeros_de_pontos_turisticos2 > numeros_de_pontos_turisticos1)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 5:

        // Atributo Densidade populacional
        printf("* COMPARANDO O SEGUNDO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, densidade populacional: %.2f\n", nome_da_cidade2, densidade_populacional2);
        printf("Carta do Oponente: %s, densidade populacional: %.2f\n", nome_da_cidade1, densidade_populacional1);

        if (densidade_populacional2 == densidade_populacional1)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (densidade_populacional2 < densidade_populacional1)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 6:

        // Atributo PIB Per capita
        printf("* COMPARANDO O SEGUNDO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, PIB per capita: %f\n", nome_da_cidade2, pib_percapto2);
        printf("Carta do Oponente: %s, PIB per capita: %f\n", nome_da_cidade1, pib_percapto1);

        if (pib_percapto2 == pib_percapto1)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("\n============================================\n");
        }
        else if (pib_percapto2 > pib_percapto1)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      case 7:

        // Atributo Super Poder
        printf("* COMPARANDO O SEGUNDO ATRIBUTO *\n\n");
        printf("Sua Carta: %s, super poder: %.2f\n", nome_da_cidade2, super_poder2);
        printf("Carta do Oponente: %s, super poder: %.2f\n", nome_da_cidade1, super_poder1);

        if (super_poder2 == super_poder1)
        {
          printf("\n============================================\n");
          printf("EMPATE!\n");
          printf("============================================\n");
        }
        else if (super_poder2 > super_poder1)
        {
          printf("\n============================================\n");
          printf("PARABÉNS, VOCÊ GANHOU\n");
          printf("============================================\n");
        }
        else
        {
          printf("\n============================================\n");
          printf("INFELIZMENTE, VOCÊ PERDEU!\n");
          printf("============================================\n");
        } // fim do IF

        break;

      default:
        break;
      } // FIM DO SWITCH DE COMPARAÇÃO DO 2º ATRIBUTO ENTRE CARTA 02 E 01

      break;

    default:
      break;
    } // fim do switch de Seleção da carta

    


    
        // Área das variáveis para comparação dos atributos
    double valor1_carta1, valor2_carta1;
    double valor1_carta2, valor2_carta2;
    double soma_carta1, soma_carta2;




    // Substitua os switchs de atribuição por este modelo unificado:
    
    // Se o jogador escolheu a carta 1, usamos as opções da carta 1. 
    // Se escolheu a carta 2, usamos as opções da carta 2.
    int attr1 = (selecao_de_carta == 1) ? primeiro_atributo_carta_1 : primeiro_atributo_carta_2;
    int attr2 = (selecao_de_carta == 1) ? segundo_atributo_carta_1 : segundo_atributo_carta_2;

    switch (attr1)
    {
    case 1:
      valor1_carta1 = populacao1;
      valor1_carta2 = populacao2;
      break;
    case 2:
      valor1_carta1 = area1;
      valor1_carta2 = area2;
      break;
    case 3:
      valor1_carta1 = pib1;
      valor1_carta2 = pib2;
      break;
    case 4:
      valor1_carta1 = numeros_de_pontos_turisticos1;
      valor1_carta2 = numeros_de_pontos_turisticos2;
      break;
    case 5:
      valor1_carta1 = densidade_populacional1;
      valor1_carta2 = densidade_populacional2;
      break;
    case 6:
      valor1_carta1 = pib_percapto1;
      valor1_carta2 = pib_percapto2;
      break;
    case 7:
      valor1_carta1 = super_poder1;
      valor1_carta2 = super_poder2;
      break;
    } 

    switch (attr2)
    {
    case 1:
      valor2_carta1 = populacao1;
      valor2_carta2 = populacao2;
      break;
    case 2:
      valor2_carta1 = area1;
      valor2_carta2 = area2;
      break;
    case 3:
      valor2_carta1 = pib1;
      valor2_carta2 = pib2;
      break;
    case 4:
      valor2_carta1 = numeros_de_pontos_turisticos1;
      valor2_carta2 = numeros_de_pontos_turisticos2;
      break;
    case 5:
      valor2_carta1 = densidade_populacional1;
      valor2_carta2 = densidade_populacional2;
      break;
    case 6:
      valor2_carta1 = pib_percapto1;
      valor2_carta2 = pib_percapto2;
      break;
    case 7:
      valor2_carta1 = super_poder1;
      valor2_carta2 = super_poder2;
      break;
    }
    /*

    switch (primeiro_atributo_carta_1)
    {
    case 1:
      valor1_carta1 = populacao1;
      valor1_carta2 = populacao2;
      break;

    case 2:
      valor1_carta1 = area1;
      valor1_carta2 = area2;
      break;

    case 3:
      valor1_carta1 = pib1;
      valor1_carta2 = pib2;
      break;

    case 4:
      valor1_carta1 = numeros_de_pontos_turisticos1;
      valor1_carta2 = numeros_de_pontos_turisticos2;
      break;

    case 5:
      // densidade: menor vence
      valor1_carta1 = densidade_populacional1;
      valor1_carta2 = densidade_populacional2;
      break;

    case 6:
      valor1_carta1 = pib_percapto1;
      valor1_carta2 = pib_percapto2;
      break;

    case 7:
      valor1_carta1 = super_poder1;
      valor1_carta2 = super_poder2;
      break;
    } // Fim do swith de atribuição do valor do primeiro atributo

    switch (segundo_atributo_carta_1)
    {
    case 1:
      valor2_carta1 = populacao1;
      valor2_carta2 = populacao2;
      break;

    case 2:
      valor2_carta1 = area1;
      valor2_carta2 = area2;
      break;

    case 3:
      valor2_carta1 = pib1;
      valor2_carta2 = pib2;
      break;

    case 4:
      valor2_carta1 = numeros_de_pontos_turisticos1;
      valor2_carta2 = numeros_de_pontos_turisticos2;
      break;

    case 5:
      valor2_carta1 = densidade_populacional1;
      valor2_carta2 = densidade_populacional2;
      break;

    case 6:
      valor2_carta1 = pib_percapto1;
      valor2_carta2 = pib_percapto2;
      break;

    case 7:
      valor2_carta1 = super_poder1;
      valor2_carta2 = super_poder2;
      break;
    } // Fim do swith de atribuição do valor do segundo atributo   

    */

    soma_carta1 = (long double) valor1_carta1 + (long double) valor2_carta1;
    soma_carta2 = (long double) valor1_carta2 + (long double) valor2_carta2;

    printf("\n============================================\n");
    printf("\n**SOMA DOS ATRIBUTOS*\n\n");

    printf("%s: %.2f\n", nome_da_cidade1, soma_carta1);
    printf("%s: %.2f\n", nome_da_cidade2, soma_carta2);

    if (soma_carta1 == soma_carta2)
    {
      printf("\n============================================\n");
      printf("EMPATE!\n\n");
      printf("============================================\n");
    }
    else if (soma_carta1 > soma_carta2)
    {
      printf("\n============================================\n");
      printf("PARABÉNS, VOCÊ GANHOU ESSA RODADA!\n\n");
      printf("============================================\n");
    } else
    {
      printf("\n============================================\n");
      printf("INFELIZMENTE, VOCÊ PERDEU ESSA RODADA!\n\n");
      printf("============================================\n");
    }

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
    printf("2. Voltar\n\n");

    break;

  default:
    printf("Opção Inválida\n\n");
    printf("0. Voltar\n");
    printf("\n===============================================\n\n");
    break;
  } // Fim do switch de opção

  return 0;
}