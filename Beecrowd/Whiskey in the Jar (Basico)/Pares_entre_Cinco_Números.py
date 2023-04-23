""" 

Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.
Entrada

O arquivo de entrada contém 5 valores inteiros quaisquer.
Saída

Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.
 """
 
# ler 5 valores inteiros em uma lista
lista = []
for i in range(5):
    lista.append(int(input()))
# ou lista = [int(input()) for i in range(5)]


# contar quantos valores pares tem na lista
pares = 0
for i in lista:
    if i % 2 == 0:
        pares += 1
    
print(f"{pares} valores pares")