""" Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo. """

# Entrada de dados
# map() aplica uma função a cada elemento de um iterável, retornando um iterável com os resultados, neste caso, float().
# split() separa uma string em uma lista de substrings, neste caso, separando os valores de entrada por espaço.
a, b, c = map(float, input().split())

# Processamento
delta = b**2 - 4*a*c

# Saída de dados
if delta < 0 or a == 0:
    print("Impossivel calcular")
else:
    x1 = (-b + delta**(1/2))/(2*a)
    x2 = (-b - delta**(1/2))/(2*a)
    print(f"R1 = {x1:.5f}")
    print(f"R2 = {x2:.5f}")