#ifndef CARTAS_HPP
#define CARTAS_HPP
#include <string>

class Carta 
{
    private:
        std::string _nome_carta;
        int valor;
    public:
        Carta(std::string nome, int _valor);
        std::string get_nome() const;
};

#endif