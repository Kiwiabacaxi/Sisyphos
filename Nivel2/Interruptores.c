/*     @autor: Kiwiabacaxi
    @data: 27/08/2022
    @instituição: IFTM - Instituto Federal do Triângulo Mineiro  
*/

/*
I0118 - Interruptores
No painel de controle de um grande anfiteatro existem N interruptores, numerados de 1 a N, que controlam as M lâmpadas do local, numeradas de 1 a M. Note que o número de interruptores e lâmpadas não é necessariamente o mesmo e isso acontece porque cada interruptor está associado a um conjunto de lâmpadas e não apenas a uma lâmpada. Quando um interruptor é acionado, o estado de cada uma das lâmpadas associadas a ele é invertido. Quer dizer, aquelas apagadas acendem e as acesas se apagam.

Algumas lâmpadas estão acesas inicialmente e o zelador do anfiteatro precisa apagar todas as lâmpadas. Ele começou tentando acionar interruptores aleatoriamente mas, como não estava conseguindo apagar todas as lâmpadas ao mesmo tempo, decidiu seguir uma seguinte estratégia fixa. Ele vai acionar os interruptores na sequência 1, 2, 3, . . . , N, 1, 2, 3, . . . ou seja, toda vez após acionar o interruptor de número N, ele recomeça a sequência a partir do interruptor 1. Ele pretende acionar interruptores, seguindo essa estratégia, até que todas as lâmpadas estejam apagadas ao mesmo tempo (momento em que ele para de acionar os interruptores). Será que essa estratégia vai funcionar?

Neste problema, dadas as lâmpadas acesas inicialmente e dados os conjuntos de lâmpadas que estão associados a cada interruptor, seu programa deve computar o número de vezes que o zelador vai acionar os interruptores. Caso a estratégia do zelador nunca apague todas as lâmpadas ao mesmo tempo, seu programa deve imprimir −1.

Entrada
A primeira linha contém dois inteiros N e M (1 ≤ N, M ≤ 1000) representando, respectivamente, o número de interruptores e o número de lâmpadas. A segunda linha contém um inteiro L (1 ≤ L ≤ M) seguido por L inteiros distintos Xi (1 ≤ Xi ≤ M), representando as lâmpadas acesas inicialmente. Cada uma das N linhas seguintes contém um inteiro Ki (1 ≤ Ki ≤ M) seguido por Ki inteiros distintos Yi (1 ≤ Yi ≤ M), representando as lâmpadas associadas ao interruptor i (1 ≤ i ≤ N).

Saída
Se programa deve produzir uma única linha contendo um inteiro representando o número de vezes que o zelador vai acionar os interruptores, seguindo a estratégia descrita, até todas as lâmpadas estarem apagadas ao mesmo tempo. Caso isso nunca vá acontecer, imprima −1.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int N, M; // Número de interruptores e lâmpadas
    int L; // Número de lâmpadas acesas inicialmente
    int i, j; // Contador
    int *lampadas; // Vetor de lâmpadas acesas inicialmente
    int *interruptores; // Vetor de interruptores
    
    scanf("%d %d", &N, &M);
    scanf("%d", &L);
    lampadas = (int*) malloc(L * sizeof(int));
    for(i = 0; i < L; i++){
        scanf("%d", &lampadas[i]);
    }
    interruptores = (int*) malloc(N * sizeof(int));
    for(i = 0; i < N; i++){
        scanf("%d", &interruptores[i]);
    }

    int acionados = 0;
    int acionar = 0;

    while(L > 0){
        acionados = 0;
        for(i = 0; i < N; i++){
            for(j = 0; j < interruptores[i]; j++){
                if(lampadas[j] == 1){
                    acionados++;
                }
            }
        }
        if(acionados == 0){
            break;
        }
        acionar = 0;
        for(i = 0; i < N; i++){
            for(j = 0; j < interruptores[i]; j++){
                if(lampadas[j] == 1){
                    lampadas[j] = 0;
                    acionar++;
                }
            }
        }
        L -= acionar;
    }
    if(L == 0){
        printf("%d\n", acionados);
    }else{
        printf("-1\n");
    }
    
    free(lampadas);
    free(interruptores);



    return 0;
}