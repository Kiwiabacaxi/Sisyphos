""" 
Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.
Entrada

A entrada contém valores inteiros.
Saída

A saída deve conter uma das mensagens conforme descrito acima.
"""

# entrada
a, b = map(int, input().split())

# se e somente se a divisão de a por b for exata, então a é múltiplo de b
if a % b == 0 or b % a == 0:
    print('Sao Multiplos')
    
else:
    print('Nao sao Multiplos')