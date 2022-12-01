#include <iostream>
#include "/home/tva/exemplos.pds/git/PDS2/include/baralho.hpp"
#include <vector>
using namespace std;

int main ()
{
    Baralho *baralho = new Baralho;
    baralho->_deck.push_back(Carta("Quatro de Paus - Zap", 13));
    baralho->_deck.push_back(Carta("Seis de Copas", 12));
    baralho->_deck.push_back(Carta("As de Espadas - Aspadilha", 11));
    baralho->_deck.push_back(Carta("Seis de Ouros", 10));
    baralho->_deck.push_back(Carta("Três de Paus", 9));
    baralho->_deck.push_back(Carta("Três de Espadas", 9));
    baralho->_deck.push_back(Carta("Três de Ouros", 9));
    baralho->_deck.push_back(Carta("Três de Copas", 9));
    baralho->_deck.push_back(Carta("Dois de Paus", 8));
    baralho->_deck.push_back(Carta("Dois de Espadas", 8));
    baralho->_deck.push_back(Carta("Dois de Ouros", 8));
    baralho->_deck.push_back(Carta("Dois de Copas", 8));
    baralho->_deck.push_back(Carta("As de Paus", 7));
    baralho->_deck.push_back(Carta("As de Ouros", 7));
    baralho->_deck.push_back(Carta("As de Copas", 7));
    baralho->_deck.push_back(Carta("Rei de Paus", 6));
    baralho->_deck.push_back(Carta("Rei de Espadas", 6));
    baralho->_deck.push_back(Carta("Rei de Ouros", 6));
    baralho->_deck.push_back(Carta("Rei de Copas", 6));
    baralho->_deck.push_back(Carta("Dama de Paus", 5));
    baralho->_deck.push_back(Carta("Dama de Espadas", 5));
    baralho->_deck.push_back(Carta("Dama de Ouros", 5));
    baralho->_deck.push_back(Carta("Dama de Copas", 5));
    baralho->_deck.push_back(Carta("Sete de Espadas", 4));
    baralho->_deck.push_back(Carta("Sete de Paus", 4));
    baralho->_deck.push_back(Carta("Seis de Paus", 3));
    baralho->_deck.push_back(Carta("Seis de Espadas", 3));
    baralho->_deck.push_back(Carta("Seis de Ouros", 3));
    baralho->_deck.push_back(Carta("Seis de Copas", 3));
    baralho->_deck.push_back(Carta("Cinco de Paus", 2));
    baralho->_deck.push_back(Carta("Cinco de Espadas", 2));
    baralho->_deck.push_back(Carta("Cinco de Ouros", 2));
    baralho->_deck.push_back(Carta("Cinco de Copas", 2));
    baralho->_deck.push_back(Carta("Quatro de Espadas", 1));
    baralho->_deck.push_back(Carta("Quatro de Ouros", 1));
    baralho->_deck.push_back(Carta("Quatro de Copas", 1));
    
    for (auto it: baralho->_deck)
    {
        it.imprime_carta();
    }

    

    return 0;
}