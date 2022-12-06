#include "../include/jogador.hpp"
#include "../include/partida.hpp"
#include "../include/menu.hpp"

#include <iostream>
#include <vector>

using namespace std;


int main(){

    cout << "olá!! vamos comecar a partida"<<endl;
    Partida jogo;
    Menu aux;
    jogo.set_duplas();          // definindo as duplas 
    jogo.iniciar_partida();   

    while (jogo.rodada_ganha_t1()<3 && jogo.rodada_ganha_t2()<3)
    {
        //gerar cartas na mão do jogador
        jogo.jogo(aux._ordem);           // faz o jogo
        cout <<"jogo"<<endl;
        jogo.vencedor();                              //
        aux._ordem.emplace_back(*aux._ordem.begin());  // trocando ordem de quem começa
        aux._ordem.erase(aux._ordem.begin());
    }
}