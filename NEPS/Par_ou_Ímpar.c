#include <stdio.h>
#include <stdlib.h>

/* 
Bino e Cino gostam muito de brincar de par ou ímpar. Bino sempre escolhe par e Cino sempre escolhe ímpar.

Faça um programa para automatizar o resultado o jogo de par ou ímpar. Seu programa deve ler a quantidade de dedos que cada um utilizou e imprimir o nome do ganhador.

Entrada
A entrada consiste de duas linhas. A primeira linha contém a quantidade de dedos que Bino utilizou. A segunda linha contém a quantidade de dedos que Cino utilizou.

Saída
A saída consiste de uma linha. Caso Bino vença o jogo, imprima "Bino". Caso Cino vença o jogo, imprima "Cino".
*/

int main (){

    int bino;
    int cino;
    int soma;

    scanf("%d %d", &bino, &cino);

    soma = bino + cino;
    
    if(soma % 2 == 0){
        printf("Bino");
    }
    else{
        printf("Cino");
    }

    return 0;
}