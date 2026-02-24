#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[3];
  char estado2[3];
  char cod_carta1[5];
  char cod_carta2[5];
  char nome_cidade1[30];
  char nome_cidade2[30];
  int populacao1;
  int populacao2;
  float area1;
  float area2;
  float pib1;
  float pib2;
  int n_pontos_tur1;
  int n_pontos_tur2;

  // Área para entrada de dados
  printf("\n-- Primeira Carta --\n");

  printf("Estado: ");
  scanf("%2s", estado1);
  printf("Código da Carta: ");
  scanf("%4s", cod_carta1);

  // Nome da Cidade podendo conter espaços
  getchar();  // Limpa o \n que ficou no buffer
  printf("Nome da Cidade: ");
  fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
  nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';

  printf("População da Cidade: ");
  scanf("%d", &populacao1);
  printf("Área em km²: ");
  scanf("%f", &area1);
  printf("PIB do Estado: ");
  scanf("%f", &pib1);
  printf("Número de Pontos Turisticos da Cidade: ");
  scanf("%d", &n_pontos_tur1);

  // Segunda Entrada de Dados
  printf("\n-- Segunda Carta --\n");
  printf("Estado: ");
  scanf("%2s", estado2);

  printf("Código da Carta: ");
  scanf("%4s", cod_carta2);

  // Nome da Cidade podendo conter espaços
  getchar();  // Limpa o \n que ficou no buffer
  printf("Nome da Cidade: ");
  fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
  nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';

  printf("População da Cidade: ");
  scanf("%d", &populacao2);
  printf("Área em km²: ");
  scanf("%f", &area2);
  printf("PIB do Estado: ");
  scanf("%f", &pib2);
  printf("Número de Pontos Turisticos da Cidade: ");
  scanf("%d", &n_pontos_tur2);


  // Área para exibição dos dados da cidade
  printf("\n\n-- Cartas Cadastradas --\n");

  printf("\n-- Primeira Carta --\n");
  printf("Estado: %s\n", estado1);
  printf("Código da Carta: %s\n", cod_carta1);
  printf("Nome da Cidade: %s\n", nome_cidade1);
  printf("População da Cidade: %d\n", populacao1);
  printf("Área em km²: %.2f\n", area1);
  printf("PIB do Estado: %.2f\n", pib1);
  printf("Número de Pontos Turisticos da Cidade: %d\n", n_pontos_tur1);

  printf("\n-- Segunda Carta --\n");
  printf("Estado: %s", estado2);
  printf("Código da Carta: %s\n", cod_carta2);
  printf("Nome da Cidade: %s\n", nome_cidade2);
  printf("População da Cidade: %d\n", populacao2);
  printf("Área em km²: %.2f\n", area2);
  printf("PIB do Estado: %.2f\n", pib2);
  printf("Número de Pontos Turisticos da Cidade: %d\n", n_pontos_tur2);

  return 0;
} 
