#include <stdlib.h>
#include <stdio.h>

/* Faça um programa para ler um inteiro x. Imprima a mensagem "positivo" se o valor for positivo. Imprima a mensagem "negativo" caso o valor seja negativo. Imprima a mensagem "nulo" se o valor for zero.

Entrada
A entrada consiste de uma linha contendo um inteiro X.

Saída
A saída consiste de uma linha contendo uma mensagem. */

int main (){

    int x;

    scanf("%d", &x);

    if(x == 0){
        printf("nulo");
    }
    else if(x > 0){
        printf("positivo");
    }
    else{
        printf("negativo");
    }


    return 0;
}