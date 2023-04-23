""" 

Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. Apresente a média ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.
Entrada

O arquivo de entrada contém um valor inteiro N na primeira linha. Cada N linha a seguir contém um caso de teste com três valores com uma casa decimal cada valor.
Saída

Para cada caso de teste, imprima a média ponderada dos 3 valores, conforme exemplo abaixo.
 """

# ler o valor N
N = int(input())

# para cada valor entre 1 e N
""" for i in range(1, N+1): # começa no 1 e vai até o N (N+1-1)
    # ler os 3 valores
    A, B, C = input().split()
    # converter os valores para float
    A = float(A)
    B = float(B)
    C = float(C)
    # calcular a média ponderada
    media = (A * 2 + B * 3 + C * 5) / 10
    # imprimir o resultado
    print("{:.1f}".format(media)) """
    
# para cada valor entre 1 e N
for i in range(1, N+1):
    # ler os 3 valores com map
    A, B, C = map(float, input().split())
    
    # calcular a media ponderada
    media = (A * 2 + B * 3 + C * 5) / 10
    
    # imprimir o resultado
    print("{:.1f}".format(media))