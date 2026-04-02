#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade
    char estado1[10], estado2[10], codigo1[4], codigo2[4], cidade1[10], cidade2[10];
    int populacao1, populacao2, pontos1, pontos2, resultadopopulacao, resultadoarea, resultadopib, resultadopontos,
        resultadodensidade, resultadopibpc, resultadosp;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpc1, pibpc2, sp1, sp2;

    printf ("Olá! Vamos iniciar a inclusão das informações das cartas do jogo Super Trunfo.\n");
    printf ("Vamos começar com as informações da primera carta.\n");
    
    printf ("Digite o nome do Estado: \n");
    scanf ("%s", estado1);

    printf ("Digite o código da carta: \n");
    scanf ("%s", codigo1);

    printf ("Digite o nome da Cidade: \n");
    scanf ("%s", cidade1);

    printf ("Digite a população da Cidade: \n");
    scanf ("%d", &populacao1);

    printf ("Digite a área total da Cidade: \n");
    scanf ("%f", &area1);

    printf ("Digite o PIB da Cidade: \n");
    scanf ("%f", &pib1);

    printf ("Digite a quantidade de pontos turísticos: \n");
    scanf ("%d", &pontos1);
    printf ("\n");

    printf ("Obrigado! Agora que finalizamos a inclusão das informações da primeira carta, faremos o mesmo para segunda carta\n");
    printf ("\n");
    
    printf ("Digite o nome do Estado: \n");
    scanf ("%s", estado2);

    printf ("Digite o código da carta: \n");
    scanf ("%s", codigo2);

    printf ("Digite o nome da Cidade: \n");
    scanf ("%s", cidade2);

    printf ("Digite a população da Cidade: \n");
    scanf ("%d", &populacao2);

    printf ("Digite a área total da Cidade: \n");
    scanf ("%f", &area2);

    printf ("Digite o PIB da Cidade: \n");
    scanf ("%f", &pib2);

    printf ("Digite a quantidade de pontos turísticos: \n");
    scanf ("%d", &pontos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibpc1 = pib1 / populacao1;
    pibpc2 = pib2 / populacao2;

    resultadopopulacao = populacao1 > populacao2;
    resultadoarea = area1 > area2;
    resultadopib = pib1> pib2;
    resultadopontos = pontos1 > pontos2;
    resultadodensidade = densidade1 < densidade2;
    resultadopibpc = pibpc1 > pibpc2;
    sp1 = (1/densidade1) + populacao1 + area1 + pib1 + pontos1 + pibpc1;
    sp2 = (1/densidade2) + populacao2 + area2 + pib2 + pontos2 + pibpc2;
    resultadosp = sp1 > sp2;

    printf ("Após a inclusão das informações, veja como ficaram as cartas:\n");
    printf ("\n");
    printf ("***CARTA Nº1***\n");
    printf ("CÓDIGO DA CARTA: %s \n", codigo1);
    printf ("ESTADO: %s \n", estado1);
    printf ("CIDADE: %s \n", cidade1);
    printf ("POPULAÇÃO: %d Habitantes \n", populacao1);
    printf ("ÁREA: %f Km² \n", area1);
    printf ("PIB: R$ %.2f \n", pib1);
    printf ("PONTOS TURÍSTICOS: %d \n", pontos1);
    printf ("DENSIDADE DEMOGRÁFICA: %.2f hab/Km² \n", densidade1);
    printf ("PIB PER CAPTA: %.2f \n", pibpc1);
    printf ("\n");

    printf ("***CARTA Nº2***\n");
    printf ("CÓDIGO DA CARTA: %s \n", codigo2);
    printf ("ESTADO: %s \n", estado2);
    printf ("CIDADE: %s \n", cidade2);
    printf ("POPULAÇÃO: %d Habitantes \n", populacao2);
    printf ("ÁREA: %f Km²\n", area2);
    printf("PIB: R$ %.2f \n", pib2);
    printf ("PONTOS TURÍSTICOS: %d \n", pontos2);
    printf ("DENSIDADE DEMOGRÁFICA: %.2f hab/Km² \n", densidade2);
    printf ("PIB PER CAPTA: %.2f \n", pibpc2);
    printf ("\n");

    printf ("***COMPARAÇÃO DE CARTAS*** \n");
    printf ("\n");

    printf ("POPULAÇÃO: Carta %s venceu %d \n",codigo1, resultadopopulacao);
    printf ("ÁREA: Carta %s venceu %d \n", codigo1, resultadoarea);
    printf ("PIB: Carta %s venceu %d \n", codigo1, resultadopib);
    printf ("PONTOS TURÍSTICOS: Carta %s venceu %d \n", codigo1, resultadopontos);
    printf ("DENSIDADE: Carta %s venceu %d \n", codigo1, resultadodensidade);
    printf ("PIB PER CAPTA: Carta %s venceu %d \n", codigo1, resultadopibpc);
    printf ("SUPER PODER: Carta %s venceu %d \n", codigo1, resultadosp);
    printf ("\n");

    printf ("Nossa tarefa se encerra aqui. Obrigado por nos ajudar com o jogo Super Trunfo!");

return 0;
}