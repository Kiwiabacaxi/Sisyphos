#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
Faça um programa para ler dois valores inteiros A e B e imprima o resultado da expressão (A-B).

Entrada
A entrada consiste de duas linhas. A primeira linha contém o inteiro A e a segunda linha contém o inteiro B.

Saída
A saída consiste de uma linha contendo o resultado da expressão (A-B). 
*/

int main (){
    int a, b;

    scanf("%d %d", &a ,&b);

    printf("%d\n", (a - b));

    return 0;
}