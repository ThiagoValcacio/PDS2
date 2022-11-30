#ifndef RODADA_H
#define RODADA_H
#include "baralho.cpp"

class Rodada : public Baralho{

private:

vector<Cartas> carta;
vector<Jogadores> jogador;

public:

get_vencedor();
get_primeiro();
canga();

};

#endif
