#include <stdio.h>

int main (){

    int dia;

    printf("Digite o valor do dia!\n");
    scanf("%d", &dia);

    if (dia == 1)
    {
        printf("Domingo\n");
    }   else if (dia == 2){
            printf("Segunda-Feira");
    }   else if (dia == 3){
            printf("Terca-Feira");
    }   else if ( dia == 4){
            printf("Quarta-Feira");
    }   else if (dia == 5){
            printf("Quinta-Feira");
    }   else if (dia == 6){
            printf("Sexta-Feira");
    } 
    else 
        printf("Sabado");
    }