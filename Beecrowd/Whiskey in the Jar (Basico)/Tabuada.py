""" 

Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:      
1 x N = N      2 x N = 2N        ...       10 x N = 10N
Entrada

A entrada contém um valor inteiro N (2 < N < 1000).
Saída

Imprima a tabuada de N, conforme o exemplo fornecido.
 """
 
# ler o valor N
N = int(input())

# para cada valor entre 1 e 10
for i in range(1, 11): # começa no 1 e vai até o 10 (11-1)
    # imprimir o valor de i, o valor de N e o resultado da multiplicação
    print(i, "x", N, "=", i * N)
    
