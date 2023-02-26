""" Era uma vez um reino muito pacífico chamado Nlogônia. Naquela época, Poly, o Sapateiro, podia vir ao país e viajar livremente de cidade em cidade sem nenhuma preocupação. Essa tarefa era fácil, já que todas cidades na Nlogônia tinham uma estrada direta para todas outras cidades no país. Ele podia então viajar facilmente por todo país visitando cada cidade exatamente uma vez e consertando os sapatos de todos.

Mas isso não é mais verdade. Os tempos mudaram e a guerra chegou à Nlogônia. A época em que as pessoas podiam viajar livremente acabou.

Confederações identificadas por cores foram formadas entre as cidades por todo o país, e agora cada cidade pertence a pelo menos uma e no máximo duas confederações. Ao tentar entrar em uma cidade, você deve dar ao guarda de fronteira um tíquete de uma das confederações a que essa cidade pertence. Ao sair da cidade, você recebe um tíquete da outra confederação a que a cidade pertence (diferente do que você deu ao entrar) ou da mesma confederação se a cidade pertencer a apenas uma.

Como Poly, o Sapateiro, é amigo de longa data da Nlogônia, ele pode escolher o tíquete e a cidade que ele deseja entrar como a primeira cidade do país, mas depois disso ele deve obedecer as regras da confederação. Ele quer fazer a mesma rotina que ele fazia antes, visitando cada cidade exatamente uma vez em Nlogônia, mas agora não é fácil para ele fazer isso, apesar de ele poder escolher onde começar sua jornada.

Por exemplo, suponha que existam quatro cidades, númeradas de 0 a 3. A cidade 0 pertence às confederações vermelha e verde; a cidade 1 pertence apenas à vermelha; a cidade 2 pertence à verde e à amarela; e a cidade 3 pertence à azul e à vermelha. Se Poly, o Sapateiro, escolher começar na cidade 0, ele pode entrar nela carregando tanto o tíquete vermelho quanto o amarelo e sair recebendo o outro. Caso ele decida escolher o tíquete vermelho, ele vai sair com um tíquete verde, e então ele pode ir apenas para a cidade 2. Ao sair da cidade 2 ele recebe o tíquete amarelo e agora não pode ir a mais nenhum lugar. Se ele tivesse escolhido o tíquete verde como primeiro ele teria recebido o vermelho ao sair, e então poderia viajar para as cidade 1 ou 3. Se ele escolher a cidade 3, ao sair ele receberá o tíquete azul e novamente não poderá ir a lugar algum. Se ele escolher a cidade 1, ele recebe o tíquete vermelho de novo ao sair (a cidade 1 pertence apenas à confederação vermelha) e pode viajar apenas para a cidade 3 e nunca chegará à cidade 2. Portanto, não é possível visitar cada cidade exatamente uma vez começando na cidade 0. É possível, entretanto, começando na cidade 2 com um tíquete amarelo, sair da cidade com um tíquete verde, então visitar a cidade 0, sair com um tíquete vermelho, então visitar a cidade 1, sair com um tíquete vermelho novamente e, por fim, visitar a cidade 3.

Como você pode ver, se tornou realmente difícil para Poly, o Sapateiro, cumprir a tarefa, então ele pede que você o ajude. Ele quer saber se é possível escolher uma cidade para começar tal que ele possa visitar todas cidades da Nlogônia uma vez.

Você pode ajudar Poly, o Sapateiro?

Entrada
A entrada contém diversos casos de teste. A primeira linha de um caso de teste contém dois inteiros N e C, separados por um espaço, indicando respectivamente o número de cidades (1 <= N <= 500) e confederações (1 <= C <= 100) no país. Cada uma das próximas C linhas descreve uma confederação. Ela começa com um inteiro K (0 <= K <= N) e então K inteiros representando as cidades que pertencem a essa confederação. Todos inteiros são separados por espaços simples e cidades são numeradas de 0 a N - 1. Cada cidade vai aparecer pelo menos uma vez e no máximo duas vezes e nenhuma cidade vai ser repetida na mesma confederação.

O final da entrada é indicado por uma linha contendo dois zeros separados por um espaço.

Saída
Para cada caso de teste na entrada, seu programa deverá imprimir uma única linha, contendo o inteiro -1 caso não seja possível satisfazer os requisitos ou um inteiro representando a cidade onde Poly, o Sapateiro, pode começar sua jornada. Se existir mais de uma resposta, imprima a menor. """

# Entrada
while True:
