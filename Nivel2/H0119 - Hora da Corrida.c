/*     @autor: Kiwiabacaxi
    @data: 27/08/2022
    @instituição: IFTM - Instituto Federal do Triângulo Mineiro  
*/

/*
Vinicius leva muito a sério seu condicionamento físico e, diariamente às 6h da manhã, chova ou faça sol, no verão e no inverno, ele corre no entorno de uma lagoa. Ao longo da pista de corrida existem N placas igualmente espaçadas. Para não desanimar do exercício, Vinicius conta o número de placas pelas quais ele já passou e verifica se ele já correu pelo menos 10%, pelo menos 20%, : : : , pelo menos 90% do percurso.

Vamos ajudar o Vinicius, calculando para ele o número de placas que ele precisa contar para ter completado pelo menos 10%, 20%, : : : , 90% da corrida, dados o número de voltas que ele pretende correr e o número total de placas ao longo da pista.

Por exemplo, suponhamos que Vinicius queira dar 3 voltas e o número de placas seja 17. Então, para garantir ter corrido pelo menos 30% do percurso, ele precisa contar 16 placas. Para garantir pelo menos 60%, ele precisa contar 31 placas.

Entrada
A entrada consiste de uma única linha que contém dois inteiros, V e N (1 ≤ V;N ≤ 104), onde V é o número pretendido de voltas e N é o número de placas na pista.

Saída
Seu programa deve produzir uma única linha com nove inteiros representando os números de placas que devem ser contadas para garantir o cumprimento, respectivamente, de 10%, 20%, : : : , 90% da meta.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//(3*17)*0.3 = 15.3 = 16 que é o número de placas que devem ser contadas para garantir o cumprimento de 30% do percurso

int main (){
    int v, n, i, j, k, l, m;
    float placa10, placa20, placa30, placa40, placa50, placa60, placa70, placa80, placa90;

    // leitura dos dados
    scanf("%d %d", &v, &n); // v = numero de voltas, n = numero de placas

    // calculo dos valores de placa10, placa20, placa30, placa40, placa50, placa60, placa70, placa80, placa90
    // placa10 = 10% do percurso
    placa10 = (v*n)*0.1;
    // placa20 = 20% do percurso
    placa20 = (v*n)*0.2;
    // placa30 = 30% do percurso
    placa30 = (v*n)*0.3;
    // placa40 = 40% do percurso
    placa40 = (v*n)*0.4;
    // placa50 = 50% do percurso
    placa50 = (v*n)*0.5;
    // placa60 = 60% do percurso
    placa60 = (v*n)*0.6;
    // placa70 = 70% do percurso
    placa70 = (v*n)*0.7;
    // placa80 = 80% do percurso
    placa80 = (v*n)*0.8;
    // placa90 = 90% do percurso
    placa90 = (v*n)*0.9;
    
    // impressao dos valores de placas, arredondando para cima
    printf("%d ", (int)ceil(placa10));
    printf("%d ", (int)ceil(placa20));
    printf("%d ", (int)ceil(placa30));
    printf("%d ", (int)ceil(placa40));
    printf("%d ", (int)ceil(placa50));
    printf("%d ", (int)ceil(placa60));
    printf("%d ", (int)ceil(placa70));
    printf("%d ", (int)ceil(placa80));
    printf("%d\n", (int)ceil(placa90));






    return 0;
}