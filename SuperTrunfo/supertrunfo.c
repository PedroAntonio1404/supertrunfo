#include <stdio.h>

int main() {

    // VARIAVEIS DA CARTA 1 //
    char estado1;
    char codigo1[4];
    char nomecidade1[22];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // COMEÇO DO CADASTRO DA CARTA 1 //
    printf("------------- Cadastro da Carta 1 -----------------\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (exemplo: A01, A02, A03, ...): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomecidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área total: ");
    scanf("%f", &area1);

    printf("PIB total: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // FIM DO CADASTRO DA CARTA 1 //


    // VARIAVEIS DA CARTA 2 //
    char estado2;
    char codigo2[4];
    char nomecidade2[22];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // COMEÇO DO CADASTRO DA CARTA 2 //

    printf("\n------------- Cadastro da Carta 2 -----------------\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (exemplo: B01, B02, B03, ...): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomecidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área total: ");
    scanf("%f", &area2);

    printf("PIB total: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // FIM DO CADASTRO DA CARTA 2 //


    // EXIBINDO OS RESULTADOS //
    printf("\n=============================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d pontos\n", pontosturisticos1);

    printf("\n=============================\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d pontos\n", pontosturisticos2);

    return 0;
}
