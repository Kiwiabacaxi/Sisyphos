""" 

Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.
Entrada

O arquivo de entrada contém 5 valores inteiros quaisquer.
Saída

Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.
 """

# ler 5 valores inteiros em uma lista
lista = []
for i in range(5):
    lista.append(int(input()))

# contar quantos valores pares e ímpares tem na lista
impares = 0
pares = 0
for i in lista:
    if i % 2 == 0:
        pares += 1
    else:
        impares += 1

# contar quantos valores positivos e negativos tem na lista
positivos = 0
negativos = 0
for i in lista:
    if i > 0:
        positivos += 1
    elif i < 0:
        negativos += 1

# imprimir resultados
print(f"{pares} valor(es) par(es)")
print(f"{impares} valor(es) impar(es)")
print(f"{positivos} valor(es) positivo(s)")
print(f"{negativos} valor(es) negativo(s)")
