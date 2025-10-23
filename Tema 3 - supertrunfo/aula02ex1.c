#include <stdio.h>

int main (){

    int opcao;
    float nota1, nota2, media;

    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1 - Calcular a média \n");
    printf("2 - Determinar Status \n");
    printf("3 - Sair \n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Calcular a média \n");
        printf("Digite a sua primeira nota: \n");
        scanf("%f", &nota1);
        printf("Digite a sua segunda nota: \n");
        scanf("%f", &nota2);
        printf("A sua média é: ");

        if ((nota1 >=0 && nota1 <=10) && (nota2 >= 0 && nota2 <=10)) 
        {
            media = (nota1 + nota2) / 2;
            printf("%.2f", media);
        } else {
            printf("Entrada com valores errados");
        }
        break;
        
        case 2:
        printf("Determinar status\n");
        printf("Entrar com a média: \n");
        scanf("%f", &media);
        
        if (media >=7)
        {
            printf("Aprovado\n");
        } else if (media >=5) 
        {
            printf("Recuperação");
        } else {
            printf("Reprovado");
        }
        
        break;

        case 3:
        printf("Saindo do programa");
        break;

    default:
        break;
    }






}