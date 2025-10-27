#include <stdio.h>

// Requisitos Funcionais: Constantes para facilitar a escrita
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

// Requisitos Não Funcionais: Documentação e Manutenibilidade (nomes claros)

int main() {
    printf("======================================\n");
    printf("♟️ Desafio MateCheck - Nível Novato ♟️\n");
    printf("======================================\n\n");

    // ----------------------------------------------------
    // 1. Movimentação do Bispo (5 casas na diagonal superior direita)
    //    Utilizando a estrutura de repetição 'for'.
    //    A movimentação na diagonal é simulada combinando direções básicas.
    // ----------------------------------------------------
    printf("--- 1. Movimentação do Bispo (Usando 'for') ---\n");
    printf("  Distância: %d casas\n", MOVIMENTO_BISPO);

    // Inicializa o contador de casas
    int casas_bispo; 
    
    // Loop 'for': executa o movimento para o número de casas definido
    for (casas_bispo = 1; casas_bispo <= MOVIMENTO_BISPO; casas_bispo++) {
        // Requisito: Para o Bispo, usar printf para a direção combinada
        // A diagonal superior direita é uma combinação de "Cima" e "Direita"
        printf("  Casa %d: ", casas_bispo);
        printf("Cima e Direita\n"); 
    }
    printf("\n");

    // ----------------------------------------------------
    // 2. Movimentação da Torre (5 casas para a direita)
    //    Utilizando a estrutura de repetição 'while'.
    // ----------------------------------------------------
    printf("--- 2. Movimentação da Torre (Usando 'while') ---\n");
    printf("  Distância: %d casas\n", MOVIMENTO_TORRE);

    // Inicializa a variável de controle para o 'while'
    int casas_torre = 1; 

    // Loop 'while': Continua enquanto o número de casas for menor ou igual ao limite
    while (casas_torre <= MOVIMENTO_TORRE) {
        printf("  Casa %d: ", casas_torre);
        printf("Direita\n"); 

        // Atualização da variável de controle (incremento)
        casas_torre++; 
    }
    printf("\n");

    // ----------------------------------------------------
    // 3. Movimentação da Rainha (8 casas para a esquerda)
    //    Utilizando a estrutura de repetição 'do-while'.
    // ----------------------------------------------------
    printf("--- 3. Movimentação da Rainha (Usando 'do-while') ---\n");
    printf("  Distância: %d casas\n", MOVIMENTO_RAINHA);

    // Inicializa a variável de controle para o 'do-while'
    int casas_rainha = 1; 

    // Loop 'do-while': Garante que o bloco de código seja executado pelo menos uma vez, 
    // mesmo que a condição fosse falsa (neste caso, é sempre verdadeira até o limite).
    do {
        printf("  Casa %d: ", casas_rainha);
        printf("Esquerda\n"); 

        // Atualização da variável de controle (incremento)
        casas_rainha++;
    } while (casas_rainha <= MOVIMENTO_RAINHA); // Condição de parada
    printf("\n");

    printf("======================================\n");
    printf("  ✅ Procedimentos de Movimentação Concluídos\n");
    printf("======================================\n");

    return 0; // Indica que o programa terminou com sucesso
}