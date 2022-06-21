/*  
    @autor: Kiwiabacaxi
    @data: 20/06/2022
    @instituição: IFTM - Instituto Federal do Triângulo Mineiro 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* 
V_2
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
    int temp = 0;

    scanf("%d", &n);

    // criar um vetor de char
    char s[n*2];

    for(int i = 0; i < n*2; i++){
        scanf("%c", &s[i]);
    }

    // pegar o tamanho da string
    int len = strlen(s);

    printf("\nString :%s\n", s);
    
    
    // ler o vetor e concatenar os ' ' entre os '0' e '1' ...
/*     for(i = 0; i < len; i++){
        if(s[i] == ' '){   // se for ' '
            temp = s[i+1]; // pegar o proximo caracter
            s[i] = s[i+1]; // substituir o ' ' pelo proximo caracter
            len--;         // diminuir o tamanho da string

        }
        
    } */

    
    for(i = 0; i < len; i++){
        if(s[i] == ' '){
            for(int j = i; j < len; j++){ // percorrer a string e substituir o ' ' pelo proximo caracter
                s[j] = s[j+1];
            }

            len--; // depois de substituir o ' ' pelo proximo caracter, diminuir o tamanho da string
        }

    }

    //printf("\nString concatenada :%s\n", s);

    // ler o vetor e contar quantas vezes o padrão "100" aparece na sequência
    for(i = 0; i < len; i++){
        if(s[i] == '1' && s[i+1] == '0' && s[i+2] == '0'){
            total++;
            i += 2;
        }
    }


    printf("%d\n", total);


    return 0;
}