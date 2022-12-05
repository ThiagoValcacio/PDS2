#include "../include/jogador.hpp"
#include "../include/partida.hpp"


#include <iostream>
#include <vector>

using namespace std;


int main(){

    cout << "olá!! vamos comecar a partida"<<endl;
    Partida jogo;
    jogo.set_duplas();          // definindo as duplas 
    jogo.iniciar_partida();   
    vector<int> ordem ={1,2,3,4}; 
    while (jogo.get_ponto_t1()<3 && jogo.get_ponto_t2()<3)
    {
        //gerar cartas na mão do jogador
        jogo.jogo(ordem);           // faz o jogo
        cout <<"jogo"<<endl;
        jogo.vencedor();                              //
        ordem.emplace_back(*ordem.begin());  // trocando ordem de quem começa
        ordem.erase(ordem.begin());
    }
}