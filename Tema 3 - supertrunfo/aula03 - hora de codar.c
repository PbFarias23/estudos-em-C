#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //gerar número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 +1; // número entre 1 e 100
    
    //início
    printf("BEM VINDO\n");
    printf("MAIOR, MENOR OU IGUAL\n\n");
    printf("Escolha um número e o tipo de comparação \n");
    printf("M - Maior\n");
    printf("N - Menor\n");
    printf("I - Igual\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &tipoComparacao);

    printf("Digite seu número (1 a 100): ");
    scanf(" %d", &numeroJogador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        printf("Voce escolheu a opcao maior!\n");
        break;
    
    case 'N':
    case 'n':
        resultado = numeroJogador < numeroComputador ? 1: 0;
        printf("Voce escolheu a opcao menor\n");
        break;
    
    case 'I':
    case 'i':
        resultado = numeroJogador == numeroComputador ? 1: 0;
        printf("Voce escolheu a opcao igual\n");
        break;
    default:
        printf("Opcao Inválida\n");
        break;
    }
    
   
    
    printf("O seu numero é: %d e o do Computador é: %d\n", numeroJogador, numeroComputador);
    
    if (resultado == 1)
    {
        printf("Você VENCEU!!\n");
    } else 
    {
         printf("Voce Perdeu\n");
    }



    







}