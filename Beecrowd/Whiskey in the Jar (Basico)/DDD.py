""" 
Leia um número inteiro que representa um código de DDD para discagem interurbana. Em seguida, informe à qual cidade o DDD pertence, considerando a tabela abaixo:

Se a entrada for qualquer outro DDD que não esteja presente na tabela acima, o programa deverá informar:
DDD nao cadastrado
Entrada

A entrada consiste de um único valor inteiro.
Saída

Imprima o nome da cidade correspondente ao DDD existente na entrada. Imprima DDD nao cadastrado caso não existir DDD correspondente ao número digitado.
"""

# entrada

numero = int(input())

# processamento
if numero == 61:
    cidade = 'Brasilia'
elif numero == 71:
    cidade = 'Salvador'
elif numero == 11:
    cidade = 'Sao Paulo'
elif numero == 21:
    cidade = 'Rio de Janeiro'
elif numero == 32:
    cidade = 'Juiz de Fora'
elif numero == 19:
    cidade = 'Campinas'
elif numero == 27:
    cidade = 'Vitoria'
elif numero == 31:
    cidade = 'Belo Horizonte'
else:
    cidade = 'DDD nao cadastrado'

# saida
print(cidade)