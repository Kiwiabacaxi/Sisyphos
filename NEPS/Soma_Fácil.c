#include <stdlib.h>
#include <stdio.h>

/* 
Soma Fácil
Faça um programa para ler dois valores inteiros A e B e imprima o resultado da expressão (A+B)(A+B).

Entrada
A entrada consiste de duas linhas. A primeira linha contém o inteiro A e a segunda linha contém o inteiro B.

Saída
A saída consiste de uma linha contendo o resultado da expressão (A+B).

Restrições
Os inteiros fornecidos não terão valor absoluto maior que 1000. 
*/

int main (){
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", (a + b));
    

    return 0;
}