/*  
    @autor: Kiwiabacaxi
    @data: 20/06/2022
    @instituição: IFTM - Instituto Federal do Triângulo Mineiro 
*/

#include <stdlib.h>
#include <stdio.h>

/*
https://neps.academy/br/exercise/216

Dado um número inteiro X, encontre todos os divisores de X.

Entrada
A entrada consiste de apenas uma linha contendo o número X.

Saída
A saída do seu programa deve conter apenas uma linha com os divisores de X separados por um espaço em branco.
O divisores devem ser impressos em ordem crescente.
*/


int main (){

    int x, i, total = 0;

    // ler o valor do x
    scanf("%d", &x);

    // contar quantos divisores de x existem
    for(i = 1; i <= x; i++){
        if(x % i == 0){ // se o resto da divisão for zero, então o i é um divisor de x
            printf("%d ", i);

        }

    }

    return 0;
}