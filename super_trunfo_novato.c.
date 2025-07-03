#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1[50], codigo1[4], nome1[100];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Dados da Carta 2
    char estado2[50], codigo2[4], nome2[100];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Entrada da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Código: ");
    scanf(" %3s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Código: ");
    scanf(" %3s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("Cidade: %s | Estado: %s | Código: %s\n", nome1, estado1, codigo1);
    printf("População: %d | Área: %.2f | PIB: %.2f | Pontos turísticos: %d\n",
           populacao1, area1, pib1, pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Cidade: %s | Estado: %s | Código: %s\n", nome2, estado2, codigo2);
    printf("População: %d | Área: %.2f | PIB: %.2f | Pontos turísticos: %d\n",
           populacao2, area2, pib2, pontosTuristicos2);

    // Comparação: População
    printf("\nResultado da comparação (População):\n");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu!\n");
    } else if (populacao2 > populacao1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}

