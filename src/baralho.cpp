#include "../include/baralho.hpp"


#include <set>
#include <random>
#include <iostream>


    void Baralho::embaralhar(){//set carta
            _baralho.clear();
            _baralho = {1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10,
                        11,12,13,14,15,16,17,18,19,20,
                        21,22,23,24,25,26,27,28,29,30,
                        31,32,33,34,35,36,37,38,39,40};
    }
    int Baralho::tamanho_baralho(){
        return _baralho.size();
    }
    int Baralho::get_carta(){
        if(_baralho.size()!=0){
        std::random_device rd; 
        std::mt19937 mt(rd());
        std::uniform_int_distribution<int> dist(0,_baralho.size());
        std::set<int>::iterator it =_baralho.begin();
        int carta_ale = dist(mt);
        for(int i=1;i<carta_ale;i++){++it;}
        carta_ale = *it;
        _baralho.erase(it);
        return carta_ale;
        }else throw std::invalid_argument("sem baralho");
    }