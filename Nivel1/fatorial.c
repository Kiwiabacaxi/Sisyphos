#include <stdlib.h>
#include <stdio.h>

/* 
Seu programa deve produzir uma única linha com um inteiro representando a menor quantidade de números fatoriais cuja soma é igual ao valor de N.
*/

int main(){

    int fatorial[10];
    int i, n, soma=0
    ;
    int a;

    fatorial[0] = 1;

    for(i = 1; i < 10; i++){
        fatorial[i] = fatorial[i-1] * i;
        //printf("%d\n", fatorial[i]);
    }

    scanf("%d", &n);
    
    for(i = 1; i < 10; i++){
        if(fatorial[i] > n){ // se o fatorial for maior que o número, então o fatorial anterior é o menor fatorial que soma com o número
            a = i-1;         //a = i-1 pois o fatorial[i] é maior que o valor de n, então o fatorial[i-1] é o menor fatorial que soma com o valor de n
            break;
        }
        
    }

    //soma = fatorial[a] + fatorial[a-1];

    for(i = a; i >= 0; i--){
        soma += n / fatorial[i]; // n/fatorial[i] = n/fatorial[i] + n/fatorial[i-1] + n/fatorial[i-2] + ... + n/fatorial[0]
        n = n % fatorial[i];     // n = n%fatorial[i]
    }

    printf("%d\n", soma);



    return 0;
}