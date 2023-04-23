""" 

Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
Entrada

O arquivo de entrada contém 100 números inteiros, positivos e distintos.
Saída

Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.
 """

# criar uma lista vazia
lista = []

# preencher a lista com 100 valores inteiros
for i in range(1, 101):
    # ler o valor
    valor = int(input())
    # adicionar o valor na lista
    lista.append(valor)

# encontrar o maior valor da lista
maior = max(lista)

# encontrar a posição do maior valor da lista
posicao = lista.index(maior) + 1
