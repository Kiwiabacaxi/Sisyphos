""" 
Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.
Entrada

Quatro números inteiros representando a hora de início e fim do jogo.
Saída

Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .
"""

# entrada de 4 inteiros
h_inicio, m_inicio, h_termino, m_termino = map(int, input().split())

# calculando a duração do jogo

# se o jogo termina no mesmo dia
if h_inicio < h_termino:
    h_duracao = h_termino - h_inicio

    # se o minuto de inicio for menor que o minuto de termino
    if m_inicio < m_termino:
        m_duracao = m_termino - m_inicio
        print(f"O JOGO DUROU {h_duracao} HORA(S) E {m_duracao} MINUTO(S)")

    # se o jogo termina no mesmo dia e no mesmo minuto
    if m_inicio > m_termino:
        h_duracao -= 1
        m_duracao = 60 - m_inicio + m_termino
        print(f"O JOGO DUROU {h_duracao} HORA(S) E {m_duracao} MINUTO(S)")

    # se o jogo termina no mesmo dia e no mesmo minuto
    if m_inicio == m_termino:
        m_duracao = 0
        print(f"O JOGO DUROU {h_duracao} HORA(S) E {m_duracao} MINUTO(S)")

# se o jogo termina no proximo dia
elif h_inicio > h_termino:
    h_duracao = 24 - h_inicio + h_termino

    # se o minuto de inicio for menor que o minuto de termino
    if m_inicio < m_termino:
        m_duracao = m_termino - m_inicio
        print(f"O JOGO DUROU {h_duracao} HORA(S) E {m_duracao} MINUTO(S)")

    # se o jogo termina no mesmo dia e no mesmo minuto
    if m_inicio > m_termino:
        h_duracao -= 1
        m_duracao = 60 - m_inicio + m_termino
        print(f"O JOGO DUROU {h_duracao} HORA(S) E {m_duracao} MINUTO(S)")

    # se o jogo termina no mesmo dia e no mesmo minuto
    if m_inicio == m_termino:
        m_duracao = m_termino - m_inicio
        print(f"O JOGO DUROU {h_duracao} HORA(S) E {m_duracao} MINUTO(S)")

# se o jogo termina no mesmo dia e no mesmo minuto
if h_inicio == h_termino:

    # se o minuto de inicio for menor que o minuto de termino
    if m_inicio < m_termino:
        h_duracao = 0
        m_duracao = m_termino - m_inicio
        print(f"O JOGO DUROU {h_duracao} HORA(S) E {m_duracao} MINUTO(S)")

    # se o jogo termina no mesmo dia e no mesmo minuto
    if m_inicio > m_termino:
        h_duracao = 23
        m_duracao = 60 - m_inicio + m_termino
        print(f"O JOGO DUROU {h_duracao} HORA(S) E {m_duracao} MINUTO(S)")

    # se o jogo termina no mesmo dia e no mesmo minuto
    if m_inicio == m_termino:
        h_duracao = 24
        m_duracao = 0
        print(f"O JOGO DUROU {h_duracao} HORA(S) E {m_duracao} MINUTO(S)")