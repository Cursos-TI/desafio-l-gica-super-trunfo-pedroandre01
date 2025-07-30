#include <stdio.h>
#include <string.h>

void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n') str[len-1] = '\0';
}

// Função que retorna 1 se atributo1 vence, 2 se atributo2 vence, 0 empate
int compararFloat(float val1, float val2) {
    if (val1 > val2) return 1;
    else if (val2 > val1) return 2;
    else return 0;
}

int compararInt(int val1, int val2) {
    if (val1 > val2) return 1;
    else if (val2 > val1) return 2;
    else return 0;
}

void mostrarMenu() {
    printf("Escolha o atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
}

int main() {
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2, pts1, pts2;
    float area1, area2, pib1, pib2;
    int op1, op2;

    // Cadastro das cartas (igual do exemplo anterior)
    printf("Carta 1\n");
    printf("Estado (letra): "); scanf(" %c", &estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Cidade: "); getchar(); fgets(cidade1, 100, stdin); remove_newline(cidade1);
    printf("População: "); scanf("%d", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (bilhões): "); scanf("%f", &pib1);
    printf("Pontos turísticos: "); scanf("%d", &pts1);

    printf("\nCarta 2\n");
    printf("Estado (letra): "); scanf(" %c", &estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Cidade: "); getchar(); fgets(cidade2, 100, stdin); remove_newline(cidade2);
    printf("População: "); scanf("%d", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (bilhões): "); scanf("%f", &pib2);
    printf("Pontos turísticos: "); scanf("%d", &pts2);

    printf("\n--- Escolha dois atributos para comparar ---\n");
    mostrarMenu();
    printf("Primeiro atributo: ");
    scanf("%d", &op1);
    printf("Segundo atributo: ");
    scanf("%d", &op2);

    // Variáveis para resultados
    int res1 = 0, res2 = 0;

    // Comparando primeiro atributo
    switch(op1) {
        case 1: res1 = compararInt(populacao1, populacao2); break;
        case 2: res1 = compararFloat(area1, area2); break;
        case 3: res1 = compararFloat(pib1, pib2); break;
        case 4: res1 = compararInt(pts1, pts2); break;
        default: printf("Opção inválida no primeiro atributo\n"); return 1;
    }

    // Comparando segundo atributo
    switch(op2) {
        case 1: res2 = compararInt(populacao1, populacao2); break;
        case 2: res2 = compararFloat(area1, area2); break;
        case 3: res2 = compararFloat(pib1, pib2); break;
        case 4: res2 = compararInt(pts1, pts2); break;
        default: printf("Opção inválida no segundo atributo\n"); return 1;
    }

    // Lógica para decidir o vencedor com operadores ternários
    // Se um atributo já deu vencedor claro, vence
    // Se empate em ambos, empate geral
    // Se cada atributo deu vencedor diferente, empate (pode criar regra para desempate)

    if (res1 == res2 && res1 != 0) {
        // Mesmo vencedor nos dois atributos
        printf("\nVencedor geral: Carta %d (%s)\n", res1, (res1 == 1) ? cidade1 : cidade2);
    } else if (res1 == 0 && res2 == 0) {
        printf("\nEmpate geral!\n");
    } else {
        printf("\nEmpate na comparação dos dois atributos!\n");
    }

    return 0;
}

