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
  unsigned long int populacao1, populacao2;
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
  scanf("%lu", &populacao1);
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
  scanf("%lu", &populacao2);
  printf("Digite a área : \n");
  scanf("%f", &area2);
  printf("Digite o PIB : \n");
  scanf("%f", &pib2);
  printf("Digite o número de pontos turísticos : \n");
  scanf("%d", &numeroPontosTuristicos2);
  
  //calculando a densidade populacional e pib per capita apos a entrada dos dados
  float densidadePopulacional1, densidadePopulacional2;
  float pibPerCapita1, pibPerCapita2;
  float superpoder1, superpoder2; 
  int resultadoComparacaoPopulacao, resultadoComparacaoTurismo;  
  int resultadoComparacaoArea, resultadoComparacaoPib, resultadoComparacaoDensidade, resultadoComparacaoPibPerCapita, resultadoComparacaoSuperpoder;

  densidadePopulacional1 = (float) populacao1 / area1; 
  densidadePopulacional2 = (float) populacao2 / area2; 

  pibPerCapita1 = (float) pib1 / populacao1; 
  pibPerCapita2 = (float) pib2 / populacao2;

  //calcula o super poder 
  superpoder1 = (float) populacao1 + area1 + pib1 + numeroPontosTuristicos1 + pibPerCapita1 + (1/densidadePopulacional1); 
  superpoder2 = (float) populacao2 + area2 + pib2 + numeroPontosTuristicos2 + pibPerCapita2 + (1/densidadePopulacional2); 

  //compara cada atributo das cartas 1 e 2 
  
  resultadoComparacaoPopulacao = populacao1 > populacao2;
  resultadoComparacaoArea = area1 > area2; 
  resultadoComparacaoPib = pib1 > pib2;
  resultadoComparacaoTurismo = numeroPontosTuristicos1 > numeroPontosTuristicos2;
  resultadoComparacaoDensidade = densidadePopulacional2 > densidadePopulacional1;
  resultadoComparacaoPibPerCapita = pibPerCapita1 > pibPerCapita2; 
  resultadoComparacaoSuperpoder = superpoder1 > superpoder2; 


  //exibição dos dados após a entrada
  printf("Carta 1:\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s%s\n", estado1, codigo1);
  printf("Nome da Cidade: %s", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km2 \n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);
  
  printf("Carta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s%s\n", estado2, codigo2);
  printf("Nome da Cidade: %s", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km2 \n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);

  //card de comparação resultado

  printf("**Comparação de Cartas**\n\n");
  printf("População: Carta 1 venceu (%d)\n", resultadoComparacaoPopulacao);
  printf("População: Carta 1 venceu (%d)\n", resultadoComparacaoArea);
  printf("População: Carta 1 venceu (%d)\n", resultadoComparacaoPib);
  printf("População: Carta 1 venceu (%d)\n", resultadoComparacaoTurismo);
  printf("População: Carta 2 venceu (%d)\n", resultadoComparacaoDensidade);
  printf("População: Carta 1 venceu (%d)\n", resultadoComparacaoPibPerCapita);
  printf("População: Carta 1 venceu (%d)\n", resultadoComparacaoSuperpoder);
  
  // implementação de lógica de comparação usando laços 
  // escolha de critério: POPULAÇAO

  if (populacao1 > populacao2){
    printf("Comparacao de cartas (Atributo - população)\n");
    printf("Carta 1 = %s (%s) - %lu\n", cidade1, estado1, populacao1); 
    printf("Carta 2 = %s (%s) - %lu\n", cidade2, estado2, populacao2);
    printf("Resultado: Carta 1 - (%s) venceu!\n", cidade1); 
  } else{
    printf("Comparacao de cartas (Atributo - população)\n");
    printf("Carta 1 = %s (%s) - %lu\n", cidade1, estado1, populacao1); 
    printf("Carta 2 = %s (%s) - %lu\n", cidade2, estado2, populacao2);
    printf("Resultado: Carta 2 - (%s) venceu!\n", cidade1); 
  }

  return 0;
}
