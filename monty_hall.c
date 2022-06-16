#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Monty Hall Problem
Entrada
A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 104), indicando o número de jogos na simulação. 
Cada uma das N linhas a seguir contém um inteiro: 1, 2 ou 3; representando o número da porta que contém o carro que o jogo.

Saída
Seu programa deve produzir uma linha única, contendo uma representação do número de vezes que o jogador apresenta ou essa simulação, 
supondo que toda a porta que depois ou revela um número que abre uma das portas que não foram escolhidas como primeiras portas.
*/


int main()
{
    int n, x, i, ganhou=0;

    scanf("%i", &n);

    for(i=0; i<n; i++){
        scanf("%i", &x);

        if(x!=1){
           ganhou=ganhou+1;
        }
    }

    printf("%i\n", ganhou);



    return 0;
}

/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, porta, numCasos,i;

    scanf("%d", &numCasos);
    cont = 0;

    for(i = 0; i < numCasos; i++){
        scanf("%d", &porta);

        if(porta != 1){
            cont += 1;
        }
    }

    printf("%d\n", cont);

    return 0;

} */