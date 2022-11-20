#include<iostream>
#include<vector>
#include "baralho.hpp"
using namespace carta_truco;

baralho::baralho(){
 std::vector<Naipe>vec_naipes{Copas,Ouros, Espadas, Paus};
 std::vector<Numero>vec_numero{Quatro, Cinco, Seis, Sete, Valete, Dama, Rei, As, Dois, Tres };
 std::vector<Carta>_deck;

 for(auto i:vec_naipes){
    for(auto j: vec_numero){
        _deck.push_back(Carta(i, j));
    }
 }
}

void baralho::exclui_cartas(Carta carta){
 for(int i=0; i<_deck.size();i++){
    if(carta.get_nome() == _deck[i].get_nome()){
        _deck.erase(_deck.begin() + (i-1));
    }
 }

 
}

