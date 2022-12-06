#ifndef _partida_H__
#define _partida_H__

#include "jogador.hpp"
//#include "bot.hpp"

#include <utility>
#include <unordered_map>
#include <string>
#include <vector>

class Partida {
    public:
        void iniciar_partida();
        Jogador& get_dupla(int);
        void set_duplas();
        void vencedor();
        void set_ponto_time_1(int);
        void set_ponto_time_2(int);
        int rodada_ganha_t1();
        int rodada_ganha_t2();
        void clear_all();

        void jogo(std::vector<int>);

    private:
        Jogador a,b,c,d;
        //Bot e,f,g,h;

        int _maior_carta_t1=0, _maior_carta_t2 =0, _rodada_ganha_t1 = 0, _rodada_ganha_t2 = 0,rodada=0;
    };

#endif