""" 

Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.
Entrada

Seis valores, negativos e/ou positivos.
Saída

Imprima uma mensagem dizendo quantos valores positivos foram lidos """

numero = 1
positivos = 0
while numero <= 6:
    valor = float(input())
    if valor > 0:
        positivos += 1
    numero += 1
    
print(f"{positivos} valores positivos")