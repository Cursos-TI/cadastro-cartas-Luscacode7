#include <stdio.h>

int main () {
    
    char Estado[15];
    char Codigo[30];
    char Nome[30];
    int populacao;
    float Area;
    float PIB;
    int Pontos;

printf("Carta 1 \n");

printf("Digite o nome do seu Estado: \n");
scanf("%s", Estado);

printf("Digite o codigo da carta: \n");
scanf("%s", Codigo );

printf("Digite o nome da sua cidade: \n");
scanf("%s", Nome);

printf("Digite o numero de habitantes da sua cidade: \n");
scanf("%d", &populacao);

printf("Digite a area da sua cidade em km²: \n");
scanf(" %f", &Area);

printf("Digite o PIB da sua cidade: \n");
scanf(" %f", &PIB);

printf("Digite o numero de pontos turisticos existentes na sua cidade: \n");
scanf(" %d", &Pontos);

printf("\nREsumo da carta: \n");
printf("Estado: %s\n", Estado);
printf("Codigo: %s\n", Codigo);
printf("Nome: %s\n", Nome);
printf("populacao: %d\n", populacao);
printf("Area: %.2f\n", Area);
printf("PIB: %.2f\n", PIB);
printf("Pontos turisticos: %d\n", Pontos);








    
    return 0;
}