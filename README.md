# Sisyphos
Exercicios de maratonas/olimpiadas

/* A Copa do Mundo FIFA de 2022 está chegando.O país inteiro se prepara para torcer para a equipe canarinho conquistar mais um título.

Na Copa do Mundo, depois de uma fase de grupos, dezesseis equipes disputam a Fase Final, composta de quinze jogos eliminatórios. A figura abaixo mostra a tabela de jogos da Fase Final:

 

Na tabela de jogos, as dezesseis equipes finalistas são representadas por letras maiúsculas (de A a P), e os jogos são numerados de 1 a 15. Por exemplo, o jogo 3 é entre as equipes identificadas por E e F; o vencedor desse jogo enfrentará o vencedor do jogo 4, e o perdedor será eliminado. A equipe que vencer os quatro jogos da Fase Final será a campeã (por exemplo, para a equipe K ser campeã ela deve vencer os jogos 6, 11, 14 e 15.

Faça um programa que simule a Fase Final da Copa do Mundo.

Para facilitar seu desenvolvimento, siga os passos a seguir:

 
Crie um registro (estrutura) chamada time, que contenha os seguintes campos:
Crie um registro (estrutura) chamada partida, que contenha os seguintes campos:
Crie uma função que receba um vetor que represente os times do campeonato e o tamanho do vetor. Este vetor será inicializado com todos os campos do tipo de dado int iguais ao valor zero (0). 
Crie uma função que receba um vetor que represente as partidas do campeonato e o tamanho do vetor. Este vetor será inicializado com todos os campos do tipo de dado int iguais ao valor zero (0).
Crie uma função que receba um vetor que represente os times do campeonato e o tamanho do vetor. Esta funçãous deverá receber os dados do time e armazenar os valores no vetor.
Crie uma função receba um vetor que represente as partidas do campeonato e o tamanho do vetor. Esta função deverá receber os dados da partida e armazenar os valores no vetor. Ao receber os dados da partida, você deverá atualizar os dados do time. Por exemplo, após a partida de código 1, você deverá localizar os times A e B no vetor de times e atualizar os campos: qtde_partidas, gols_a_favor, gols_contra, saldo_gols.
Crie uma função  que receba um vetor que represente os times do campeonato e o tamanho do vetor. Esta função deverá retornar o time com maior saldo de gols. 
Crie uma função que receba um vetor que represente os times do campeonato e o tamanho do vetor. Esta função deverá retornar o time com pior saldo de gols.
Crie uma função que receba dois vetores: um que represente as partidas e outro que represente os times e seus respectivos tamanhos; e um continente. Esta função deverá retornar o time melhor classificado do continente, ou seja, quem disputou mais partidas na Fase Final. Caso haja empate, os critérios de desempate são: saldo de gols; e gols a favor.
8
A
BRASIL
1
B
FRANCA
2
C 
JAPAO
4
D 
SENEGAL
3
E
AUSTRALIA
5
F
ARGENTINA
1
G
ALEMANHA
2
H
INGLATERRA
2
7
1
A
B
3
1
2
C
D
2
3
3
E
F
7
1
4
G
H
0
1
5
A
D
2
3
6
E
H
3
1
7
A
E
1
2

 

char letra;  //letra que representa o time. A letra vai de A a P

char nome[30];   //nome do time (país). Por exemplo: BRASIL.

int  continente;   //Continente do país. 1: AMERICA; 2: EUROPA; 3: AFRICA; 4: ASIA; 5: OCEANIA.

int qtde_partidas;   //quantidade de partidas realizadas na Fase Final. De 1 a 4.

int gols_a_favor;   //todos os gols realizados pela equipe na Fase Final.

int gols_contra;    //todos os gols que a equipe sofreu na Fase Final.

int saldo_gols;    // gols a favor – gols contra na Fase Final.

 

int código;   //código da partida. Por exemplo: 3, significa a partida entre E e F nas oitavas de final.

char time1;  //letra do time 1. Por exemplo E.

char time2;  //letra do time 2. Por exemplo F.

int gols_time1;   //a quantidade de gols que o time 1 realizou na partida.

int gols_time2;   //a quantidade de gols que o time 2 realizou na partida.

 

void InicializaTimes(time VetorTimes[], int tamanho);

 

void InicializaPartidas(partida VetorPartidas[], int tamanho);

 

void ReceberTimes(time VetorTimes[], int tamanho);

Entrada: 

Inicialmente é informado o número n de times (entre 2 e 40), seguido das informações de cada time: letra que o representa, nome (até 30 caracteres), numero do continente do time(1: AMERICA, 2: EUROPA, 3: AFRICA, 4: ASIA, 5: OCEANIA)

void ReceberTimes(time VetorTimes[], int tamanho);

Exemplo de entrada:

2

A

BRASIL

1

B

FRANCA

2

 void ReceberPartidas(partida VetorPartidas[], int tam_part,time VetorTimes[], int tam_times);

Entrada:

O numero m de partidas seguido dos dados de m partidas, a saber: codigo da partida (1 e 40), letra do time 1, letra do time 2, numero de gols do time 1, numero de gols do time 2

Exemplo de entrada:

2

1

A

B

3

1

2

C

D

2

3

 

 Ao receber os dados da partida, você deverá atualizar os dados do time. Por exemplo, após a partida de código 1, você deverá localizar os times A e B no vetor de times e atualizar os campos: qtde_partidas, gols_a_favor, gols_contra, saldo_gols.

time MelhorSaldoGols(time VetorTimes[], int tamanho);

 

time PiorSaldoGols(time VetorTimes[], int tamanho);

 

time MelhorClassificadoContinente(partida VetorPartidas[], int tam_part, time VetorTimes[], int tam_times, int continente);

 

O programa deverá: inicializar o vetor de times e o vetor de partidas; receber os times; ler as partidas.

O programa deverá exibir time com melhor saldo de gols, time com pior saldo de gols, time melhor classificado de cada continente (sempre haverá o times de todos continentes)

Exemplo

A

B

1:A

2:B

3:C

4:D

5:E

 

Exemplo completo de entrada:

8

A

BRASIL

1

B

FRANCA

2

C 

JAPAO

4

D 

SENEGAL

3

E

AUSTRALIA

5

F

ARGENTINA

1

G

ALEMANHA

2

H

INGLATERRA

2

7

1

A

B

3

1

2

C

D

2

3

3

E

F

7

1

4

G

H

0

1

5

A

D

2

3

6

E

H

3

1

7

D

E

1

2

 

Exemplo completo de saída

E

F

1:A

2:H

3:D

4:C

5:E*/


#include <stdlib.h>
#include <stdio.h>

#define MAX 40

struct time {
    char letra;
    char nome[30];
    int continente;
    int qtde_partidas;
    int gols_a_favor;
    int gols_contra;
    int saldo_gols;
};

struct partida {
    int codigo;
    char time1;
    char time2;
    int gols_time1;
    int gols_time2;
};

typedef struct time Time;
typedef struct partida Partida;

void InicializaTimes(Time VetorTimes[], int tamanho);
void InicializaPartidas(Partida VetorPartidas[], int tamanho);
void ReceberTimes(Time VetorTimes[], int tamanho);
void ReceberPartidas(Partida VetorPartidas[], int tam_part,Time VetorTimes[], int tam_times);
Time MelhorSaldoGols(Time VetorTimes[], int tamanho);
Time PiorSaldoGols(Time VetorTimes[], int tamanho);
Time MelhorClassificadoContinente(Partida VetorPartidas[], int tam_part, Time VetorTimes[], int tam_times, int continente);

// funções
// Crie uma função que receba um vetor que represente os times do campeonato e o tamanho do vetor. Este vetor será inicializado com todos os campos do tipo de dado int iguais ao valor zero (0).
void InicializaTimes(Time VetorTimes[], int tamanho){
    int i;
    for(i=0;i<tamanho;i++){
        //VetorTimes[i].letra = ' ';
        //VetorTimes[i].nome[0] = ' ';
        VetorTimes[i].continente = 0;
        VetorTimes[i].qtde_partidas = 0;
        VetorTimes[i].gols_a_favor = 0;
        VetorTimes[i].gols_contra = 0;
        VetorTimes[i].saldo_gols = 0;
    }
}
// Crie uma função que receba um vetor que represente as partidas do campeonato e o tamanho do vetor. Este vetor será inicializado com todos os campos do tipo de dado int iguais ao valor zero (0).
void InicializaPartidas(Partida VetorPartidas[], int tamanho){
    int i;
    for(i=0;i<tamanho;i++){
        VetorPartidas[i].codigo = 0;
        // inicializar char com espaço em branco
        //VetorPartidas[i].time1 = ' ';
        //VetorPartidas[i].time2 = ' ';
        VetorPartidas[i].gols_time1 = 0;
        VetorPartidas[i].gols_time2 = 0;
    }
}

// Crie uma função que receba um vetor que represente os times do campeonato e o tamanho do vetor. Esta função deverá receber do usuário os dados do time e armazenar os valores no vetor.
void ReceberTimes(Time VetorTimes[], int tamanho){
    int i;
    for (i = 0; i < tamanho; i++) {
        //printf("Digite a letra do time: ");
        scanf(" %c", &VetorTimes[i].letra);
        getchar();
        //printf("Digite o nome do time: ");
        scanf(" %[^\n]s", VetorTimes[i].nome);
        getchar();
        //printf("Digite o continente do time: ");
        scanf(" %d", &VetorTimes[i].continente);


    }
    //printf("\nSaindo do receber times");
}

void ReceberPartidas(Partida VetorPartidas[], int tam_part,Time VetorTimes[], int tam_times){
    int i, j, k;
    for(i=0;i<tam_part;i++){
        scanf("%d %c %c %d %d", &VetorPartidas[i].codigo, &VetorPartidas[i].time1, &VetorPartidas[i].time2, &VetorPartidas[i].gols_time1, &VetorPartidas[i].gols_time2);
        getchar();
        for(j=0;j<tam_times;j++){
            if(VetorPartidas[i].time1 == VetorTimes[j].letra){
                VetorTimes[j].qtde_partidas++;
                VetorTimes[j].gols_a_favor += VetorPartidas[i].gols_time1;
                VetorTimes[j].gols_contra += VetorPartidas[i].gols_time2;
                VetorTimes[j].saldo_gols = VetorTimes[j].gols_a_favor - VetorTimes[j].gols_contra;
            }
            if(VetorPartidas[i].time2 == VetorTimes[j].letra){
                VetorTimes[j].qtde_partidas++;
                VetorTimes[j].gols_a_favor += VetorPartidas[i].gols_time2;
                VetorTimes[j].gols_contra += VetorPartidas[i].gols_time1;
                VetorTimes[j].saldo_gols = VetorTimes[j].gols_a_favor - VetorTimes[j].gols_contra;
            }
        }
    }
}

Time MelhorSaldoGols(Time VetorTimes[], int tamanho){
    int i, maior = 0;
    Time melhor;
    for(i=0;i<tamanho;i++){
        if(VetorTimes[i].saldo_gols > maior){
            maior = VetorTimes[i].saldo_gols;
            melhor = VetorTimes[i];
        }
    }
    return melhor;
}

Time PiorSaldoGols(Time VetorTimes[], int tamanho){
    int i, menor = 0;
    Time pior;
    for(i=0;i<tamanho;i++){
        if(VetorTimes[i].saldo_gols < menor){
            menor = VetorTimes[i].saldo_gols;
            pior = VetorTimes[i];
        }
    }
    return pior;
}

// Crie uma função que receba um vetor que represente as partidas do campeonato, o tamanho do vetor, um vetor que represente os times do campeonato e o tamanho do vetor. Esta função deverá retornar o time que possui o melhor saldo de gols no continente informado.
Time MelhorClassificadoContinente(Partida VetorPartidas[], int tam_part, Time VetorTimes[], int tam_times, int continente){
    int i, qnt_partidas = 0, saldo_gols = 0, gols_favor = 0;
    Time melhor;
    for(i=0;i<tam_times;i++){
        if(VetorTimes[i].continente == continente){
            qnt_partidas += VetorTimes[i].qtde_partidas;
            saldo_gols += VetorTimes[i].saldo_gols;
            gols_favor += VetorTimes[i].gols_a_favor;
        }
        else if(VetorTimes[i].qtde_partidas > qnt_partidas){
            qnt_partidas = VetorTimes[i].qtde_partidas;
            saldo_gols = VetorTimes[i].saldo_gols;
            gols_favor = VetorTimes[i].gols_a_favor;
            melhor = VetorTimes[i];
        }
        else if(VetorTimes[i].qtde_partidas == qnt_partidas){
            if(VetorTimes[i].saldo_gols > saldo_gols){
                saldo_gols = VetorTimes[i].saldo_gols;
                gols_favor = VetorTimes[i].gols_a_favor;
                melhor = VetorTimes[i];
            }
            else if(VetorTimes[i].saldo_gols == saldo_gols){
                if(VetorTimes[i].gols_a_favor > gols_favor){
                    gols_favor = VetorTimes[i].gols_a_favor;
                    melhor = VetorTimes[i];
                }
            }
        }

    }

    return melhor;
}
/* Time MelhorClassificadoContinente(Partida VetorPartidas[], int tam_part, Time VetorTimes[], int tam_times, int continente){
    int i, j, maior = 0;
    Time melhor;
    for(i=0;i<tam_times;i++){
        if(VetorTimes[i].continente == continente){
            if(VetorTimes[i].saldo_gols > maior){
                maior = VetorTimes[i].saldo_gols;
                melhor = VetorTimes[i];
            }
        }
    }
    return melhor;
} */
/* Time MelhorClassificadoContinente(Partida VetorPartidas[], int tam_part, Time VetorTimes[], int tam_times, int continente){
    int i, j, k, maior = 0;
    Time melhor;
    for(i=0;i<tam_part;i++){
        for(j=0;j<tam_times;j++){
            if(VetorPartidas[i].time1 == VetorTimes[j].letra && VetorTimes[j].continente == continente){
                for(k=0;k<tam_times;k++){
                    if(VetorPartidas[i].time2 == VetorTimes[k].letra && VetorTimes[k].continente == continente){
                        if(VetorPartidas[i].gols_time1 > VetorPartidas[i].gols_time2){
                            if(VetorTimes[j].qtde_partidas > maior){
                                maior = VetorTimes[j].qtde_partidas;
                                melhor = VetorTimes[j];
                            }
                        }
                        else if(VetorPartidas[i].gols_time1 < VetorPartidas[i].gols_time2){
                            if(VetorTimes[k].qtde_partidas > maior){
                                maior = VetorTimes[k].qtde_partidas;
                                melhor = VetorTimes[k];
                            }
                        }
                    }
                }
            }
        }
    }
    return melhor;
} */

/* int main(){
    int n_times, n_partidas, continente;
    Time VetorTimes[100];
    Partida VetorPartidas[100];
    Time melhor, pior, melhor_continente;
    scanf("%d %d", &n_times, &n_partidas);
    getchar();
    InicializaTimes(VetorTimes, n_times);
    InicializaPartidas(VetorPartidas, n_partidas);
    ReceberTimes(VetorTimes, n_times);
    ReceberPartidas(VetorPartidas, n_partidas, VetorTimes, n_times);
    melhor = MelhorSaldoGols(VetorTimes, n_times);
    pior = PiorSaldoGols(VetorTimes, n_times);
    scanf("%d", &continente);
    getchar();
    melhor_continente = MelhorClassificadoContinente(VetorPartidas, n_partidas, VetorTimes, n_times, continente);
    printf("%c %s %d %d %d %d", melhor.letra, melhor.nome, melhor.gols_a_favor, melhor.gols_contra, melhor.saldo_gols, melhor.qtde_partidas);

    printf("%c %s %d %d %d %d", pior.letra, pior.nome, pior.gols_a_favor, pior.gols_contra, pior.saldo_gols, pior.qtde_partidas);

    printf("%c %s %d %d %d %d", melhor_continente.letra, melhor_continente.nome, melhor_continente.gols_a_favor, melhor_continente.gols_contra, melhor_continente.saldo_gols, melhor_continente.qtde_partidas);

    return 0;
} */


 
int main() {
    int n, m, i;
    Time VetorTimes[MAX];
    Partida VetorPartidas[MAX];
    Time melhor_saldo, pior_saldo, melhor_continente;
    scanf("%d", &n);
    InicializaTimes(VetorTimes, n);
    ReceberTimes(VetorTimes, n);
    scanf("%d", &m);
    InicializaPartidas(VetorPartidas, m);
    ReceberPartidas(VetorPartidas, m, VetorTimes, n);
    melhor_saldo = MelhorSaldoGols(VetorTimes, n);
    pior_saldo = PiorSaldoGols(VetorTimes, n);
    //printf("Melhor saldo: %c", melhor_saldo.letra);
    //printf("Pior saldo: %c", pior_saldo.letra);
    printf("%c\n", melhor_saldo.letra);
    printf("%c\n", pior_saldo.letra);
    for (i = 1; i <= 5; i++) {
        melhor_continente = MelhorClassificadoContinente(VetorPartidas, m, VetorTimes, n, i);
        //printf("\nMelhor classificado do continente %d: %c\n", i, melhor_continente.letra);
        printf("%d:%c\n", i, melhor_continente.letra);
    }
    return 0;
}
