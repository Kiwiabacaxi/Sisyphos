#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* 
Seu professor lhe passou um exercício onde você deve encontrar a raiz quadrada de vários números, 
como você não quer perder tempo com essa tarefa tosca e sem sentido você resolveu fazer um programa que dados 
N números ele retorna a raiz quadrada de cada um desses números

Entrada
A primeira linha de entrada contém um número inteiro NN representando a quantidade de números dos quais você terá que responder qual a raiz quadrada. 
A segunda linha da entrada contém os NN números separados por um espaço em branco.

Saída
Seu programa deve imprimir NN linhas, cada uma contendo a raiz do número na ordem, cada raiz com precisão de 4 casas decimais. 
*/

int main (){
    double n;
    scanf("%lf", &n);

    for (int i = 0; i < n; i++){
        double num;
        scanf("%lf", &num);
        printf("%.4lf\n", sqrt(num));
    }

    return 0;
}