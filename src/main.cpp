#include "../include/jogador.hpp"
#include "../include/partida.hpp"


#include <iostream>
#include <vector>

using namespace std;


int main(){
    cout << "olá!! vamos comecar a partida"<<endl;
    Partida jogo;
    jogo.set_duplas();          // definindo as duplas 
    vector<int> ordem ={{1},{2},{3},{4}};

    while (jogo.get_ponto_t1()<3||jogo.get_ponto_t2()<3)
    {
        cout << "entrou no while" << endl;
        jogo.iniciar_partida();    //gerar cartas na mão do jogador
        cout <<"iniciou"<<endl;
        jogo.jogo(ordem);           // faz o jogo
        cout <<"jogo"<<endl;
        jogo.vencedor();                              //
        ordem.emplace(ordem.begin(), ordem.back());     // trocando ordem de quem começa
        ordem.pop_back(); 

    }
    

}