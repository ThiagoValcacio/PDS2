#ifndef BOT_H
#define BOT_H
#include "jogador.hpp"

class Bot:public Jogador
{
    public:
        int aceita_truco() override;
        bool pede_truco() override;
        void joga_carta() override;
};
#endif