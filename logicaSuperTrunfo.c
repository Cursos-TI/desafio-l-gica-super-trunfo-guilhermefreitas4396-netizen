#include <stdio.h>

int main() {
    // Card 1
    char estado[3];
    char codigocarta[10];
    char nomecidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int quantpontoturistico;

    // Card 2
    char estado2[3];
    char codigocarta2[10];
    char nomecidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int quantpontoturistico2;

    // Cálculos
    float densidade1, densidade2;
    float percapta1, percapta2;
    float superpoder1, superpoder2;

    int opcao;

    printf("************************* CADASTRO CIDADES *************************\n");

    // ===== CIDADE 01 =====
    printf("********** CIDADE 01 ********\n");

    printf("SIGLA DO ESTADO: ");
    scanf("%2s", estado);

    printf("CODIGO DA CARTA: ");
    scanf("%9s", codigocarta);

    printf("NOME DA CIDADE: ");
    scanf("%49s", nomecidade);

    printf("POPULACAO: ");
    scanf("%lu", &populacao);

    printf("AREA TOTAL: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("PONTOS TURISTICOS: ");
    scanf("%d", &quantpontoturistico);

    // ===== CIDADE 02 =====
    printf("\n********** CIDADE 02 ********\n");

    printf("SIGLA DO ESTADO: ");
    scanf("%2s", estado2);

    printf("CODIGO DA CARTA: ");
    scanf("%9s", codigocarta2);

    printf("NOME DA CIDADE: ");
    scanf("%49s", nomecidade2);

    printf("POPULACAO: ");
    scanf("%lu", &populacao2);

    printf("AREA TOTAL: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("PONTOS TURISTICOS: ");
    scanf("%d", &quantpontoturistico2);

    // ===== CÁLCULOS =====
    densidade1 = (float)populacao / area;
    densidade2 = (float)populacao2 / area2;

    percapta1 = pib / (float)populacao;
    percapta2 = pib2 / (float)populacao2;

    superpoder1 = (float)populacao + area + pib + quantpontoturistico +
                  percapta1 + (1.0f / densidade1);

    superpoder2 = (float)populacao2 + area2 + pib2 + quantpontoturistico2 +
                  percapta2 + (1.0f / densidade2);

    // ===== MENU =====
    printf("\n===== MENU DE COMPARACAO =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("\nComparacao entre %s e %s\n", nomecidade, nomecidade2);

    // ===== COMPARAÇÃO =====
    switch (opcao) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %lu\n", nomecidade, populacao);
            printf("%s: %lu\n", nomecidade2, populacao2);

            if (populacao > populacao2)
                printf("Vencedor: %s\n", nomecidade);
            else if (populacao < populacao2)
                printf("Vencedor: %s\n", nomecidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", nomecidade, area);
            printf("%s: %.2f\n", nomecidade2, area2);

            if (area > area2)
                printf("Vencedor: %s\n", nomecidade);
            else if (area < area2)
                printf("Vencedor: %s\n", nomecidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", nomecidade, pib);
            printf("%s: %.2f\n", nomecidade2, pib2);

            if (pib > pib2)
                printf("Vencedor: %s\n", nomecidade);
            else if (pib < pib2)
                printf("Vencedor: %s\n", nomecidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", nomecidade, quantpontoturistico);
            printf("%s: %d\n", nomecidade2, quantpontoturistico2);

            if (quantpontoturistico > quantpontoturistico2)
                printf("Vencedor: %s\n", nomecidade);
            else if (quantpontoturistico < quantpontoturistico2)
                printf("Vencedor: %s\n", nomecidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f\n", nomecidade, densidade1);
            printf("%s: %.2f\n", nomecidade2, densidade2);

            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", nomecidade);
            else if (densidade1 > densidade2)
                printf("Vencedor: %s\n", nomecidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
