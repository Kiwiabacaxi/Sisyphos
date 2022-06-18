#include <stdio.h>
#include <stdlib.h>

/* 
No Colégio Neps Academy (CNA) um aluno é aprovado por média se ele obtiver uma média final maior ou igual a 7, caso o aluno tenha uma média menor que 7 mas maior ou igual a 4 ele está de recuperação, caso ele tenha uma média menor que 4 o aluno está reprovado.

A média é calculada com a nota das duas provas aplicadas no semestre e corresponde simplesmente a média aritimética das duas notas.

Baseado nas duas notas do aluno, indique o resultado final do aluno: "Aprovado", "Reprovado" ou "Recuperacao".

Entrada
A entrada consiste de apenas uma linha com as notas AA e BB, que correspondem as duas notas que o aluno conquistou esse semestre.

Saída
A saída do seu programa deve ser apenas uma linha. Caso o aluno tenha sido aprovado informe "Aprovado", caso o aluno tenha sido reprovado informe "Reprovado" e caso ele esteja de recuperação informe "Recuperacao". 
*/

int main (){

    double a, b;
    double media;

    scanf("%lf %lf", &a, &b);

    media = (a + b) / 2.0;

    if(media >= 7){
        printf("Aprovado");
    }
    else if(media >= 4){
        printf("Recuperacao");
    }
    else{
        printf("Reprovado");
    }

    return 0;
}