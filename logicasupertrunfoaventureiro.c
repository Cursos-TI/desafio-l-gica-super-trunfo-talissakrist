#include <stdio.h>

// Desafio Super Trunfo - Cidades (Nível aventureiro)
// Lógica do jogo Super Trunfo usando switch e if-else


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
    
    //comparação de atributos das cartas
    int opcao;
    printf("\nEscolha um atributo da carta para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("Digite o número da opção: ");
    scanf("%d", &opcao);

    // Comparação dos atributos escolhidos
    printf("\nResultado da comparação:\n");

    switch(opcao) {
        case 1:
            if (populacao1 > populacao2) {
                printf("Carta 1 (%s) venceu com maior população.\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Carta 2 (%s) venceu com maior população.\n", cidade2);
            } else {
                printf("Empate em população.\n");
            }
            break;

        case 2:
            if (area1 > area2) {
                printf("Carta 1 (%s) venceu com maior área.\n", cidade1);
            } else if (area2 > area1) {
                printf("Carta 2 (%s) venceu com maior área.\n", cidade2);
            } else {
                printf("Empate em área.\n");
            }
            break;

        case 3:
            if (pib1 > pib2) {
                printf("Carta 1 (%s) venceu com maior PIB.\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Carta 2 (%s) venceu com maior PIB.\n", cidade2);
            } else {
                printf("Empate em PIB.\n");
            }
            break;

        case 4:
            if (pontot1 > pontot2) {
                printf("Carta 1 (%s) venceu com mais pontos turísticos.\n", cidade1);
            } else if (pontot2 > pontot1) {
                printf("Carta 2 (%s) venceu com mais pontos turísticos.\n", cidade2);
            } else {
                printf("Empate em pontos turísticos.\n");
            }
            break;

        case 5:
            if (densidadepop1 < densidadepop2) {
                printf("Carta 1 (%s) venceu com menor densidade populacional.\n", cidade1);
            } else if (densidadepop2 < densidadepop1) {
                printf("Carta 2 (%s) venceu com menor densidade populacional.\n", cidade2);
            } else {
                printf("Empate em densidade populacional.\n");
            }
            break;

        case 6:
            if (pibpercapita1 > pibpercapita2) {
                printf("Carta 1 (%s) venceu com maior PIB per capita.\n", cidade1);
            } else if (pibpercapita2 > pibpercapita1) {
                printf("Carta 2 (%s) venceu com maior PIB per capita.\n", cidade2);
            } else {
                printf("Empate em PIB per capita.\n");
            }
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}