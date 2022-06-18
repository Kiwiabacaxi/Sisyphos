#include <stdio.h>
#include <stdlib.h>

/*
Você está de volta em seu hotel na Tailândia depois de um dia de mergulhos. O seu quarto tem duas lâmpadas. Vamos chamá-las de A e B. 
No hotel há dois interruptores, que chamaremos de I1 e I2. Ao apertar I1, a lâmpada A troca de estado, ou seja, acende se estiver apagada e apaga se estiver acesa. Se apertar I2, ambas as lâmpadas A e B trocam de estado. As lâmpadas inicialmente estão ambas apagadas. Seu amigo resolveu bolar um desafio para você. Ele irá apertar os interruptores em uma certa sequência, e gostaria que você respondesse o estado final das lâmpadas A e B.

Entrada
A primeira linha contém um número N que representa quantas vezes seu amigo irá apertar algum interruptor. 
Na linha seguinte seguirão X números, que pode ser 1, se o interruptor I1 foi apertado, ou 2, se o interruptor I2 foi apertado.

Saída
Seu programa deve imprimir dois valores, em linhas separadas. 
Na primeira linha, imprima 1 se a lâmpada A estiver acesa no final das operações e 0 caso contrário. 
Na segunda linha, imprima 1 se a lâmpada B estiver acesa no final das operações e 0 caso contrário.
*/

int main (){

    int N, i, A, B;
    int x;
    scanf("%d", &N);
    A = 0;
    B = 0;
    for(i = 0; i < N; i++){
        scanf("%d", &x);
        if(x == 1){
            A = 1 - A;
        }
        else{
            A = 1 - A;
            B = 1 - B;
        }
    }
    printf("%d\n", A);
    printf("%d\n", B);
    
    return 0;
}
