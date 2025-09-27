#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
    // Área para definição das variáveis para armazenar as propriedades das cidades
  
    char estado1[1], codigo1[3], cidade1[50], estado2[1], codigo2[3], cidade2[50];
    int populacao1, nPontoTurist1, populacao2, nPontoTurist2;
    float area1, pib1, area2, pib2;
    
    // Área para entrada de dados

    printf ("Cadastraremos os dados da cidade 01:\n\nInsira a primeira letra do estado: \n");
    scanf(char [1])"%s", &estado1);

    printf ("Insira um código de 01 a 04: \n");
    scanf("%s", &codigo1);
  
    printf ("Insira a cidade: \n");
    scanf("%s", &cidade1);
  
    printf ("Insira o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);
  
    printf ("Insira a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);
  
    printf ("Insira o Produto Interno Bruto da cidade (PIB) em bilhões de reais: \n");
    scanf("%f", &pib1);
  
    printf ("Insira a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &nPontoTurist1);

   
   
    printf ("\n\n Agora cadastraremos os dados da cidade 02:\n\nInsira a primeira letra do estado: \n");
    scanf("%s", &estado2);

    printf ("Insira um código de 01 a 04: \n");
    scanf("%s", &codigo2);
  
    printf ("Insira a cidade: \n");
    scanf("%s", &cidade2);
  
    printf ("Insira o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);
  
    printf ("Insira a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);
  
    printf ("Insira o Produto Interno Bruto da cidade (PIB) em bilhões de reais: \n");
    scanf("%f", &pib2);
  
    printf ("Insira quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &nPontoTurist2);

    // Área para exibição dos dados da cidade

    printf("\n\n Carta 1 : \n Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d \n \n ", estado1, codigo1, cidade1, populacao1, area1, pib1, nPontoTurist1);

    printf("Carta 2 : \n Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: km² %.2f \n PIB: %.2f bilhões de reais\n Número de pontos turisticos: %d  ", estado2, codigo2, cidade2, populacao2, area2, pib2, nPontoTurist2);

    return 0;
} 
