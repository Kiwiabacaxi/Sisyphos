"""
    @autor: Kiwiabacaxi
    @data: 26/08/2022
    @instituição: IFTM - Instituto Federal do Triângulo Mineiro 
 """

"""
I0118 - Interruptores
No painel de controle de um grande anfiteatro existem N interruptores, numerados de 1 a N, que controlam as M lâmpadas do local, numeradas de 1 a M. Note que o número de interruptores e lâmpadas não é necessariamente o mesmo e isso acontece porque cada interruptor está associado a um conjunto de lâmpadas e não apenas a uma lâmpada. Quando um interruptor é acionado, o estado de cada uma das lâmpadas associadas a ele é invertido. Quer dizer, aquelas apagadas acendem e as acesas se apagam.

Algumas lâmpadas estão acesas inicialmente e o zelador do anfiteatro precisa apagar todas as lâmpadas. Ele começou tentando acionar interruptores aleatoriamente mas, como não estava conseguindo apagar todas as lâmpadas ao mesmo tempo, decidiu seguir uma seguinte estratégia fixa. Ele vai acionar os interruptores na sequência 1, 2, 3, . . . , N, 1, 2, 3, . . . ou seja, toda vez após acionar o interruptor de número N, ele recomeça a sequência a partir do interruptor 1. Ele pretende acionar interruptores, seguindo essa estratégia, até que todas as lâmpadas estejam apagadas ao mesmo tempo (momento em que ele para de acionar os interruptores). Será que essa estratégia vai funcionar?

Neste problema, dadas as lâmpadas acesas inicialmente e dados os conjuntos de lâmpadas que estão associados a cada interruptor, seu programa deve computar o número de vezes que o zelador vai acionar os interruptores. Caso a estratégia do zelador nunca apague todas as lâmpadas ao mesmo tempo, seu programa deve imprimir −1.

Entrada
A primeira linha contém dois inteiros N e M (1 ≤ N, M ≤ 1000) representando, respectivamente, o número de interruptores e o número de lâmpadas. A segunda linha contém um inteiro L (1 ≤ L ≤ M) seguido por L inteiros distintos Xi (1 ≤ Xi ≤ M), representando as lâmpadas acesas inicialmente. Cada uma das N linhas seguintes contém um inteiro Ki (1 ≤ Ki ≤ M) seguido por Ki inteiros distintos Yi (1 ≤ Yi ≤ M), representando as lâmpadas associadas ao interruptor i (1 ≤ i ≤ N).

Saída
Se programa deve produzir uma única linha contendo um inteiro representando o número de vezes que o zelador vai acionar os interruptores, seguindo a estratégia descrita, até todas as lâmpadas estarem apagadas ao mesmo tempo. Caso isso nunca vá acontecer, imprima −1.

"""

# Entrada
N, M = map(int, input().split()) # Número de interruptores e lâmpadas
L = int(input())
Lamps = list(map(int, input().split()))

# Processamento
for i in range(N):
    Interruptor = list(map(int, input().split()))
    for j in range(len(Interruptor)):
        if Lamps[Interruptor[j]-1] == 1:
            Lamps[Interruptor[j]-1] = 0
        else:
            Lamps[Interruptor[j]-1] = 1

# Saída
if Lamps.count(1) == 0:
    print(0)
else:
    print(-1)

# Teste
# N = 3
# M = 3
# L = 2
# Lamps = [1, 0, 0]
# Interruptor = [1, 2, 3]
# print(Lamps)
# for i in range(len(Interruptor)):
#     if Lamps[Interruptor[i]-1] == 1:
#         Lamps[Interruptor[i]-1] = 0
#     else:
#         Lamps[Interruptor[i]-1] = 1
# print(Lamps)
# if Lamps.count(1) == 0:
#     print(0)
# else:
#     print(-1)

