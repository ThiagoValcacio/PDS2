#ifndef _jogador_H__
#define _jogador_H__


#include <set>
#include <string>

class Jogador{
    public:
        void inicializar(int,int,int);
        void ver_carta();
        int  jogar_carta(int i);
        void set_nome(std::string);
        int tamanho_mao();
        std::string get_nome();

    private:
        std::set<int>_mao; 
        std::string _nome;
};

#endif