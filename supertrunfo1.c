#include <stdio.h>

    int main() {

    

    // Variáveis para Carta 1
    char estado;
    char codigo[5];  // Ex: A01\0 
    char nome[50];   // Nome da cidade 
    int populacao;
    float area;
    float pib;
    int pontos;

     
     // Carta 1
     printf("Digite o Estado da carta 1 (A-H):\n");
     scanf(" %c", &estado);

     printf("Digite o codigo da carta 1\n");
     scanf(" %s", codigo);

     printf("Digite o nome da sua cidade\n");
     scanf(" %s", nome);

     printf("Digite o numero de habitantes da cidade\n");
     scanf("%d", &populacao);

     printf("Digite a area da cidade em km² \n");
     scanf("%f", &area);

     printf("Digite o PIB da cidade \n");
     scanf("%f", &pib);

     printf("Digite o numero de pontos turisticos da cidade \n");
     scanf("%d", &pontos);



 // Variáveis para Carta 2
    char estado2;
    char codigo2[5];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;


     // Carta 2

     printf("Digite o Estado da carta 2 (A-H):\n");
     scanf(" %c", &estado2);

     printf("Digite o codigo da carta 2\n");
     scanf(" %s", codigo2);

     printf("Digite o nome da sua cidade\n");
     scanf(" %s", nome2);

     printf("Digite o numero de habitantes da cidade\n");
     scanf("%d", &populacao2);

     printf("Digite a area da cidade em km² \n");
     scanf("%f", &area2);

     printf("Digite o PIB da cidade \n");
     scanf("%f", &pib2);

     printf("Digite o numero de pontos turisticos da cidade \n");
     scanf("%d", &pontos2);

     // organizando carta1

     printf("\nCarta 1:\n");
     printf("Estado: %c\n", estado);
     printf("Código: %s\n", codigo);
     printf("Nome da Cidade: %s\n", nome);
     printf("População: %d\n", populacao);
     printf("Área: %.2f km²\n", area);
     printf("PIB: %.2f\n", pib);
     printf("Numeros de pontos turisticos da cidade: %d\n\n", pontos);



    // organizando carta2

     printf("\nCarta 2:\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", nome2);
     printf("População: %d\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f\n", pib);
     printf("Numeros de pontos turisticos da cidade: %d\n", pontos2);




     return 0;



    }



