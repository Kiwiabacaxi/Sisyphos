#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* 
Num sorteio que distribui prêmios, um participante inicialmente sorteia um inteiro N e depois N valores. 
O número de pontos do participante é o tamanho da maior sequência de valores consecutivos iguais. 
Por exemplo, suponhamos que um participante sorteia N = 11 e, nesta ordem, os valores.
30,30,30,30,40,40,40,40,40,30,30
Então, o participante ganha 5 pontos, correspondentes aos 5 valores 40 consecutivos. 
Note que o participante sorteou 6 valores iguais a 30, mas nem todos são consecutivos.
Sua tarefa é ajudar a organização do evento, escrevendo um programa que determina o número de pontos de um participante.

Entrada
A primeira linha da entrada contém um inteiro N , o número de valores sorteados. A segunda linha contém N valores, v1,v2 ... vn.
, na ordem de sorteio, separados por um espaço em branco.

Saída
Seu programa deve imprimir apenas uma linha, contendo apenas um inteiro, indicando o número de pontos do participante. 
*/

int main (){
    int i, j, n;
    int num;
    int guarda_num;

    scanf("%d", &n);

    int vetor[n];

    scanf("%d", &vetor[0]);

    for(i = 0; i < n-1; i++){
        scanf("%d", &vetor[i]);


    }

    // verifica a maior sequencia de valores consecutivos iguais
    int maior_sequencia = 0;
    int sequencia = 0;
    for(i = 0; i < n; i++){
        if(vetor[i] == vetor[i+1]){
            sequencia++;
        }
        else{
            if(sequencia > maior_sequencia){
                maior_sequencia = sequencia;
            }
            sequencia = 0;
        }
    }

    if(sequencia > maior_sequencia){
        maior_sequencia = sequencia;
    }

    printf("%d\n", maior_sequencia + 1);


    return 0;
}