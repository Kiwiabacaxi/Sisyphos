/*  
    @autor: Kiwiabacaxi
    @data: 20/06/2022
    @instituição: IFTM - Instituto Federal do Triângulo Mineiro 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* 
H0116 - Huaauhahhuahau
Em chats, é muito comum entre jovens e adolescentes utilizar sequências de letras, que parecem muitas vezes aleatórias, para representar risadas. Alguns exemplos comuns são:

huaauhahhuahau
hehehehe
ahahahaha
jaisjjkasjksjjskjakijs
huehuehue

Cláudia é uma jovem programadora que ficou intrigada pela sonoridade das “risadas digitais”. 
Algumas delas ela nem mesmo consegue pronunciar! Mas ela percebeu que algumas delas parecem transmitir melhor o sentimento da risada que outras. 
A primeira coisa que ela percebeu é que as consoantes não interferem no quanto as risadas digitais influenciam na transmissão do sentimento. 
A segunda coisa que ela percebeu é que as risadas digitais mais engraçadas são aquelas em que as sequências de vogais são iguais
quando lidas na ordem natural (da esquerda para a direita) ou na ordem inversa (da direita para a esquerda), ignorando as consoantes. 
Por exemplo, “hahaha” e “huaauhahhuahau” estão entre as risadas mais engraçadas, enquanto “riajkjdhhihhjak” e “huehuehue” não estão entre as mais engraçadas.

Cláudia está muito atarefada com a análise estatística das risadas digitais e pediu sua ajuda para escrever um programa que determine, 
para uma risada digital, se ela é das mais engraçadas ou não.

Entrada
A entrada é composta por uma linha, contendo uma sequência de no máximo 50 caracteres, formada apenas por letras minúsculas sem acentuação. 
As vogais são as letras ‘a’,‘e’,‘i’,‘o’,‘u’. A sequência contém pelo menos uma vogal.

Saída
Seu programa deve produzir uma linha contendo um caractere, “S” caso a risada seja das mais engraçadas, ou “N” caso contrário.
*/

int main (){
    
    char sequencia[51], sequencia_vogais[51];
    int i, j = 0;
    int temp_vogais;

    // Entrada
    gets(sequencia);


    // Preencher o vetor sequencia_vogais apenas com as vogais
     for(i = 0; i < strlen(sequencia); i++){ // Percorre a sequencia [strlen(sequencia) ou sequencia[i] != '\0']
        if(sequencia[i] == 'a' || sequencia[i] == 'e' || sequencia[i] == 'i' || sequencia[i] == 'o' || sequencia[i] == 'u'){
            sequencia_vogais[j] = sequencia[i];
            j++;
        }
    }
    sequencia_vogais[j] = '\0'; // Fim do vetor


    //printf("%s\n", sequencia_vogais);


    // Verificar se a sequencia lida da esquerda para a direita é igual a sequencia lida da direita para a esquerda

    int len_vogais = strlen(sequencia_vogais);
    int flag = 0;
    // Verifica palindromo

    for(i = 0, j = len_vogais - 1; i < len_vogais; i++, j--){
        if(sequencia_vogais[i] == sequencia_vogais[j]){
            flag = 1;

        }
        else if(sequencia_vogais[i] != sequencia_vogais[j]){
            flag = 0;
            break;
        }

        
    }

    // Imprimir o resultado
    if(flag == 1){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
    
    
    

    return 0;
}