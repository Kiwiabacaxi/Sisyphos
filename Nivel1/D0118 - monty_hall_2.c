#include <stdio.h>
#include <stdlib.h>

/*
Monty Hall Problem
Entrada
A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 104), indicando o número de jogos na simulação. 
Cada uma das N linhas a seguir contém um inteiro: 1, 2 ou 3; representando o número da porta que contém o carro que o jogo.

Saída
Seu programa deve produzir uma linha única, contendo uma representação do número de vezes que o jogador apresenta ou essa simulação, 
supondo que toda a porta que depois ou revela um número que abre uma das portas que não foram escolhidas como primeiras portas.
*/

int main (){

    int n, i, porta, ganhou=0;

    scanf("%d", &n); // le o numero de casos

    for(i=0; i<n; i++){  // para cada caso.
        scanf("%d", &porta); // le a porta que o jogador escolheu. 1, 2 ou 3

        if(porta!=1){ // se a porta escolhida nao for a porta 1
            ganhou++; // ganhou mais um caso
        }
    }

    printf("%d\n", ganhou); // imprime o numero de casos que o jogador ganhou.

    return 0;
}