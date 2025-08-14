#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
      //declaração das variáveis
  char estado1[8], estado2[8]; 
  char codigo1[4], codigo2[4];
  char cidade1[30], cidade2[30];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int numeroPontosTuristicos1, numeroPontosTuristicos2;
  
  //entrada dos dados - carta 1
  printf("**Para a Carta 1 digite as informações necessárias** \n");
  printf("\nDigite o estado : \n");
  scanf("%s", estado1);
  printf("Digite o código : \n");
  scanf("%s", codigo1);
  getchar(); //remove o \n deixado permitindo que o fgets funcione corretamente
  printf("Digite a cidade : \n");
  fgets(cidade1, 30, stdin);
  printf("Digite a população: \n");
  scanf("%d", &populacao1);
  printf("Digite a área : \n");
  scanf("%f", &area1);
  printf("Digite o PIB : \n");
  scanf("%f", &pib1);
  printf("Digite o número de pontos turísticos : \n");
  scanf("%d", &numeroPontosTuristicos1);

  //entrada de dados - carta 2
  printf("**Para a Carta 2 digite as informações necessárias** \n");
  printf("\nDigite o estado : \n");
  scanf("%s", estado2);
  printf("Digite o código : \n");
  scanf("%s", codigo2);
  getchar(); //remove o \n deixado permitindo que o fgets funcione corretamente
  printf("Digite a cidade : \n");
  fgets(cidade2, 30, stdin);
  printf("Digite a população: \n");
  scanf("%d", &populacao2);
  printf("Digite a área : \n");
  scanf("%f", &area2);
  printf("Digite o PIB : \n");
  scanf("%f", &pib2);
  printf("Digite o número de pontos turísticos : \n");
  scanf("%d", &numeroPontosTuristicos2);
  
  //exibição dos dados após a entrada
  printf("Carta 1:\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s%s\n", estado1, codigo1);
  printf("Nome da Cidade: %s", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Número de Pontos Turísticos: %d\n\n", numeroPontosTuristicos1);
  
  printf("Carta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s%s\n", estado2, codigo2);
  printf("Nome da Cidade: %s", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);

    return 0;
}
