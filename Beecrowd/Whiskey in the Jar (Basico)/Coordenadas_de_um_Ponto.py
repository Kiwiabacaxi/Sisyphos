"""
Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0).

Se o ponto estiver na origem, escreva a mensagem “Origem”.

Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.
Entrada

A entrada contem as coordenadas de um ponto.
Saída

A saída deve apresentar o quadrante em que o ponto se encontra.
"""

# entrada com map float
# x, y = map(float, input().split()) # faz a entrada para cada variavel e converte para float

# entrada com string
x, y = input().split()  # isso é uma string
x = float(x)
y = float(y)

# definir se o ponto está na origem
if x == 0 and y == 0:
    print(f"Origem")

# definir se o ponto está no eixo x
elif x == 0 and y != 0:
    print(f"Eixo Y")

# definir se o ponto está no eixo y
elif x != 0 and y == 0:
    print(f"Eixo X")
    
# quadrante 1
elif x > 0 and y > 0:
    print(f"Q1")
    
# quadrante 2
elif x < 0 and y > 0:
    print(f"Q2")

# quadrante 3
elif x < 0 and y < 0:
    print(f"Q3")
    
# quadrante 4
elif x > 0 and y < 0:
    print(f"Q4")