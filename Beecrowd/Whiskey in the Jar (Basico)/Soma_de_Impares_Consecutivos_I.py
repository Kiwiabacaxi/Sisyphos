""" 

Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.
Entrada

O arquivo de entrada contém dois valores inteiros.
Saída

O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre os valores fornecidos na entrada que deverá caber em um inteiro.
 """

# ler 2 valores inteiros
# x = int(input())
# y = int(input())
# x, y = [int(input()) for i in range(2)] # ler 2 valores inteiros em uma lista
x, y = int(input()), int(input()) # ler 2 valores inteiros em uma linha

# se x for maior que y, inverter (porque e o intervalo de numeros impares entre eles| pensando no plano cartesiano)
if x > y:
    x, y = y, x
    
# somar os numeros impares entre eles
soma = 0
for i in range(x + 1, y): # começa de x + 1 e para em y
    if i % 2 != 0: # se for impar
        soma += i

print(soma)