""" 

Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.
Entrada

Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual o evento vai começar. Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do evento.
Saída

Na saída, deve ser apresentada a duração do evento, no seguinte formato:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.


"""

# entrada e uma lista com os dados de entrada mas remover os : e a palavra dia
# entrada = input().split(" ") + input().split(" ") + input().split(" ") + input().split(" ")
# entrada = input().split(" ") + input().split(":") + input().split(" ") + input().split(":")
entrada = input().split(" ") + input().split(":") + input().split(" ") + input().split(":")

# print(entrada)
# remover a palavra Dia em toda a lista
while "Dia" in entrada:
    entrada.remove("Dia")


# converte os dados de entrada para inteiro
# print(entrada)



# diferenca de dias
dias = int(entrada[4]) - int(entrada[0])

# diferenca de horas
horas = int(entrada[5]) - int(entrada[1])

# diferenca de minutos
minutos = int(entrada[6]) - int(entrada[2])

# diferenca de segundos
segundos = int(entrada[7]) - int(entrada[3])

# se a diferenca de segundos for negativa
if segundos < 0:
    segundos += 60
    minutos -= 1
    
# se a diferenca de minutos for negativa
if minutos < 0:
    minutos += 60
    horas -= 1
    
# se a diferenca de horas for negativa
if horas < 0:
    horas += 24
    dias -= 1
    
# se a diferenca de dias for negativa
if dias < 0:
    dias += 30
     

# saida
print(dias, "dia(s)")
print(horas, "hora(s)")
print(minutos, "minuto(s)")
print(segundos, "segundo(s)")


