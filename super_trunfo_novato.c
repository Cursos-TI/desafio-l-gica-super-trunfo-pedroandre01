#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[3];
    char codigo[10];
    char cidade[50];
    unsigned long populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

void cadastrarCarta(Carta *carta) {
    printf("Estado (sigla): ");
    scanf("%2s", carta->estado);
    printf("Código da carta: ");
    scanf("%9s", carta->codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta->cidade);
    printf("População: ");
    scanf("%lu", &carta->populacao);
    printf("Área (km²): ");
    scanf("%f", &carta->area);
    printf("PIB (R$): ");
    scanf("%f", &carta->pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void exibirCarta(Carta carta) {
    printf("\nEstado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.cidade);
    printf("População: %lu\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: R$ %.2f\n", carta.pib);
    printf("Pontos turísticos: %d\n", carta.pontosTuristicos);
}

void compararPorPopulacao(Carta c1, Carta c2) {
    printf("\nComparação por população:\n");
    if (c1.populacao > c2.populacao) {
        printf("Vence a carta 1: %s\n", c1.cidade);
    } else if (c2.populacao > c1.populacao) {
        printf("Vence a carta 2: %s\n", c2.cidade);
    } else {
        printf("Empate!\n");
    }
}

int main() {
    Carta carta1, carta2;

    printf("Cadastro da Carta 1:\n");
    cadastrarCarta(&carta1);

    printf("\nCadastro da Carta 2:\n");
    cadastrarCarta(&carta2);

    printf("\nCarta 1:");
    exibirCarta(carta1);
    printf("\nCarta 2:");
    exibirCarta(carta2);

    compararPorPopulacao(carta1, carta2);

    return 0;
}

