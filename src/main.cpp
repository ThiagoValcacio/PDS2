#include "../include/jogador.hpp"
#include "../include/partida.hpp"
#include "../include/menu.hpp"

#include <iostream>
#include <vector>

using namespace std;


int main(){

    cout << "olá!! vamos comecar a partida"<<endl;
    Partida jogo;
    Menu menu;
    menu.menu_inicial();
    jogo.set_duplas();          // definindo as duplas 
    jogo.iniciar_partida();   
    int truco_t1=0,truco_t2=0;
    while(truco_t2<12||truco_t1<12){
        while (jogo.rodada_ganha_t1()<3 && jogo.rodada_ganha_t2()<3)
        {
            //gerar cartas na mão do jogador
            jogo.jogo(menu._ordem);           // faz o jogo
            cout <<"RESULTADOS..."<<endl;
            jogo.vencedor();                              //
            menu._ordem.emplace_back(*menu._ordem.begin());  // trocando ordem de quem começa
            menu._ordem.erase(menu._ordem.begin());
        }
        if(jogo.rodada_ganha_t1()>jogo.rodada_ganha_t2()){
            cout << "Dupla 1 ganhou o tento"<<endl;
            truco_t1 +=2;
        }else {
            cout << "Dupla 2 ganhou o tento"<<endl;
            truco_t1 +=2;
            }
    }
    if(truco_t1>truco_t2){
        cout<<"Dupla 1 ganhou o jogo"<<endl;
    }else cout<<"Dupla 2 ganhou o jogo"<<endl;

    return 0;
}