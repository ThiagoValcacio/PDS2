#ifndef partida_h
#define partida_h

#include "jogador.hpp"

#include <utility>
#include <unordered_map>
#include <string>
#include <vector>

class Partida {
    public:
        void iniciar_partida();
        Jogador get_dupla(int);
        void set_duplas();
        void jogo(std::vector<int>);
        void vencedor();
        void set_rank_time_1(int);
        void set_rank_time_2(int);
        int get_ponto_t1();
        int get_ponto_t2();
        void clear_all();

    private:
        Jogador a,b,c,d;
        int _rank_t1=0, _rank_t2=0, _ponto_t1=0, _ponto_t2=0;
    };

#endif