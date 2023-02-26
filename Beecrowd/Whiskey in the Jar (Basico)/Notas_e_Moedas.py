""" Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias. """

# Entrada de dados
valor = float(input())

# Processamento
notas = [100, 50, 20, 10, 5, 2]
moedas = [1, 0.50, 0.25, 0.10, 0.05, 0.01]

# Para que o valor seja arredondado para duas casas decimais, é necessário somar 0.001, pois o arredondamento é feito para baixo.
valor += 0.001

# Saída de dados
print("NOTAS:")
for nota in notas:
    print(f"{int(valor/nota)} nota(s) de R$ {nota:.2f}")
    valor %= nota

print("MOEDAS:")
for moeda in moedas:
    print(f"{int(valor/moeda)} moeda(s) de R$ {moeda:.2f}")
    valor %= moeda