#include <iostream>
#include <vector> 
#include "/home/tva/exemplos.pds/git/PDS2/include/cartas.hpp"

Carta::Carta(std::string nome, int _valor) 
{
    _nome_carta = nome;
    valor = _valor;
}

std::string Carta:: get_nome() const
{
    return _nome_carta;
}
