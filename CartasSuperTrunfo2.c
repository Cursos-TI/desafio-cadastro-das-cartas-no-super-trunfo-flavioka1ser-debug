#include <stdio.h>

int main() {
    int populacao1 = 12325000, populacao2 = 6748000;
    int pontos1 = 50, pontos2 = 30;
    float area1 = 1521.11;
    float area2 = 1200.25;
    float pib1 = 699.28;
    float pib2 = 300.50;
    char estado1 = 'A', estado2 = 'B';
    char carta1[20] = "Carta 1", carta2[20] = "Carta 2";
    char nome1[20] = "São Paulo", nome2[20] = "Rio de Janeiro";
    char codigo1[10] = "A01", codigo2[10] = "B02";

    printf("%s\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", (float)populacao1 / area1);
    printf("PIB per capita: %.2f reais\n", (pib1 * 1000000000) / populacao1);

    printf("\n%s\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", (float)populacao2 / area2);
    printf("PIB per capita: %.2f reais\n", (pib2 * 1000000000) / populacao2);
    
    return 0;
}