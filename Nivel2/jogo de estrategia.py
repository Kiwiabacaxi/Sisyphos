""" 
    @autor: Kiwiabacaxi
    @data: 26/08/2022
    @instituição: IFTM - Instituto Federal do Triângulo Mineiro 
"""


""" 
J0115 - Jogo de Estratégia
Um jogo de estratégia, com J jogadores, é jogado em volta de uma mesa. O primeiro a jogar é o jogador 1, o segundo a jogar é o jogador 2 e assim por diante. Uma vez completada uma rodada, novamente o jogador 1 faz sua jogada e a ordem dos jogadores se repete novamente. A cada jogada, um jogador garante uma certa quantidade de Pontos de Vitória. A pontuação de cada jogador consiste na soma dos Pontos de Vitória de cada uma das suas jogadas.

Dado o número de jogadores, o número de rodadas e uma lista representando os Pontos de Vitória na ordem em que foram obtidos, você deve determinar qual é o jogador vencedor. Caso mais de um jogador obtenha a pontuação máxima, o jogador com pontuação máxima que tiver jogado por último é o vencedor.

Entrada
A entrada consiste de duas linhas. A primeira linha contém dois inteiros J e R, o número de jogadores e de rodadas respectivamente (1 ≤ J, R ≤ 500). A segunda linha contém J × R inteiros, correspondentes aos Pontos de Vitória em cada uma das jogadas feitas, na ordem em que aconteceram. Os Pontos de Vitória obtidos em cada jogada serão sempre inteiros entre 0 e 100, inclusive.

Saída
Seu programa deve produzir uma única linha, contendo o inteiro correspondente ao jogador vencedor. 
"""

# Entrada
j, r = [int(x) for x in input().split()] # j = jogador, r = rodada
entrada = list(map(int, input().split())) # entrada = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

# Processamento
# Função para determinar o vencedor
pontos = [0] * j

# Contador de rodadas
for k in range(j):
    pontos[k] = sum(entrada[k::j])

# Função para determinar o vencedor
pontos = pontos[::-1] 
vencedor = j - pontos.index(max(pontos)) # vencedor = 1
print(vencedor) # saida = 1