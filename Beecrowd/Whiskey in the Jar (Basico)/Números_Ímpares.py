""" 

Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.
Entrada

O arquivo de entrada contém 1 valor inteiro qualquer.
Saída

Imprima todos os valores ímpares de 1 até X, inclusive X, se for o caso.
 """
 
# inteiro X
x = int(input())

# loop de 1 ate X usando while
for i in range(1, x + 1): # começa de 1 e para em x + 1
    if i % 2 != 0: # se for impar
        print(i)