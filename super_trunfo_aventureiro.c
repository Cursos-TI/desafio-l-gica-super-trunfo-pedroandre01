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

    int opcao;

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

    // Menu interativo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando...\n");

    switch (opcao) {
        case 1:
            if (populacao1 > populacao2)
                printf("Carta 1 venceu pela População!\n");
            else if (populacao2 > populacao1)
                printf("Carta 2 venceu pela População!\n");
            else
                printf("Empate na População!\n");
            break;
        case 2:
            if (area1 > area2)
                printf("Carta 1 venceu pela Área!\n");
            else if (area2 > area1)
                printf("Carta 2 venceu pela Área!\n");
            else
                printf("Empate na Área!\n");
            break;
        case 3:
            if (pib1 > pib2)
                printf("Carta 1 venceu pelo PIB!\n");
            else if (pib2 > pib1)
                printf("Carta 2 venceu pelo PIB!\n");
            else
                printf("Empate no PIB!\n");
            break;
        case 4:
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Carta 1 venceu pelos Pontos Turísticos!\n");
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Carta 2 venceu pelos Pontos Turísticos!\n");
            else
                printf("Empate nos Pontos Turísticos!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
