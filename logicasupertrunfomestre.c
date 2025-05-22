#include <stdio.h>

// Desafio Super Trunfo - Cidades (Nível mestre)
// Lógica do jogo Super Trunfo implementando comparações avançadas com atributos múltiplos em C.


int main() {

    //Declaração de variáveis para armazenar os dados das duas cartas!
    
    printf("Desafio Super Trunfo!\n\n");
    char estado1;
    char estado2;
    char codigo1[4];
    char codigo2[4];
    char cidade1 [11];
    char cidade2 [11];
    long int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontot1;
    int pontot2;
    float densidadepop1;
    float densidadepop2;
    float pibpercapita1;
    float pibpercapita2;

    //Exibição dos dados da primeira carta!

    printf("Carta 1\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código da cidade: ");
    scanf(" %s", &codigo1);
    printf("Cidade: ");
    scanf(" %s", &cidade1);
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área: ");
    scanf(" %f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontot1);

    //Cálculo da densidade populacional da primeira carta
    densidadepop1 = (float) populacao1 / area1;

    //Cálculo do PIB per capita
    pibpercapita1 = (float) ( pib1 / populacao1 );

    printf("\n***Dados da Primeira carta***\n");
    printf("Estado: %c\n" , estado1);
    printf("Código da cidade: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f Km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontot1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepop1);
    printf("Pib per capita: %.2f reais\n", pib1);
    
    //Exibição dos dados da segunda carta!
  
    printf("\nCarta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código da cidade: ");
    scanf(" %s", &codigo2);
    printf("Cidade: ");
    scanf("%s", &cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontot2);

    //Cálculo da densidade populacional da segunda carta
    densidadepop2 = (float) populacao2 / area2;

    //Cálculo do Pib per capita
    pibpercapita2 = (float) ( pib2 / populacao2 ) * 1000000000;

    printf("\n***Dados da Segunda carta***\n");
    printf("Estado: %c\n" , estado2);
    printf("Código da cidade: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f Km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontot2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepop2);
    printf("Pib per capita: %.2f reais\n", pib2);


    printf("Comparação de cartas (Atributo: população)\n");

    if(populacao1 > populacao2){
        printf("A carta 1 (Natal) venceu\n");
    } else {
        printf("A carta 2 (Fortaleza) venceu\n");
    }

    int atributo1, atributo2, resultado1, resultado2, soma;
   
    printf("\nEscolha o primeiro atributo: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
  
    printf("Digite o número do primeiro atributo: ");
    scanf("%d", &atributo1);
    
    
    switch (atributo1)
    {
        case 1:
        printf("Você escolheu o atributo população! Carta 1:%d Carta 2: %d\n", populacao1, populacao2);
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        resultado2 = populacao2 > populacao1 ? 1 : 0;
        break;
        case 2:
        printf("Você escolheu o atributo área! Carta 1:%f Carta 2: %f\n", area1, area2);
        resultado1 = area1 > area2 ? 1 : 0;
        resultado2 = area2 > area1 ? 1 : 0;
        break;
        case 3:
        printf("Você escolheu o atributo PIB! Carta 1: %f Carta 2: %f\n" , pib1, pib2);
        resultado1 = pib1 > pib2 ? 1 : 0;
        resultado2 = pib2 > pib1 ? 1 : 0;
        break;
        case 4:
        printf("Você escolheu o atributo ponto turístico! Carta 1: %d Carta 2: %d\n" , pontot1, pontot2);
        resultado1 = pontot1 > pontot2 ? 1 : 0;
        resultado2 = pontot2 > pontot1 ? 1 : 0;
        break;
        case 5:
        printf("Você escolheu o atributo Densidade populacional! Carta 1: %f Carta 2: %f\n" , densidadepop1, densidadepop2);
        resultado1 = densidadepop1 < densidadepop2 ? 1 : 0;
        resultado2 = densidadepop2 < densidadepop1 ? 1 : 0;
        break;
        case 6:
        printf("Você escolheu o atributo Pib per capita! Carta 1: %f Carta 2: %f\n" , pibpercapita1, pibpercapita2);
        resultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;
        resultado2 = pibpercapita2 > pibpercapita1 ? 1 : 0;
        break;
    }  
    printf("\nEscolha o segundo atributo: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    
    printf("Digite o número da segunda opção: ");
    scanf("%d", &atributo2);
    
    if( atributo1 == atributo2)
    {
        printf("Você escolheu o mesmo atributo");
    } else
    {
        switch (atributo2)
        {
        case 1:
        printf("Você escolheu o atributo população! Carta 1: %d Carta 2: %d\n", populacao1, populacao2);
        resultado1 += populacao1 > populacao2 ? 1 : 0;
        resultado2 += populacao2 > populacao1 ? 1 : 0;
        break;
        case 2:
        printf("Você escolheu o atributo área! Carta 1: %f Carta 2: %f\n", area1, area2);
        resultado1 += area1 > area2 ? 1 : 0;
        resultado2 += area2 > area1 ? 1 : 0;
        break;
        case 3:
        printf("Você escolheu o atributo PIB! Carta 1: %f Carta 2: %f\n" , pib1, pib2);
        resultado1 += pib1 > pib2 ? 1 : 0;
        resultado2 += pib2 > pib1 ? 1 : 0;
        break;
        case 4:
        printf("Você escolheu o atributo ponto turístico! Carta 1: %d Carta 2: %d\n" , pontot1, pontot2);
        resultado1 += pontot1 > pontot2 ? 1 : 0;
        resultado2 += pontot2 > pontot1 ? 1 : 0;
        break;
        case 5:
        printf("Você escolheu o atributo Densidade populacional! Carta 1: %f Carta 2: %f\n" , densidadepop1, densidadepop2);
        resultado1 += densidadepop1 < densidadepop2 ? 1 : 0;
        resultado2 += densidadepop2 < densidadepop1 ? 1 : 0;
        break;
        case 6:
        printf("Você escolheu o atributo Pib per capita! Carta 1: %f Carta 2: %f\n" , pibpercapita1, pibpercapita2);
        resultado1 += pibpercapita1 > pibpercapita2 ? 1 : 0;
        resultado2 += pibpercapita2 > pibpercapita1 ? 1 : 0;
        break;}
    }  
    if( resultado1 > resultado2){
        printf("Parabéns, carta 1 (Fortaleza) venceu! Pontuação: %d\n", resultado1);
    } else if (resultado1 == resultado2){
        printf("Empatou!\n");
    } else {
        printf("Parabéns, Carta 2 (Natal) venceu! Pontuação: %d\n", resultado2);
    }

  return 0;
}