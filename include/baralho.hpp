#ifndef BARALHO_HPP
#define BARALHO_HPP

#include<vector>
#include<string>
#include "/home/tva/exemplos.pds/git/PDS2/src/cartas.cpp"

class Baralho
{
    private:
        std::vector<Carta> _deck;
    public:
        Baralho();
        void exclui_cartas(int indice);
        void adiciona_cartas(Carta carta);
        int maior_menor_igual(Carta c1, Carta c2);
};

#endif