#include <stdio.h>
#include <stdlib.h>

/* 
Faça um programa que leia dois números inteiros digitados pelo teclado e imprima a soma deles.

Entrada
A entrada consiste de dois números inteiros X e Y, um em cada linha.

Saída
A saída do seu programa deve ser um inteiro S, representando a soma de X e Y. 
*/

int main (){

    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d", x + y);


    return 0;
}