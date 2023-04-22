""" 

Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor, deve ser apresentado como resposta o mês do ano por extenso, em inglês, com a primeira letra maiúscula.
Entrada

A entrada contém um único valor inteiro.
Saída

Imprima por extenso o nome do mês correspondente ao número existente na entrada, com a primeira letra em maiúscula.
"""

# entrada
mes = int(input())

# processamento
if mes == 1:
    mes_extenso = "January"
elif mes == 2:
    mes_extenso = "February"
elif mes == 3:
    mes_extenso = "March"
elif mes == 4:
    mes_extenso = "April"
elif mes == 5:
    mes_extenso = "May"
elif mes == 6:
    mes_extenso = "June"
elif mes == 7:
    mes_extenso = "July"
elif mes == 8:
    mes_extenso = "August"
elif mes == 9:
    mes_extenso = "September"
elif mes == 10:
    mes_extenso = "October"
elif mes == 11:
    mes_extenso = "November"
else:
    mes_extenso = "December"

print(mes_extenso)