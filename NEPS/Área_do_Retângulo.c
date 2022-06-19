#include <stdlib.h>
#include <stdio.h>

/* 
Faça um programa para ler dois valores inteiros A e B e imprima a área de um retângulo que tenha lados A e B.

Entrada
A entrada consiste de duas linhas. A primeira linha contém o inteiro A e a segunda linha contém o inteiro B.

Saída
A saída consiste de uma linha contendo a área de um retângulo que tenha lados A e B. 
*/

int main (){
    int a, b;

    scanf("%d %d", &a ,&b);

    printf("%d\n", a * b);


    return 0;
}