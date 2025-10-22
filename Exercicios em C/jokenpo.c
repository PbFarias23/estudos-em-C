#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int jogador1, computador;
    srand(time(0));

    printf("**** Pedra, Papel e Tesoura ****\n");
    printf("Escolha uma opcao:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &jogador1);

    computador = rand() % 3 + 1;

    switch (jogador1)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
        break;
    case 3:
        printf("Jogador: Tesoura - ");
        break;
    default:
        printf("opcao invalida");
        break;
    }

    switch (computador)
    {
    case 1:
        printf("Computador: Pedra - ");
        break;
    case 2:
        printf("Computador: Papel - ");
        break;
    case 3:
        printf("Computador: Tesoura - ");
        break;            
    }

    if (computador == jogador1)
    {
        printf("** Empate **");
    } else if ((jogador1 == 1) && (computador == 3) || 
               (jogador1 == 2) && (computador == 1) ||
               (jogador1 == 3) && (computador == 2)) {
                printf("** Voce GANHOU! **:)\n");
               }
    else { 
        printf("** Voce PERDEU! ** :(");
    }
    
    

}