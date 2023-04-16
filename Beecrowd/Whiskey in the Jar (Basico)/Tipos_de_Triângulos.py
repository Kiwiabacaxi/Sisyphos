""" 
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:

    se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
    se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
    se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
    se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
    se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
    se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

Entrada

A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).
Saída

Imprima todas as classificações do triângulo especificado na entrada.
"""

# entrada de 3 floats
a, b, c = map(float, input().split())

# ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados
# ordenar uma lista em ordem decrescente
lista = [a, b, c]
lista.sort(reverse=True)

# atribuindo os valores ordenados a variáveis
a = lista[0]
b = lista[1]
c = lista[2]

# verificando se forma um triangulo
if a >= b + c:
    print('NAO FORMA TRIANGULO')

# verificando se forma um triangulo retangulo
elif a**2 == b**2 + c**2:
    print('TRIANGULO RETANGULO')

# verificando se forma um triangulo obtusangulo
elif a**2 > b**2 + c**2:
    print('TRIANGULO OBTUSANGULO')

# verificando se forma um triangulo acutangulo
elif a**2 < b**2 + c**2:
    print('TRIANGULO ACUTANGULO')

# verificando se forma um triangulo equilatero
if a == b == c:
    print('TRIANGULO EQUILATERO')

# verificando se forma um triangulo isosceles
elif a == b or b == c:
    print('TRIANGULO ISOSCELES')
