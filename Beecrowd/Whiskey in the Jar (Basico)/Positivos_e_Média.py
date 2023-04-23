""" 

Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.
Entrada

A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes números será positivo.
Saída

O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.
"""

# ler os 6 valores como uma lista
lista_valores = [float(input()) for i in range(6)]
# print(lista_valores)
# print(f"{len([i for i in lista_valores if i > 0])} valores positivos")

# fazer uma lista com os valores positivos
lista_positivos = [i for i in lista_valores if i > 0]

# contar os valores positivos
# valores_positivos = len([i for i in lista_valores if i > 0])
""" valores_positivos = 0
for i in lista_valores:
    if i > 0:
        valores_positivos += 1 """

# calcular a média dos valores positivos
# media = sum([i for i in lista_valores if i > 0]) / valores_positivos
media = sum(lista_positivos) / len(lista_positivos)


# printar
# print(f"{valores_positivos} valores positivos")
print(f"{len(lista_positivos)} valores positivos")
print(f"{media:.1f}")