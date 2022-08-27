/*  
    @autor: Kiwiabacaxi
    @data: 26/08/2022
    @instituição: IFTM - Instituto Federal do Triângulo Mineiro 
*/

/* 
J0115 - Jogo de Estratégia
Um jogo de estratégia, com J jogadores, é jogado em volta de uma mesa. O primeiro a jogar é o jogador 1, o segundo a jogar é o jogador 2 e assim por diante. Uma vez completada uma rodada, novamente o jogador 1 faz sua jogada e a ordem dos jogadores se repete novamente. A cada jogada, um jogador garante uma certa quantidade de Pontos de Vitória. A pontuação de cada jogador consiste na soma dos Pontos de Vitória de cada uma das suas jogadas.

Dado o número de jogadores, o número de rodadas e uma lista representando os Pontos de Vitória na ordem em que foram obtidos, você deve determinar qual é o jogador vencedor. Caso mais de um jogador obtenha a pontuação máxima, o jogador com pontuação máxima que tiver jogado por último é o vencedor.

Entrada
A entrada consiste de duas linhas. A primeira linha contém dois inteiros J e R, o número de jogadores e de rodadas respectivamente (1 ≤ J, R ≤ 500). A segunda linha contém J × R inteiros, correspondentes aos Pontos de Vitória em cada uma das jogadas feitas, na ordem em que aconteceram. Os Pontos de Vitória obtidos em cada jogada serão sempre inteiros entre 0 e 100, inclusive.

Saída
Seu programa deve produzir uma única linha, contendo o inteiro correspondente ao jogador vencedor. 
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int J; //Numero de jogadores
    int R; //Numero de rodadas
    int i, j, k;
    int pontos[500]; 
    int vencedor, pontuacao, maior, maior_pontos;

    scanf("%d %d", &J, &R);

    // ler o vetor e atribuir a cada jogador os pontos de vitória
    for(i = 0; i < J; i++){
        for(j = 0; j < R; j++){
            scanf("%d", &pontos[i]);
        }
    }

    // determinar o vencedor
    maior = 0;
    maior_pontos = 0;
    for(i = 0; i < J; i++){ // percorrer o vetor de pontos de vitória
        pontuacao = 0;
        for(j = 0; j < R; j++){ // percorrer o vetor de pontos de vitória
            pontuacao += pontos[i]; // somar os pontos de vitória de cada jogador
        }
        if(pontuacao > maior_pontos){ // verificar se a pontuação é maior que a maior pontuação
            maior_pontos = pontuacao; // atribuir a maior pontuação
            maior = i; // atribuir o jogador com a maior pontuação
        }
    }
    printf("%d\n", maior + 1); // imprimir o jogador vencedor + 1 para que o jogador 1 seja o 1 e não o 0...

    return 0;
}