#ifndef BARALHO_HPP
#define BARALHO_HPP

#include <vector>
#include "cartas.hpp"

class Baralho
{
    public:
        std::vector<Carta> _deck;
        void exclui_cartas(int indice);
        int maior_menor_igual(Carta c1, Carta c2);
};

#endif