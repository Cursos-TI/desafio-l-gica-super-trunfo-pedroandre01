#include <stdio.h>
#include <string.h>

void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }
}

void compararCartas(int opcao, int pop1, int pop2, float area1, float area2, float pib1, float pib2,
                     int pts1, int pts2, char *cidade1, char *cidade2) {
    printf("\nResultado da comparação:\n");
    switch (opcao) {
        case 1: // População (maior vence)
            if (pop1 > pop2)
                printf("Vence a carta 1: %s (população maior)\n", cidade1);
            else if (pop2 > pop1)
                printf("Vence a carta 2: %s (população maior)\n", cidade2);
            else
                printf("Empate na população!\n");
            break;
        case 2: // Área (maior vence)
            if (area1 > area2)
                printf("Vence a carta 1: %s (área maior)\n", cidade1);
            else if (area2 > area1)
                printf("Vence a carta 2: %s (área maior)\n", cidade2);
            else
                printf("Empate na área!\n");
            break;
        case 3: // PIB (maior vence)
            if (pib1 > pib2)
                printf("Vence a carta 1: %s (PIB maior)\n", cidade1);
            else if (pib2 > pib1)
                printf("Vence a carta 2: %s (PIB maior)\n", cidade2);
            else
                printf("Empate no PIB!\n");
            break;
        case 4: // Pontos turísticos (maior vence)
            if (pts1 > pts2)
                printf("Vence a carta 1: %s (mais pontos turísticos)\n", cidade1);
            else if (pts2 > pts1)
                printf("Vence a carta 2: %s (mais pontos turísticos)\n", cidade2);
            else
                printf("Empate nos pontos turísticos!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
}

int main() {
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2;
    int opcao;

    // Cadastro carta 1
    printf("Digite a letra do estado da carta 1: ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da carta 1: ");
    getchar(); // limpa buffer
    fgets(cidade1, 100, stdin);
    remove_newline(cidade1);
    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área (km²) da carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB (bilhões) da carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontosturisticos1);

    // Cadastro carta 2
    printf("\nDigite a letra do estado da carta 2: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da carta 2: ");
    getchar(); // limpa buffer
    fgets(cidade2, 100, stdin);
    remove_newline(cidade2);
    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área (km²) da carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB (bilhões) da carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontosturisticos2);

    // Exibir cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n",
           estado1, codigo1, cidade1, populacao1, area1, pib1, pontosturisticos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, pontosturisticos2);

    // Menu para escolher atributo
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Chama função de comparação
    compararCartas(opcao, populacao1, populacao2, area1, area2, pib1, pib2,
                   pontosturisticos1, pontosturisticos2, cidade1, cidade2);

    return 0;
}

