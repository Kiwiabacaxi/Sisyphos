#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/* 
Todos devem conhecer o jogo Zerinho ou Um (em algumas regiões também conhecido como Dois ou Um), utilizado para determinar um ganhador entre três ou mais jogadores. Para quem não conhece, o jogo funciona da seguinte maneira. Cada jogador escolhe um valor entre zero ou um; a um comando (geralmente um dos competidores anuncia em voz alta “Zerinho ou... Um!”), todos os participantes mostram o valor escolhido, utilizando uma das mãos: se o valor escolhido foi um, o competidor mostra o dedo indicador estendido; se o valor escolhido foi zero, mostra a mão com todos os dedos fechados.

O ganhador é aquele que tiver escolhido um valor diferente de todos os outros; se não há um jogador com valor diferente de todos os outros (por exemplo todos os jogadores escolhem zero, ou um grupo de jogadores escolhe zero e outro grupo escolhe um), não há ganhador.

Alice, Beto e Clara são grandes amigos e jogam Zerinho a toda hora: para determinar quem vai comprar a pipoca durante a sessão de cinema, quem vai entrar na piscina primeiro, etc. Jogam tanto que resolveram fazem um plugin no Facebook para jogar Zerinho. Como não sabem programar, dividiram as tarefas entre amigos que sabem, inclusive você.

Dados os três valores escolhidos por Alice, Beto e Clara, cada valor zero ou um, escreva um programa que determina se há um ganhador, e nesse caso determina quem é o ganhador.

Entrada
A entrada é composta de uma única linha, que contém três inteiros AA, BB e CC, indicando respectivamente os valores escolhidos por Alice, Beto e Clara.

Saída
Seu programa deve produzir uma única linha, contendo um único caractere. Se o vencedor é Alice o
caractere deve ser 'A', se o vencedor é Beto o caractere deve ser 'B', se o vencedor é Clara o caractere deve ser 'C' e se não há vencedor o caractere deve ser '*' (asterisco).
*/

int main (){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a == 0 && b == 0 && c == 0){
        printf("*");
    }
    else if(a == 1 && b == 1 && c == 1){
        printf("*");
    }
    else if(a == 0 && b == 0 && c == 1){
        printf("C");
    }
    else if(a == 0 && b == 1 && c == 0){
        printf("B");
    }
    else if(a == 1 && b == 0 && c == 0){
        printf("A");
    }
    else if(a == 1 && b == 1 && c == 0){
        printf("C");
    }
    else if(a == 1 && b == 0 && c == 1){
        printf("B");
    }
    else if(a == 0 && b == 1 && c == 1){
        printf("A");
    }
    else if(a == 1 && b == 1 && c == 1){
        printf("*");
    }

    return 0;
}