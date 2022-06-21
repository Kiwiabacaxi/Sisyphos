/*  
    @autor: Kiwiabacaxi
    @data: 20/06/2022
    @instituição: IFTM - Instituto Federal do Triângulo Mineiro 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* 
https://neps.academy/br/exercise/47
Gabriel inventou um código para representar números naturais, usando uma sequência de zeros e uns. 
Funciona assim, o número natural é representado pela quantidade de vezes que o padrão "100" aparece na sequência.

Por exemplo, na sequência 11101001010011110, o padrão aparece duas vezes e na sequência 11101010111110111010101 ele não aparece nenhuma vez. 
Você deve ajudar Gabriel implementar um programa que, dada a sequência de zeros e uns, calcule quantas vezes o padrão "100" aparece nela.

Entrada
A primeira linha da entrada contém um inteiro N, o tamanho da sequência. 
A segunda linha contém a sequência de N zeros e uns, separados por espaço em branco.

Saída
Seu programa deve imprimir um inteiro, quantas vezes o padrão "100" aparece na sequência. 
*/

int main (){

    int n, i, total = 0;

    scanf("%d", &n);

    // criar um vetor de char
    char s[n*2];

    for(int i = 0; i < n*2; i++){
        scanf("%c", &s[i]);
    }

    //gets(s);



/*  // nao consigo concatenar os ' ' entre os '0' e '1' ...
    for(i = 0; i < n; i++){
        if(s[i] == '1' && s[i+1] == '0' && s[i+2] == '0'){
            total++;
            i += 2;
        }
    }
 */

    for(i = 0; i < n*2; i++){
        if(s[i] == '1' && s[i+2] == '0' && s[i+4] == '0'){
            total++;
            i += 2;
        }
    }

    printf("%d\n", total);


    return 0;
}