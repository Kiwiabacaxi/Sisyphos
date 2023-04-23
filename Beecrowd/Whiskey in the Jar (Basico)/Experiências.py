""" 

Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.

Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.
Entrada

A primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um inteiro Quantia (1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias utilizadas e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).
Saída

Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois dígitos após o ponto.
 """
 
# ler o valor N
N = int(input())

# criar variaveis para cada tipo de cobaia
coelhos = 0
ratos = 0
sapos = 0

# para cada valor entre 1 e N
for i in range(1, N+1):
    # ler os valores Quantia e Tipo
    Quantia, Tipo = input().split()
    # converter Quantia para int
    Quantia = int(Quantia)
    
    # se o Tipo for C
    if Tipo == "C":
        # adicionar Quantia a variavel coelhos
        coelhos += Quantia
    # se o tipo for R
    elif Tipo == "R":
        ratos += Quantia
    # se o tipo for S
    else:
        sapos += Quantia
        
# calcular o total de cobaias
total = coelhos + ratos + sapos
# calcular o percentual de cada tipo de cobaia
percentual_coelhos = (coelhos / total) * 100
percentual_ratos = (ratos / total) * 100
percentual_sapos = (sapos / total) * 100

# imprimir o resultado
print(f"Total: {total} cobaias")
print(f"Total de coelhos: {coelhos}")
print(f"Total de ratos: {ratos}")
print(f"Total de sapos: {sapos}")
print(f"Percentual de coelhos: {percentual_coelhos:.2f} %")
print(f"Percentual de ratos: {percentual_ratos:.2f} %" )
print(f"Percentual de sapos: {percentual_sapos:.2f} %")
