""" A tarefa aqui neste problema é ler uma expressão matemática na forma de dois números Racionais (numerador / denominador) e apresentar o resultado da operação. Cada operando ou operador é separado por um espaço em branco. A sequência de cada linha que contém a expressão a ser lida é: número, caractere, número, caractere, número, caractere, número. A resposta deverá ser apresentada e posteriormente simplificada. Deverá então ser apresentado o sinal de igualdade e em seguida a resposta simplificada. No caso de não ser possível uma simplificação, deve ser apresentada a mesma resposta após o sinal de igualdade.

Considerando N1 e D1 como numerador e denominador da primeira fração, segue a orientação de como deverá ser realizada cada uma das operações:
Soma: (N1*D2 + N2*D1) / (D1*D2)
Subtração: (N1*D2 - N2*D1) / (D1*D2)
Multiplicação: (N1*N2) / (D1*D2)
Divisão: (N1/D1) / (N2/D2), ou seja (N1*D2)/(N2*D1) 

Entrada
A entrada contem vários casos de teste. A primeira linha de cada caso de teste contem um inteiro N (1 ≤ N ≤ 1*104), indicando a quantidade de casos de teste que devem ser lidos logo a seguir. Cada caso de teste contém um valor racional X (1 ≤ X ≤ 1000), uma operação (-, +, * ou /) e outro valor racional Y (1 ≤ Y ≤ 1000).
Saída
A saída consiste em um valor racional, seguido de um sinal de igualdade e outro valor racional, que é a simplificação do primeiro valor. No caso do primeiro valor não poder ser simplificado, o mesmo deve ser repetido após o sinal de igualdade.
"""


def simplificar(numerador, denominador):
    """ Simplifica uma fração. """

    # abs() retorna o valor absoluto de um número.
    abs_numerador, abs_denominador = abs(numerador), abs(denominador)

    # Encontrar o menor divisor comum entre o numerador e o denominador.
    menor = min(abs_numerador, abs_denominador)
    maior = max(abs_numerador, abs_denominador)

    # Encontrar o maior divisor comum entre o numerador e o denominador.
    divisor = menor

    # Enquanto o resto da divisão do maior pelo divisor for diferente de zero e o resto da divisão do menor pelo divisor for diferente de zero, o divisor tem que ser decrementado.
    while maior % divisor != 0 or menor % divisor != 0:
        divisor -= 1

    # Simplificar a fração.
    numerador //= divisor # // é a divisão inteira.
    denominador //= divisor
    
    # Retornar o numerador e o denominador simplificados.
    return numerador, denominador

# Entrada de dados
N = int(input())
for i in range(N):
    # receber a entrada como uma string e separar os elementos em uma lista
    entrada = input().split(' ')

    # separar os elementos da lista em variáveis
    N1, barra1, D1, operador, N2, barra2, D2 = entrada

    # converter as variáveis para inteiros
    N1, D1, N2, D2 = int(N1), int(D1), int(N2), int(D2)

    # Processamento
    if operador == '+':
        N3 = N1*D2 + N2*D1
        D3 = D1*D2
    elif operador == '-':
        N3 = N1*D2 - N2*D1
        D3 = D1*D2
    elif operador == '*':
        N3 = N1*N2
        D3 = D1*D2
    elif operador == '/':
        N3 = N1*D2
        D3 = N2*D1

    # simplificar a fração
    N4, D4 = simplificar(N3, D3)

    # Saída de dados
    print(f"{N3}/{D3} = {N4}/{D4}")

