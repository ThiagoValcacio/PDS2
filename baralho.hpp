#ifndef BARALHO_HPP
#define BARALHO_HPP

#include<vector>
#include<string>
#include "cartas.cpp"

class baralho{
private:
std::vector<Carta>_deck;
public:
baralho();
void exclui_cartas(Carta carta);
bool maior(Carta carta1, Carta carta2);

};

#endif
