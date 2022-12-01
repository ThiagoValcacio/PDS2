#include "/home/tva/exemplos.pds/git/PDS2/include/cartas.hpp"

Carta::Carta(std::string _nome, int _valor) 
{
    nome_carta = _nome;
    valor = _valor;
}

std::string Carta::get_nome()
{
    return nome_carta;
}

int Carta::get_valor()
{
    return valor;
}

void Carta::imprime_carta()
{
    std::cout << get_nome() << std::endl;
}