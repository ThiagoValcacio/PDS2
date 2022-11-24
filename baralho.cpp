#include<iostream>
#include<vector>
#include "baralho.hpp"
using namespace carta_truco;

baralho::baralho(){
 std::vector<Naipe>vec_naipes{Copas,Ouros, Espadas, Paus};
 std::vector<Numero>vec_numero{Tres, Dois, As, Rei, Valete, Dama, Sete, Seis, Cinco, Quatro};
 std::vector<Carta>_deck;

//Inserindo Manilhas em ordem 
 _deck.push_back(Carta(Quatro, Paus));
 _deck.push_back(Carta(Sete, Copas));
 _deck.push_back(Carta(As, Espadas));
 _deck.push_back(Carta(Sete, Ouros));


    for(auto j: vec_numero){
       
        if(j == As){
            _deck.push_back(Carta(j, Copas));
            _deck.push_back(Carta(j, Ouros));
            _deck.push_back(Carta(j, Paus));

        } else if(j == Quatro){
            _deck.push_back(Carta(j, Ouros));
            _deck.push_back(Carta(j, Copas));
            _deck.push_back(Carta(j, Espadas));
        }else if(j == Sete){
            _deck.push_back(Carta(j, Paus));
            _deck.push_back(Carta(j, Espadas));
        } else  for(auto k: vec_naipes){
            _deck.push_back(Carta(j, k));
        }
    }
 
}

std::string baralho::E_maior(Carta carta1, Carta carta2){
    int parametro1 = 0;
    int parametro2 = 0;
    for(int i=0; i<_deck.size();i++){
        
        if(_deck[i].get_nome() == carta1.get_nome()){
                parametro1 = i;
            }
            if(_deck[i].get_nome() == carta2.get_nome()){
                parametro2 = i;
            }
        }
        if(carta1.get_numero() != carta2.get_numero()){
            if (parametro1 < parametro2){
                return "Maior";
            } if (parametro1 > parametro2){
                return "Menor";
            }
        } else if (carta1.get_numero() != Quatro || Sete || As && carta2.get_numero() != Quatro || Sete || As){
            return "Igual";
        } else if (carta1.get_numero() == Quatro && carta1.get_naipe() == Paus){
            return "Maior";
        } else if (carta2.get_numero() == Quatro && carta2.get_naipe() == Paus){
            return "Menor";
        }else return "Igual";
        if(carta1.get_numero() == carta2.get_numero()){
        if (carta1.get_numero() == As && carta1.get_naipe() == Espadas){
            return "Maior";
        } else if (carta2.get_numero() == As && carta2.get_naipe() == Espadas){
            return "Menor";
        } else return "Igual";
        }
        if(carta1.get_numero() == carta2.get_numero()){
        if (carta1.get_numero() == Sete && carta1.get_naipe() == Copas){
            return "Maior";
        } else if (carta2.get_numero() == Sete && carta2.get_naipe() == Copas){
            return "Menor";
        } else if (carta1.get_numero() == Sete && carta1.get_naipe() == Ouros){
            return "Maior";
        } else if (carta2.get_numero() == Sete && carta2.get_naipe() == Ouros){
            return "Menor";
            
        } else return "Igual";
 
}

