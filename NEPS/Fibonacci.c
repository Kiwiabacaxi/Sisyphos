#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* 
Uma famosa sequência matemática é a sequência de Fibonacci, está sequência é definida por:

fib(0)=fib(1)=1
fib(n)=fib(n−1)+fib(n−2)

Escreva um programa que dado N retorna o n-ésimo número de Fibonacci.

Entrada
A entrada contem um único número N.

Saída
O valor do n-ésimo número de Fibonacci. 
*/

int main (){
    int n;
    int fib[100];
    int soma = 0;

    scanf("%d", &n);
    
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n+1; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    printf("%d\n", fib[n+1]);


    return 0;
}