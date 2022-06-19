#include <stdio.h>
#include <stdlib.h>

/* 
Faça um programa que leia dois números reais A e B digitados pelo teclado e imprima a divisão de A por B.
Entrada
A entrada consiste de dois números reais A e B um em cada linha.
Saída
A saída do seu programa deve ser um número real S, representando a divisão de A por B com precisão de 2 casas decimais. 
*/

int main (){
    int A, B;

    scanf("%d %d", &A, &B);

    printf("%.2f\n", (float)A / B);


    return 0;
}