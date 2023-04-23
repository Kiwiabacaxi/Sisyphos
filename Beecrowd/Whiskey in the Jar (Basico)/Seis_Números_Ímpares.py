""" 

Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.
Entrada

A entrada será um valor inteiro positivo.
Saída

A saída será uma sequência de seis números ímpares.
 """

# ler numero inteiro, de comecar a contar os 6 numeros impares a partir dele
numero = int(input())

# contar a partir dele os 6 numeros impares
for i in range(numero, numero + 12):  # 12 porque 6 numeros impares * 2 = 12
    if i % 2 != 0:  # se o numero for impar e diferente de 0
        print(i)
