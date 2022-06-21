#include <stdio.h>
#include <stdlib.h>

/* 
Imprima os termos de uma sequência, do menor para o maior.

Entrada
A primeira linha da entrada contém um inteiro NN, representando o número de elementos da sequência.

A segunda linha contém NN inteiros: os NN números da sequência

Saída
Seu programa deve gerar uma única linha: os NN números da entrada, em ordem crescente. 
*/

int main (){
    int n, i;

    scanf("%d", &n);

    // Cria um vetor com o número de elementos da sequência, utilizando pontos de ponteiro.
    int *seq = (int *) malloc(n * sizeof(int)); // *seq é um ponteiro para um vetor de inteiros. // sizeof(int) é o tamanho de um inteiro.
                                                // malloc() é uma função que aloca memória para um ponteiro.
                                                //malloc(n * sizeof(int)) é uma função que aloca memória para um vetor de inteiros, com n elementos.

    for(i = 0; i < n; i++){
        scanf("%d", &seq[i]);
    }

    for(i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(seq[i] > seq[j]){
                int aux = seq[i];
                seq[i] = seq[j];
                seq[j] = aux;
            }
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ", seq[i]);
    }
    printf("\n");


    return 0;
}