""" 

Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.
Entrada

A entrada contém um valor inteiro N (5 < N < 2000).
Saída

Imprima o quadrado de cada um dos valores pares, de 1 até N, conforme o exemplo abaixo.

Tome cuidado! Algumas linguagens tem por padrão apresentarem como saída 1e+006 ao invés de 1000000 o que ocasionará resposta errada. Neste caso, configure a precisão adequadamente para que isso não ocorra.
 """
 
# inteiro N
N = int(input())

# loop de 1 ate N usando while
# for i in range(1, N + 1): # começa de 1 e para em N + 1
#     if i % 2 == 0: # se for par
#         print(f"{i}^2 = {i ** 2}")
        
# loop de 1 ate N usando for
for i in range(2, N + 1, 2): # começa de 2 e para em N + 1, pulando de 2 em 2
    print(f"{i}^2 = {i ** 2}")
    