#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* O Reino dos Emparelhamentos ´e governado por um generoso Comendador. A fama do Comendador
e de suas grandes qualidades ´e conhecida por todos, inclusive em reinos vizinhos. Uma de suas
mais famosas qualidades ´e seu bom humor, que ´e nutrido diariamente por um bobo da corte, eleito
anualmente no Grande Concurso de Com´edia (GCC) do reino. O bobo da corte ajuda a aliviar as
tens˜oes das diversas reuni˜oes pol´ıticas que o cargo exige, alegrando n˜ao s´o o Comendador como tamb´em
todo o reino.
O jovem Carlos ´e um grande comediante cujo sonho ´e se tornar bobo da corte na pr´oxima temporada. Ele passou os ´ultimos meses anotando piadas e trocadilhos dos mais diversos tipos, muitos
dos quais sobre sua pr´opria (diminuta) estatura. Chegou a ´epoca da elei¸c˜ao do bobo da corte, e um
total de N candidatos se inscreveram. Cada um dos candidatos ter´a cinco minutos para se apresentar
perante uma plat´eia. Ap´os as apresenta¸c˜oes, cada cidad˜ao do Reino dos Emparelhamentos poder´a
votar em um dos candidatos, e o mais votado ser´a o novo bobo da corte. Caso haja empate entre um
ou mais candidatos, aquele que tiver feito a inscri¸c˜ao primeiro ´e eleito. Sabendo disso, o jovem Carlos
passou noites na frente do escrit´orio eleitoral e garantiu que sua inscri¸c˜ao fosse a primeira a ser feita.
Ap´os a vota¸c˜ao, resta apenas apurar os resultados. A urna eletrˆonica gera um relat´orio com N
inteiros, correspondentes ao n´umero de votos de cada candidato, ordenados pela ordem de inscri¸c˜ao.
Sua miss˜ao ´e determinar se o jovem Carlos foi eleito ou não
Entrada
A primeira linha da entrada contém um inteiro N, satisfazendo 2 ≤ N ≤ 104 . As N linhas seguintes conterão N inteiros positivos v 1 , . . . , vN , um
em cada linha, correspondentes ao número de votos recebido por cada um dos candidatos, em ordem de inscrição. Como a população do Reino
dos Emparelhamentos é de 100.000 pessoas, o número total de votos não será superior a este valor 100000.
Saída
Seu programa deve produzir uma única linha contendo o caractere ‘S’ caso o jovem Carlos seja eleito bobo da corte, ou o caractere ‘N’ caso contrário.
Exemplo 1
Entrada:
3
1000
1000
1000

Saída:
S
carlos e sempre o primeiro candidato

. */

int main(){

    int i, j, n, votos[10000], maior, maior_votos, bobo_da_corte;
    int flag_carlos_ganhou = 1;
    int guarda_carlos=0;

    // numero n de linhas 
    scanf("%d", &n);

    // zerar a matriz
    for(i = 0; i < 10000; i++){
        votos[i] = 0;
    }

    // prencher a matriz
    for(i = 0; i < n; i++){
        scanf("%d", &votos[i]);
    }

    // comparar os votos
    guarda_carlos = votos[0];
    for(i = 0; i < n; i++){
        if(votos[i] > guarda_carlos){
            flag_carlos_ganhou = 0;
        }
    }


    // imprimir o bobo da corte
    if(flag_carlos_ganhou == 1){
        printf("S\n");
    }else{
        printf("N\n");
    }


    return 0;
}