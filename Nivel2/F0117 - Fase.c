/*  
    @autor: Kiwiabacaxi
    @data: 24/06/2022
    @instituição: IFTM - Instituto Federal do Triângulo Mineiro 
*/

#include <stdlib.h>
#include <stdio.h>


/* 
https://neps.academy/br/exercise/34

Fase
Em diversas competições acadêmicas, como a Olimpíada Brasileira de Informática (OBI), uma certa quantidade de competidores se classifica de uma fase para a fase seguinte, garantindo uma das vagas disponíveis. Entretanto, normalmente essa quantidade é variável, pois dada uma certa quantidade mínima de classificados, é frequente que haja empate na última vaga de classificação. Neste caso, é comum que todos os competidores empatados na última colocação se classifiquem.

Sua tarefa é ajuda a calcular o número de competidores classificados para a próxima fase. Você receberá uma lista de pontuações obtidas pelos competidores e o número mínimo de vagas para a fase seguinte e você deve decidir quantos competidores de fato vão se classificar.

Entrada
A primeira linha da entrada contém um número inteiro N, 1 ≤ N ≤ 1000 , representando o número de competidores. A segunda linha conterá um inteiro K, 1 ≤ K ≤ N, indicando o número mínimo de competidores que devem se classificar para a próxima fase. Em seguida, N linhas conterão, cada uma um número entre 1 e 1000, inclusive, correspondente à pontuação de um competidor. 
*/

int main(){

    int n, k, i, j, pontos, maior, menor, contador;
    int vet[1000];

    // Entrada
    scanf("%d", &n);
    scanf("%d", &k);

    for(i = 0; i < n; i++){
        scanf("%d", &pontos);
        vet[i] = pontos;
    }

    // ordenação
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(vet[i] < vet[j]){
                maior = vet[i];
                vet[i] = vet[j];
                vet[j] = maior;
            }
        }
    }

    // contar os competidores com a pontuação mais alta
    contador = 0;
    for(i = 0; i < n; i++){
        // ver a pontuação mais alta ate o numero k
        if(vet[i] >= vet[k - 1]){
            contador++;
        }

    }

    printf("%d\n", contador);

    


    return 0;
}