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
