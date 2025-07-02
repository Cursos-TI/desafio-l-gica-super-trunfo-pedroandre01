#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1, codigo1[4], nome1[100];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Dados da Carta 2
    char estado2, codigo2[4], nome2[100];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    int escolha1, escolha2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
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

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
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

    // Exibir opções de comparação
    printf("\nAtributos disponíveis:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");

    // Escolha dos atributos
    printf("\nEscolha o primeiro atributo para comparar: ");
    scanf("%d", &escolha1);
    printf("Escolha o segundo atributo para comparar: ");
    scanf("%d", &escolha2);

    int pontos1 = 0, pontos2 = 0;

    // Comparar primeiro atributo
    pontos1 += (escolha1 == 1) ? (populacao1 > populacao2) : 
               (escolha1 == 2) ? (area1 > area2) : 
               (escolha1 == 3) ? (pib1 > pib2) : 
               (escolha1 == 4) ? (pontosTuristicos1 > pontosTuristicos2) : 0;

    pontos2 += (escolha1 == 1) ? (populacao2 > populacao1) : 
               (escolha1 == 2) ? (area2 > area1) : 
               (escolha1 == 3) ? (pib2 > pib1) : 
               (escolha1 == 4) ? (pontosTuristicos2 > pontosTuristicos1) : 0;

    // Comparar segundo atributo
    pontos1 += (escolha2 == 1) ? (populacao1 > populacao2) : 
               (escolha2 == 2) ? (area1 > area2) : 
               (escolha2 == 3) ? (pib1 > pib2) : 
               (escolha2 == 4) ? (pontosTuristicos1 > pontosTuristicos2) : 0;

    pontos2 += (escolha2 == 1) ? (populacao2 > populacao1) : 
               (escolha2 == 2) ? (area2 > area1) : 
               (escolha2 == 3) ? (pib2 > pib1) : 
               (escolha2 == 4) ? (pontosTuristicos2 > pontosTuristicos1) : 0;

    // Resultado final
    printf("\nResultado Final:\n");
    if (pontos1 > pontos2) {
        printf("🎉 Carta 1 venceu com %d pontos!\n", pontos1);
    } else if (pontos2 > pontos1) {
        printf("🎉 Carta 2 venceu com %d pontos!\n", pontos2);
    } else {
        printf("🤝 Empate! Ambas as cartas são poderosas!\n");
    }

    return 0;
}
