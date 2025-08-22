#include <stdio.h>

int main(){
    int estado, populacao, pontos;
    float area, pib;
    char nome[50];

    printf;("Digite seu Estado: \n");
    scanf("%d", &estado);

    print("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite os pontos: \n");
    scanf("%d", &pontos);

    printf("Nome do País: %s", estado);
    printf("População do Estado: %d", populacao);
    printf("A Área do Estado: %d", area);
    printf("PIB: %d", pib);
    printf("Números de Pontos Turísticos: %d", pontos);
    
    return 0;
}
