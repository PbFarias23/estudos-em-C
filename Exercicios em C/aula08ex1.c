#include <stdio.h>

int main(){

    int opcao;
    

    printf("Menu Principal\n");
    printf("1. Iniciar\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Execucao do Jogo\n");
        break;
    case 2:
        printf("As regras do jogo sao\n");
        break;
    case 3:
        printf("Saindo do Jogo");
        break;
    default:
        printf("Opção Inválida");
        break;
    }
}