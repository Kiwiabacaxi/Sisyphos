""" 

Neste problema, você deverá ler 3 palavras que definem o tipo de animal possível segundo o esquema abaixo, da esquerda para a direita.  Em seguida conclua qual dos animais seguintes foi escolhido, através das três palavras fornecidas.

Entrada

A entrada contém 3 palavras, uma em cada linha, necessárias para identificar o animal segundo a figura acima, com todas as letras minúsculas.
Saída

Imprima o nome do animal correspondente à entrada fornecida.
"""

# entrada
animal1 = input()
animal2 = input()
animal3 = input()

# processamento
if animal1 == 'vertebrado':
    if animal2 == 'ave':
        if animal3 == 'carnivoro':
            animal = 'aguia'
        else:
            animal = 'pomba'
    else:
        if animal3 == 'onivoro':
            animal = 'homem'
        else:
            animal = 'vaca'
else:
    if animal2 == 'inseto':
        if animal3 == 'hematofago':
            animal = 'pulga'
        else:
            animal = 'lagarta'
    else:
        if animal3 == 'hematofago':
            animal = 'sanguessuga'
        else:
            animal = 'minhoca'

# saida
print(animal)