"""
Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.
Entrada

A entrada contem três números inteiros.
Saída

Imprima a saída conforme foi especificado. 
"""

# entrada com map int
a, b, c = map(int, input().split())
# entrada com string
# a, b, c = input().split()
# a = int(a)
# b = int(b)
# c = int(c)


# lista com os valores
lista = [a, b, c]

lista2 = lista.copy()  # copia da lista

# ordenar a lista
lista.sort()

# imprimir a lista ordenada
for i in lista:
    print(i)

# imprimir uma linha em branco
print()

# imprimir a lista na ordem de entrada
for i in lista2:
    print(i)
