#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char cidade[50];
  int populacao, nPontoTurist;
  float area, pib;
 
  // Área para entrada de dados

  printf ("Insira a cidade: \n");
  scanf("%s", &cidade);
  
  printf ("Insira o número de habitantes da cidade: \n");
  scanf("%d", &populacao);
  
  printf ("Insira a área da cidade em quilômetros quadrados: \n");
  scanf("%f", &area);
  
  printf ("O Produto Interno Bruto da cidade: \n");
  scanf("%f", &pib);
  
  printf (" A quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &nPontoTurist);

  // Área para exibição dos dados da cidade

  printf("Cidade cadastrada: \n Cidade: %s \n População: %d \n Área: %f \n PIB: %f \n Quantidae de pontos turisticos: %d  ", cidade, populacao, area, pib, nPontoTurist);

return 0;
} 
