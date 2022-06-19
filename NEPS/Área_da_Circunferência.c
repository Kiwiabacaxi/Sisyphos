#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* 
Bino quer calcular a área de uma circunferência e pediu sua ajuda para isso.

Faça um programa para ler um valor real R representando o raio da circunferência que Bino que calcular a área. 
Imprima a área da circunferência utilizando como pi o valor 3.1416.

Entrada
A entrada consiste de uma linha contendo o valor do raio da circunferência.

Saída
A saída consiste de uma única linha contendo a área da circunferência com duas casas de precisão. 
*/

#define PI 3.1416

int main (){
    double r;

    scanf("%lf", &r);

    printf("%.2f\n", PI * r * r);

    return 0;
}