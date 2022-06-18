#include <stdio.h>
#include <stdlib.h>

/*
Chama-se de quadrado mágico um arranjo, na forma de um quadrado, de N×N números inteiros tal que todas as linhas, colunas e diagonais têm a mesma soma.
Por exemplo, o quadrado abaixo

é um quadrado mágico de soma 15, pois todas as linhas (2+7+6 = 15, 9+5+1 = 15 e 4+3+8 = 15),
colunas (2 + 9 + 4 = 15, 7 + 5 + 3 = 15 e 6 + 1 + 8 = 15) e diagonais (2 + 5 + 8 = 15 e 6 + 5 + 4 = 15) têm a mesma soma (15).
Escreva um programa que, dado um quadrado, determine se ele é magico ou não e qual a soma dele (caso seja mágico).

Entrada
A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão.
A primeira linha da entrada de cada caso de teste contém um inteiro N. As N linhas seguintes contêm N inteiros cada,
separados por exatamente um espaço em branco. Os inteiros dentro do quadrado são todos maiores que 0 (zero) e menores que 1.000.

Saída
Seu programa deve imprimir, na saída padrão, uma única linha com um inteiro representando a soma do quadrado mágico ou -1 caso o quadrado não seja mágico. 
*/

int main (){

    int n;
    int i, j;
    int soma_linha=0;
    int soma_coluna=0;
    int soma_diagonal=0;
    int soma_diagonal_secundaria=0;

    scanf("%d", &n);

    int quadrado[10][10];

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &quadrado[i][j]);
        }
    }

    // verifica se 2 <= n <=10
    

    // soma da linha
    for(i = 0; i < n; i++){
        soma_linha = 0;
        for(j = 0; j < n; j++){
            soma_linha += quadrado[i][j];
        }
    }

    // soma da coluna
    for(i = 0; i < n; i++){
        soma_coluna = 0;
        for(j = 0; j < n; j++){
            soma_coluna += quadrado[j][i];
        }
    }

    // soma da diagonal principal
    for(i = 0; i < n; i++){
        soma_diagonal += quadrado[i][i];
    }

    // soma da diagonal secundaria
    for(i = 0; i < n; i++){
        soma_diagonal_secundaria += quadrado[i][n-i-1];
    }

    if(soma_linha == soma_coluna && soma_linha == soma_diagonal && soma_linha == soma_diagonal_secundaria){
        printf("%d\n", soma_linha);
    }
    else{
        printf("-1\n");
    }

    return 0;
}