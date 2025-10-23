#include <stdio.h>

int main(){

    int num;

    printf("Entre com um inteiro:\n");
    scanf("%d", &num);

    num = num + num%3;

    printf("num = %d\n", num);
}