#ifndef _jogador_H__
#define _jogador_H__


#include <set>
#include <string>

class Jogador{
    public:
        void inicializar(int,int,int);
        void ver_carta();
        virtual int  jogar_carta(int i);
        virtual void set_nome(std::string);
        int tamanho_mao();
        std::string get_nome();
        int maior_carta();

    protected:
        std::set<int>_mao; 
        std::string _nome;
};

#endif