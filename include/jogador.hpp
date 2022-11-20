#ifndef JOGADOR_H
#define JOGADOR_H
#include <iostream>
#include "cartas.hpp"
#include <vector>
using namespace std;

class Jogador
{
    public:
        void add_pontos(int _pontos);
        int get_pontos();
        string get_nome();
        vector <Cartas> get_cartas();
        void add_nome(string _nome);
        virtual int aceita_truco();
        virtual bool pede_truco();
        virtual void joga_carta();
        void add_cartas(Cartas carta);
        void remove_carta(int indice);
        void mostra_cartas();
        void mostra_carta_indice(int indice);
    private:
        vector <Cartas> mao;
        int pontos;
        string nome;
};


#endif