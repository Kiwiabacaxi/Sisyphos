""" Devido às constantes estiagens que aconteceram nos últimos tempos em algumas regiões do Brasil, o governo federal criou um órgão para a avaliação do consumo destas regiões com finalidade de verificar o comportamento da população na época de racionamento. Este órgão responsável irá pegar algumas cidades (por amostragem) e verificará como está sendo o consumo de cada uma das pessoas da cidade e o consumo médio de cada cidade por habitante.

Entrada
A entrada contém vários casos de teste. A primeira linha de cada caso de teste contém um inteiro N (1 ≤ N ≤ 1*106), indicando a quantidade de imóveis. As N linhas contém um par de valores X (1 ≤ X ≤ 10) e Y (1 ≤ Y ≤ 200), indicando a quantidade de moradores de cada imóvel e o respectivo consumo total de cada imóvel (em m3). Com certeza, nenhuma residência consome mais do que 200 m3 por mês. O final da entrada é representado pelo número zero.

Saída
Para cada entrada, deve-se apresentar a mensagem “Cidade# n:”, onde n é o número da cidade seguindo a sequência (1, 2, 3, ...) e em seguida deve-se listar, por ordem ascendente de consumo, a quantidade de pessoas seguido de um hífen e o consumo destas pessoas, arredondando o valor para baixo. Na terceira linha da saída deve-se mostrar o consumo médio por pessoa da cidade, com 2 casas decimais sem arredondamento, considerando o consumo real total. Imprimir uma linha em branco entre dois casos de teste consecutivos. No fim da saída não deve haver uma linha em branco. """

N = int(input())
while N != 0:
    # Entrada de dados
    lista_consumo = []
    for i in range(N):
        entrada = input().split(' ')
        X, Y = entrada
        X, Y = int(X), int(Y)
        lista_consumo.append([X, Y])
    
    # Processamento
    lista_consumo.sort(key=lambda x: x[1])
    soma = 0
    for i in range(N):
        soma += lista_consumo[i][0] * lista_consumo[i][1]
    media = soma / N
    
    # Saída de dados
    print('Cidade# {}:\n'.format(N))
    for i in range(N):
        print('{}-{}'.format(lista_consumo[i][0], lista_consumo[i][1]))
    print('Consumo medio: {:.2f} m3.'.format(media))
    
    N = int(input())
    if N != 0:
        print(f'\n')

        