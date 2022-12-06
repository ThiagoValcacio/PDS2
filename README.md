## PDS2 - TP

# **TRUCO MINEIRO**

O Truco Mineiro deve-se jogar individual, em duplas/pares ou trios (no caso de duplas ou trios, os jogadores devem alternar suas posições na mesa entre os parceiros e adversários).


Quem faz doze pontos (tentos) primeiro vence. O jogador/dupla/trio ganha a queda quando vence dois jogos.


Os participantes recebem três cartas a cada mão/rodada e disputam uma melhor de três. Uma carta é colocada na mesa por rodada, e a mais valiosa vence a vez.


Ao ganhar duas rodadas, o jogador/dupla/trio recebe os pontos da mão.


Em caso de empate na primeira rodada, a segunda decide o vencedor da mão. Em caso de empate na segunda ou terceira rodada, ganha quem venceu a primeira.


Em raros casos de empate em todas as rodadas, ninguém ganha os pontos da mão.


**Pontuação no Truco Mineiro**

- Cada mão começa valendo 2 pontos;
- No decorrer das rodadas os jogadores, na sua vez de jogar, podem pedir truco, aumentando o valor da mão para 4 pontos;
- Os adversários podem aceitar, rejeitar ou pedir 6. Quando rejeitam, a mão termina e quem pediu truco ganha 2 pontos. Caso o adversário peça 6, quem pediu truco tem as mesmas possibilidades, aceitar, rejeitar, ou aumentar para 10;
- Os aumentos de apostas podem chegar até 12 e, em seguida, queda.

**Mão de Dez**

É quando uma das duplas atinge 10 pontos. Nesta mão, os jogadores da dupla/trio com 10 pontos olham as cartas um do outro antes de jogar, decidindo se vão jogar ou não a mão.

Se jogarem, a mão vale quatro pontos. Se rejeitam, seus adversários ganham dois pontos.


**Mão de Ferro**

Em caso de empate em 10 a 10, as duas duplas disputam a mão às cegas. As cartas permanecem viradas de cabeça para baixo, ninguém pode ver suas próprias cartas.

Quem vencer a mão, ganha o jogo.

 
**Baralho**

O truco mineiro é jogado com 40 cartas, retirando os coringas, 8, 9 e 10. A sequência das cartas, independente do naipe, na ordem de mais valiosa para menos valiosa: 3 > 2 > A > k > J > Q > 7 > 6 > 5 > 4.

Manilhas são as cartas com maior valor no Truco. No Truco Mineiro, as manilhas são fixas.

O zap, 4 de paus, é a carta mais forte do Truco. Da mais valiosa para a menos valiosa, as manilhas no truco mineiro são: 4 de paus (Zap) > 7 de copas > A de espadas (Espadilha) > 7 de ouros.

## O CÓDIGO
A fim de modularizar o código e facilitar a compreensão e o diálogo proveitoso de diferentes pessoas, o projeto foi dividido em três pastas além do Makefile e do arquivo README.md. A primeira pasta, "include", contém os arquivos .hpp, também conhecidos como contratos dos TADs (Tipos Abstratos de Dados). Dessa forma, mantém-se os princípios de modularização e boas práticas do código. Já na pasta "src", foram descritos os métodos previamente citados nos contratos, com cada arquivo .cpp referente a um respectivo arquivo .hpp, além de um arquivo "main.cpp", responsável pela junção das partes já descritas.

**CARTAS**

As cartas, ao passar pelo processo de abstração, foram representadas por meio de um std::unordered_map<int,std::pair<int,std::string>>, em que cada carta tinha um número associado em int (de 1 a 40), bem como seu valor no jogo em int(cartas com o mesmo valor no truco mineiro como um 3 de copas e um 3 de ouros por exemplo receberam o mesmo valor) e um símbolo associado, no caso uma string com o número e o desenho do naipe como 7♥. Além disso, a classe cartas possui dois métodos gat_valor_carta e get_carta, que retornam, a partir do número de 1-40 associado a cada carta seu respectivo valor e símbolo.

**BARALHO**

O baralho, por sua vez, não foi feito pelo processo de herança, mas como um set<int> que armazenava a chave das cartas (1-40), com funções de embaralhar (retorna um baralho novo, necessário após cada rodada terminar, em que todos os números de 1-40 retornavam ao set), tamanho_baralho (retorna o tamanho do set utilizando .size()) e get_carta (retorna a chave de um número do set, de forma aleatória, e em seguida o apaga do conjunto).

**JOGADOR**

O jogador contém um valor de string referente ao seu nome e um set<int>, com os valores que representam as cartas que estão em sua mão a cada rodada. Além dos métodos triviais como set_nome, get_nome e tamanho_mao, tem uma função para incializar a mao (apaga valores anteriores e recebe três valores do tipo int referentes a chave das cartas recebidas), uma para ver cartas, que imprime seu símbolo com um número associado (de 1 a 3, referente a posição na mão) e uma para jogar a carta (retorna o valor da carta escolhida e a tira do set _mão. Por fim, foi adicionada a função maior_carta, que retorna o valor da maior carta que o referido jogador possui na mão.

**PARTIDA**

A partida é formada por quatro jogadorers, além de dois rodada_ganha (t1 e t2), dois pontos (t1 e t2) e uma rodada, que armazenam valores de inteiros, inicializados em 0. Como métodos não triviais como gets e sets, há uma função vencedor, que verifica quem lançou a carta de maior valor na rodada e adiciona pontos à respectiva equipe. Há também a função de iniciar partida e clear_all, que retorna os valores de ranks, pontos e rodadas para o inicial, isto é, 0.

**TRATAMENTO DE EXCESSÕES**
 
Em uma das funções da classe baralho, foi feito um tratamento de excessão, em que caso o baralho apresentado estivesse vazio, isto é, sem valores em seu conjunto set, o programa retorna em forma de cerror "sem baralho".
Na função get_dupla, da classe partida, que recebe um parâmetro de int para identificar a dupla, no caso de algum número diferente de 1, 2, 3 ou 4, o programa retorna a mensagem de erro "dupla inexistente (fora do 1,2,3,4)".
