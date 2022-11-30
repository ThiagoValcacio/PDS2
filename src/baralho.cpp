#include<iostream>
#include<vector>
#include "/home/tva/exemplos.pds/git/PDS2/include/baralho.hpp"

Baralho::Baralho()
{
    //Inserindo Manilhas em ordem
    _deck.push_back(Carta("Quatro de Paus - Zap", 13));
    _deck.push_back(Carta("Seis de Copas", 12));
    _deck.push_back(Carta("As de Espadas - Aspadilha", 11));
    _deck.push_back(Carta("Seis de Ouros", 10));
    _deck.push_back(Carta("Três de Paus", 9));
    _deck.push_back(Carta("Três de Espadas", 9));
    _deck.push_back(Carta("Três de Ouros", 9));
    _deck.push_back(Carta("Três de Copas", 9));
    _deck.push_back(Carta("Dois de Paus", 8));
    _deck.push_back(Carta("Dois de Espadas", 8));
    _deck.push_back(Carta("Dois de Ouros", 8));
    _deck.push_back(Carta("Dois de Copas", 8));
    _deck.push_back(Carta("As de Paus", 7));
    _deck.push_back(Carta("As de Ouros", 7));
    _deck.push_back(Carta("As de Copas", 7));
    _deck.push_back(Carta("Rei de Paus", 6));
    _deck.push_back(Carta("Rei de Espadas", 6));
    _deck.push_back(Carta("Rei de Ouros", 6));
    _deck.push_back(Carta("Rei de Copas", 6));
    _deck.push_back(Carta("Dama de Paus", 5));
    _deck.push_back(Carta("Dama de Espadas", 5));
    _deck.push_back(Carta("Dama de Ouros", 5));
    _deck.push_back(Carta("Dama de Copas", 5));
    _deck.push_back(Carta("Sete de Espadas", 4));
    _deck.push_back(Carta("Sete de Paus", 4));
    _deck.push_back(Carta("Seis de Paus", 3));
    _deck.push_back(Carta("Seis de Espadas", 3));
    _deck.push_back(Carta("Seis de Ouros", 3));
    _deck.push_back(Carta("Seis de Copas", 3));
    _deck.push_back(Carta("Cinco de Paus", 2));
    _deck.push_back(Carta("Cinco de Espadas", 2));
    _deck.push_back(Carta("Cinco de Ouros", 2));
    _deck.push_back(Carta("Cinco de Copas", 2));
    _deck.push_back(Carta("Quatro de Espadas", 1));
    _deck.push_back(Carta("Quatro de Ouros", 1));
    _deck.push_back(Carta("Quatro de Copas", 1));
}

int Baralho::maior_menor_igual(Carta carta1, Carta carta2)
{
    
}
