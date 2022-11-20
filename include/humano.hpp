#ifndef HUMANO_H
#define HUMANO_H
#include "jogador.hpp"

class Humano:public Jogador
{
    public:
        int aceita_truco() override;
        bool pede_truco() override;
        void joga_carta() override;
};
#endif