#include <stdio.h>

  int main() {
    // Carta 1 - Rio de Janeiro
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nome1[] = "Rio de Janeiro";
    int populacao1 = 6748000;
    float area1 = 1200.25f;
    float pib1 = 300.50f;
    int pontos1 = 30;

    // Carta 2 - Belo Horizonte
    char estado2 = 'B';
    char codigo2[] = "B02"; 
    char nome2[] = "Belo Horizonte";
    int populacao2 = 2512000;
    float area2 = 330.90f;
    float pib2 = 120.75f;
    int pontos2 = 50;

    // Exibição das cartas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n\n", pontos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    return 0;







    
  }

   



    
