#include<stdio.h>
#include <string.h>

void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }
}
int main(){    
    //decrarando variaves da carta 1

    char estado1;
    char codigo1[10] = "a01";
    char cidade1[100];
    int populacao1, pontosturisticos1;
    float area1, pib1, densidade_populacional1, pib_per_capita1;

   //decrarando variaves da carta 2

    char estado2;
    char codigo2[10] = "a01";
    char cidade2[100];
    int populacao2, pontosturisticos2;
    float area2, pib2,  densidade_populacional2, pib_per_capita2;


    //recolendo dados do usuarios1
    printf("digite a letra do estado:\n");
    scanf( " %c"  , &estado1);
printf("digite o código do estado:\n");
scanf("%s" ,codigo1);
printf("digite o nome da cidade:\n");
getchar();
fgets(cidade1, 100, stdin);
remove_newline(cidade1);
printf("digite a população:\n");
scanf("%d",&populacao1);
printf("digite a área (em km²):\n");
scanf("%f" ,&area1);
printf("Digite o PIB (em bilhões):\n");
scanf("%f" ,&pib1);
printf("digite o número de pontos turisticos:\n");
scanf("%d" ,&pontosturisticos1);

 //calculando carta 2
 densidade_populacional1 = populacao1 / area1;
 pib_per_capita1 =  pib1 / populacao1;

  //recolendo dados do usuarios2
    printf("digite a letra do estado:\n");
    scanf( " %c"  , &estado2);
printf("digite o código do estado:\n");
scanf("%s" ,codigo2);
printf("digite o nome da cidade:\n");
getchar();
fgets(cidade2, 100, stdin);
remove_newline(cidade2);
printf("digite a população:\n");
scanf("%d",&populacao2);
printf("digete a área (em km²):\n");
scanf("%f" ,&area2);
printf("digite o pib(em bilhos):\n");
scanf("%f" ,&pib2);
printf("digite o número de pontos turisticos:\n");
scanf("%d" ,&pontosturisticos2);

//calculando carta 2
  densidade_populacional2 = populacao2 / area2;
 pib_per_capita2 =  pib2 / populacao2;

 
// Exibindo os dados da carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s", cidade1); // fgets já inclui o \n
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
printf("PIB per capita: %.2f\n", pib_per_capita1);


    // Exibindo os dados da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s", cidade2); // fgets já inclui o \n
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
printf("PIB per capita: %.2f\n", pib_per_capita2);


return 0;

}
