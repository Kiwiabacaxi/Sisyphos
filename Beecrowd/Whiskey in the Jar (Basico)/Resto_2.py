""" 

Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos por N dão resto igual a 2.
Entrada

A entrada contém um valor inteiro N (N < 10000).
Saída

Imprima todos valores que quando divididos por N dão resto = 2, um por linha.
 """
 
# ler o valor N
N = int(input())

# para cada valor entre 1 e 10000
for i in range(1, 10000):
    # se o resto da divisão de i por N for igual a 2
    if i % N == 2:
        # imprimir o valor de i
        print(i)
        
