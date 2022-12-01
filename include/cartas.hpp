#ifndef CARTAS_HPP
#define CARTAS_HPP
#include <string>
#include <iostream>
#include <vector> 

class Carta 
{
    public:
        int valor;
        std::string nome_carta;
        Carta(std::string _nome, int _valor);
        std::string get_nome();
        int get_valor();
        void imprime_carta();
};

#endif