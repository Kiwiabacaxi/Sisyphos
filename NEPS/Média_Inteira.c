#include <stdio.h>
#include <stdlib.h>

/* 
Média Inteira
Faça um programa para ler dois valores inteiros A e B e imprima a média inteira dos valores A e B.

Entrada
A entrada consiste de duas linhas. A primeira linha contém o inteiro A e a segunda linha contém o inteiro B.

Saída
A saída consiste de uma linha contendo a média inteira dos valores A e B. 
*/

int main (){

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", (a + b) / 2);

    return 0;
}