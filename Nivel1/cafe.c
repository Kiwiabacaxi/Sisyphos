#include <stdio.h>
#include <stdlib.h>

/* 
O novo predio da Sociedade Brasileira de Computacao (SBC) possui 3 andares. Em determinadas
epocas do ano, os funcionarios da SBC bebem muito cafe. Por conta disso, a presidencia da SBC decidiu
presentear os funcionarios com uma nova maquina de expresso. Esta maquina deve ser instalada em
um dos 3 andares, mas a instalaçao deve ser feita de forma que as pessoas nao percam muito tempo
subindo e descendo escadas.
Cada funcionario da SBC bebe 1 cafe expresso por dia. Ele precisa ir do andar onde trabalha ate
o andar onde esta a maquina e voltar para seu posto de trabalho. Todo funcionario leva 1 minuto
para subir ou descer um andar. Como a SBC se importa muito com a efciencia, ela quer posicionar
a maquina de forma a minimizar o tempo total gasto subindo e descendo escadas.
Sua tarefa e ajudar a diretoria a posicionar a maquina de forma a minimizar o tempo total gasto
pelos funcionarios subindo e descendo escadas.

Entrada
A entrada consiste em 3 numeros, A1;A2;A3 (0 <A1;A2;A3 < 1000), um por linha, onde Ai
representa o numero de pessoas que trabalham no i-esimo andar.

Saida
Seu programa deve imprimir uma unica linha, contendo o numero total de minutos a serem gastos
com o melhor posicionamento possivel da maquina.
*/


int main (){

    int andar1, andar2, andar3;
    int funcionarios1, funcionarios2, funcionarios3;
    int total;

    scanf("%d %d %d", &funcionarios1, &funcionarios2, &funcionarios3);

    // verifica o tempo total gasto pelos funcionarios subindo e descendo escadas
    andar1 = funcionarios2*2 + funcionarios3*4;
    //printf("andar 1: %d\n", andar1);
    andar2 = funcionarios1*2 + funcionarios3*2;
    //printf("andar 2: %d\n", andar2);
    andar3 = funcionarios1*4 + funcionarios2*2;
    //printf("andar 3: %d\n", andar3);

    // calcula o tempo total gasto pelos funcionarios subindo e descendo escadas
    //total = andar1 + andar2 + andar3;

    //printf("total : %d\n", total);

    // escolhe o lugar com o menor tempo total gasto
    if(andar1 < andar2 && andar1 < andar3){ // se o andar 1 for menor que o 2 e o 3
        printf("%d\n", andar1);

    }
    else if(andar2 < andar1 && andar2 < andar3){ // se o andar 2 for menor que o 1 e o 3
        printf("%d\n", andar2);

    }
    else if(andar3 < andar1 && andar3 < andar2){ // se o andar 3 for menor que o 1 e o 2
        printf("%d\n", andar3);

    }
    else if((andar1 == andar2 && andar1 < andar3)){ // se os dois andares forem iguais para o 1 e o 2
        printf("%d\n", andar1);
    }
    else if ((andar1 == andar3 && andar1 < andar2)){ // se os dois andares forem iguais para o 1 e o 3
        printf("%d\n", andar1);
    }
    else if ((andar2 == andar3 && andar2 < andar1)){ // se os dois andares forem iguais para o 2 e o 3
        printf("%d\n", andar2);
    }
    else{ // se os dois andares forem iguais para o 1, 2 e 3
        printf("%d\n", andar1);
    }

    
    

    return 0;
}