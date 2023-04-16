"""
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.
Entrada

A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.
"""

# entrada de 2 inteiros
hora_inicio, hora_termino = map(int, input().split())

# termina no mesmo dia
if hora_inicio < hora_termino:
    print(f"O JOGO DUROU {hora_termino - hora_inicio} HORA(S)")

# termina no proximo dia
elif hora_inicio > hora_termino:
    print(f"O JOGO DUROU {24 - hora_inicio + hora_termino} HORA(S)")

else:  # roda 24 horas
    print("O JOGO DUROU 24 HORA(S)")