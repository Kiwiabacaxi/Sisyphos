#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/* 
Dada uma configuração inicial, a máquina de criptografia alemã Enigma, da Segunda Guerra Mundial, 
substituía cada letra digitada no teclado por alguma outra letra. 
A substituição era bastante complexa, mas a máquina tinha uma vulnerabilidade: uma letra nunca seria substituída por ela mesma!

Essa vulnerabilidade foi explorada por Alan Turing, que trabalhou na criptoanálise da Enigma durante a guerra. 
O objetivo era encontrar a configuração inicial da máquina usando a suposição de que a mensagem continha uma certa expressão usual da comunicação, 
como por exemplo a palavra ARMADA. Essas expressões eram chamadas de cribs. Se a mensagem cifrada era, por exemplo, FDMLCRDMRALF, 
o trabalho de testar as possíveis configurações da máquina era simplificado porque a palavra ARMADA, se estivesse nessa mensagem cifrada, 
só poderia estar em duas posições, ilustradas na tabela abaixo com uma seta.

As demais cinco posições não poderiam corresponder ao crib ARMADA porque ao menos uma letra do crib, sublinhada na tabela abaixo, 
casa com sua correspondente na mensagem cifrada; como a Enigma nunca substituiria uma letra por ela própria, 
essas cinco posições poderiam ser descartadas nos testes.

Neste problema, dada uma mensagem cifrada e um crib, seu programa deve computar o número de posições possíveis para o crib na mensagem cifrada.

Entrada
A primeira linha da entrada contém a mensagem cifrada, que é uma sequência de pelo menos uma letra e no máximo 10^4 letras.
A segunda linha da entrada contém o crib, que é uma sequência de pelo menos uma letra e no máximo o mesmo número de letras da mensagem.
Apenas as 26 letras maiúsculas, sem acentuação, aparecem na mensagem e no crib.

Saída
Imprima uma linha contendo um inteiro, indicando o número de posições possíveis para o crib na mensagem cifrada.

Exemplo

Entrada:
FDMLCRDMRALF
ARMADA

Saida:
2
*/


unsigned short enigma(char *, char *);

void main ()
{

	char crib[10500];
	char cifra[10500];

	scanf("%s %s", cifra, crib);

	enigma(cifra, crib);

	printf("%hu\n", enigma(cifra, crib));

}

unsigned short enigma(char *cifra, char *crib)
{

	bool igualdades = false;
	unsigned short i, j, k;
	unsigned limite = strlen(cifra) - strlen(crib);
	unsigned short qtsPosicoesPossiveis;

	i = j = k = 0;
	igualdades = 0;
	qtsPosicoesPossiveis = 0;

	if (!limite)
	{

		while (cifra[i])
		{

			if (cifra[i] == crib[j])
			{
				igualdades = true;
				break;
			}

			i++;
			j++;

		}

		if (!igualdades)
			return 1;
		else
			return 0;

	}

	while (k <= limite)
	{

		j = 0;
		i = k;
		igualdades = 0;
		while (cifra[i] && crib[j])
		{

			if (cifra[i] == crib[j])
			{

				igualdades = true;
				break;

			}

			++j;
			++i;

		}

		k++;

		if (!igualdades)
			qtsPosicoesPossiveis++;

	}

	return qtsPosicoesPossiveis;

}