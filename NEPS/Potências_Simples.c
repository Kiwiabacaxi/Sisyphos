#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* 
Enquanto você estava estudando no Neps Academy você viu um problema chamado "Potências Simples" e resolveu lê-lo, 
o problema pedia para você ler dois números reais e imprimisse um número elevado ao outro. Faça um programa que resolva o problema.

Entrada
A entrada é composta por apenas uma linha que contem dois números reais, x e y.

Saída
Seu programa deve imprimir um único número x^y com 4 casas decimais de precisão.
*/

int main (){
    double x, y;

    scanf("%lf %lf", &x, &y);
    
    printf("%.4lf\n", pow(x, y));


    return 0;
}