#include "../include/cartas.hpp"
#include "../include/baralho.hpp"
#include "../include/jogador.hpp"


#include <set>
#include <iostream>
#include <string>

    void Jogador::inicializar(int a,int b,int c){//receber cartas
        _mao.clear();
        _mao = {a,b,c};
    }
    void Jogador::ver_carta(){
    int i = 1;
    for(auto it: _mao)
    {
    Cartas c;
    std::cout <<"Carta ( "<<i<<" ): "<< c.get_carta(it) <<std::endl;
    ++i;
    }
    }

    int Jogador::jogar_carta(int i){// retorna uma carta de 1-40
        std::set<int>::iterator it = _mao.begin();  //pega carta na posição / -1 é para comecar no 0
        --i;
        for(int itt =0;itt<i;++itt){
            ++it;
        }
        int carta = *it;        // pega o valor da carta 
        _mao.erase(it);         // descarta
        return carta; 
    }

    void Jogador::set_nome(std::string nome){
        _nome = nome;  
    }

    std::string Jogador::get_nome(){
        return _nome;
    }
    int Jogador::tamanho_mao(){
        return _mao.size();
    }

    int Jogador::maior_carta(){//maior_carta()=ultima carta da mao
    //preciso retornar o ponto da maior carta
    if(_mao.size()==0)throw std::invalid_argument("sem cartas");
        Cartas c;
        std::set<int>::iterator it = _mao.begin();
        int tamanho = _mao.size()-1; //
        for(int itt = 0;itt<tamanho;itt++){++it;};
        return c.get_valor_carta(*it);
    }