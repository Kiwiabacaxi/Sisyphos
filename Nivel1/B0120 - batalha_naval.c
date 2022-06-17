#include <stdlib.h>
#include <stdio.h>

/* 
Batalha Naval é um clássico jogo de estratégia para dois jogadores. 
Cada jogador posiciona seus navios num grid 10 × 10, e cada rodada do jogo consiste em adivinhar as posições dos navios do adversário. 
Existem muitas variações das regras, mas tais regras são irrelevantes para esse problema. 
Estamos interessados num problema mais básico: Dada a lista dos navios e suas posições, você deve determinar se o posicionamento inicial é válido.
As linhas e colunas do tabuleiro são numeradas de 1 a 10, e os navios são posicionados na horizontal ou na vertical,
ocupando uma sequência contígua de quadrados do tabuleiro. Para esse problema, um posicionamento é válido se:
*nenhuma posição é ocupada por mais de um navio e;
*todos os navios estão inteiramente contidos no tabuleiro.

Entrada
A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100), o número de navios. Cada uma das próximas N linhas
contém quatro inteiros D, L, R e C com D ∈ {0, 1}, 1 ≤ L ≤ 5 e 1 ≤ R, C ≤ 10 descrevendo um navio. Se D = 0 então o navio
está alinhado horizontalmente, e ocupa as posições (R, C). . .(R, C + L − 1). Do contrário, o navio está alinhado verticalmente,
e ocupa as posições (R, C). . .(R + L − 1, C).

Saída
Imprima uma única linha contendo um único caractere. 
Se o posicionamento inicial dos navios for válido, então imprima o caractere maiúsculo ‘Y’; do contrário, imprima o caractere maiúsculo ‘N’.

Exemplo
Entrada:
3
0 5 1 1
1 5 2 2
0 1 3 3

Saída:
Y

*/

int main (){

    int i, j, n, d, l, r, c, flag_posicionamento_valido = 1;
    int guarda_d, guarda_l, guarda_r, guarda_c;
    int tabuleiro[10][10];

    // numero n de navios
    scanf("%d", &n);

    // preenche o tabuleiro com zeros
/*     for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    } */ // completamente inutil se usar NULL, exceto para representar o tabuleiro de forma gráfica

    // leitura dos navios
    // verifica se o navio esta alinhado horizontalmente e se esta contido no tabuleiro e se nao esta ocupado por mais de um navio
    // se esta na horizontal R é constante e C varia r |(R, C) ate (R, C + L - 1)|
    // se esta na vertical C é constante e R varia r |(R, C) ate (R + L - 1, C)|
    // l = tamanho do navio, r = row, c = column
    for(i = 0; i < n; i++){
        scanf("%d %d %d %d", &d, &l, &r, &c);
        c -= 1;
        r -= 1;

        if(d == 0 && c <= 10 - l){
            for(j = c; j <= c + l - 1; j++){
                if(tabuleiro[r][j] == 0){
                    tabuleiro[r][j] = 1;

                }
                else{
                    flag_posicionamento_valido = 0;

                }
            }
        }
        else{
            for(j = r; j <= r + l - 1; j++){
                if(tabuleiro[j][c] == 0){
                    tabuleiro[j][c] = 1;

                }
                else{
                    flag_posicionamento_valido = 0;
                    
                }
            }
        }
    }
    
    // verifica se todos os navios estao contidos no tabuleiro
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(tabuleiro[i][j] == 0){
                flag_posicionamento_valido = 1;
            }
        }
    }

    // imprime o tabuleiro
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    // imprime o resultado
    if(flag_posicionamento_valido == 1){
        printf("Y");
    }
    else{
        printf("N");
    }


    return 0;
}
