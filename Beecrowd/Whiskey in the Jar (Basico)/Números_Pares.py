""" 

Faça um programa que mostre os números pares entre 1 e 100, inclusive.
Entrada

Neste problema extremamente simples de repetição não há entrada.
Saída

Imprima todos os números pares entre 1 e 100, inclusive se for o caso, um em cada linha.
 """
 
numero = 1
while numero <= 100:
    if numero % 2 == 0:
        print(numero)
    numero += 1

