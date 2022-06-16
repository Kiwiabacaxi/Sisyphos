#include <stdio.h>
#include <stdlib.h>

/* 
Entrada
A entrada consiste de uma ´unica linha que contém dois inteiros, A (1 ≤ A ≤ 13) e B (1 ≤ B ≤ 13) indicando os valores das duas primeiras cartas recebidas.
Saída
Seu programa deve produzir uma única linha com um inteiro representando o valor da carta que maximiza a probabilidade de o jogador ganhar a partida. 
*/

int main()
{
    int a,b;

    scanf("%d %d", &a, &b); // leitura dos valores das cartas

    while(a != 0 && b != 0){ // Enquanto não for 0 0
        if(a > b){           // Se A > B
            printf("%d\n", a);

        }
        else{                // Se A < B || A == B
            printf("%d\n", b);

        }

        scanf("%d %d", &a, &b); // Lê novos valores
    }

    return 0;
}