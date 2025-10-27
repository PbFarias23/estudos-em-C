#include <stdio.h>

int main (){

    // --- Variáveis ---
    char nome1[50] = "Rio de Janeiro";
    char nome2[50] = "São Paulo";
    int populacao1 = 1610000;
    int populacao2 = 2150000;
    float area1 = 1200;
    float area2 = 248219;
    float pib1 = 10150000;
    float pib2 = 30130000;
    int pontos1 = 120;
    int pontos2 = 37;
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
    float soma1, soma2;

    printf("$$$ --- BATALHA DOS ESTADOS: DESAFIO FINAL --- $$$\n\n");
    printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n\n", nome2);

    // --- Escolha do primeiro atributo ---
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("\nDigite a opção: ");
    scanf("%d", &opcao1);

    // --- Menu dinâmico para o segundo atributo ---
    printf("\nAgora escolha o SEGUNDO atributo (diferente do primeiro):\n");
    switch (opcao1) {
        case 1:
            printf("2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
            break;
        case 2:
            printf("1 - População\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
            break;
        case 3:
            printf("1 - População\n2 - Área\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
            break;
        case 4:
            printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade Demográfica\n");
            break;
        case 5:
            printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n");
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }
    printf("\nDigite a opção: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1) {
        printf("Você escolheu o mesmo atributo duas vezes! Tente novamente.\n");
        return 0;
    }

    // --- Atribuição de valores do primeiro atributo ---
    switch (opcao1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontos1; valor1_carta2 = pontos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        default: printf("Erro!\n"); return 0;
    }

    // --- Atribuição de valores do segundo atributo ---
    switch (opcao2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontos1; valor2_carta2 = pontos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        default: printf("Erro!\n"); return 0;
    }

    // --- Comparação dos dois atributos ---
    printf("\n=== COMPARAÇÃO ===\n");

    // Primeiro atributo
    printf("\nAtributo 1:\n");
    printf("%s: %.2f\n", nome1, valor1_carta1);
    printf("%s: %.2f\n", nome2, valor1_carta2);

    // Segundo atributo
    printf("\nAtributo 2:\n");
    printf("%s: %.2f\n", nome1, valor2_carta1);
    printf("%s: %.2f\n", nome2, valor2_carta2);

    // Regra: Densidade Demográfica é invertida
    float pontos_carta1 = 0, pontos_carta2 = 0;

    pontos_carta1 += (opcao1 == 5) ? (valor1_carta1 < valor1_carta2) : (valor1_carta1 > valor1_carta2);
    pontos_carta2 += (opcao1 == 5) ? (valor1_carta2 < valor1_carta1) : (valor1_carta2 > valor1_carta1);
    pontos_carta1 += (opcao2 == 5) ? (valor2_carta1 < valor2_carta2) : (valor2_carta1 > valor2_carta2);
    pontos_carta2 += (opcao2 == 5) ? (valor2_carta2 < valor2_carta1) : (valor2_carta2 > valor2_carta1);

    // --- Soma dos atributos ---
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos:\n");
    printf("%s = %.2f\n", nome1, soma1);
    printf("%s = %.2f\n", nome2, soma2);

    // --- Resultado final ---
    printf("\n=== RESULTADO FINAL ===\n");
    if (soma1 > soma2) {
        printf("🏆 %s venceu!\n", nome1);
    } else if (soma2 > soma1) {
        printf("🏆 %s venceu!\n", nome2);
    } else {
        printf("⚖️ Empate!\n");
    }

    return 0;
}
