#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int opcao;
    int numerosecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numerosecreto = rand() %10;
        printf("Digite um numero de 0 a 9:\n");
        scanf("%d", &palpite);
        printf("numero secreto %d\n", numerosecreto);
        
        if (numerosecreto == palpite)
        {
            printf("Parabens, voce acertou!");
        } else {
            printf("Voce errou! :(");
        }        
        break;
    case 2:
        printf("A explicação das regras");
        break;
    case 3:
        printf("Saindo do Jogo");
        break;
    default:
        printf("Opção Inválida");
        break;
    }
}