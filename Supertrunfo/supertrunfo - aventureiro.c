#include <stdio.h>

int main (){

    char nome1[50] = "Rio de Janeiro";
    char nome2[50] = "São Paulo";
    int populacao1 = 161000000;
    int populacao2 = 215000000;
    float area1 = 1200;
    float area2 = 248219;
    float pib1 = 10150000;
    float pib2 = 30130000;
    int pontos1 = 120;
    int pontos2 = 37;
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    int opcao;

    //menu
    printf("Batalha dos Estados");

     printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("\nDigite sua opção: ");
    scanf("%d", &opcao);

    printf("\n=== Comparação de Cartas ===\n");

    // === Estrutura switch para o menu ===
    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", nome1, pib1);
            printf("%s: %.2f bilhões\n", nome2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nome1, pontos1);
            printf("%s: %d pontos\n", nome2, pontos2);

            if (pontos1 > pontos2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pontos2 > pontos1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);

            // regra invertida: menor densidade vence
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 5.\n");
            break;
    }

    return 0;
}
