#include <stdio.h>

int main (){

    int temperatura = 15;
    int resultado;

    /*
    temperatura > 30 ? 
    printf("Está Calor\n") : printf("Está Frio!");
    */

    /*
    if (temperatura >= 30)
    {
        printf("Está Calor!\n");
    } else
    {
        printf("Está frio!\n");
    }
    */
    resultado = temperatura > 30 ? 1 : 0 ;

    if (resultado == 1)
    {
        printf("Está Calor");
    } else {
        printf("Está frio");
    }
    





}