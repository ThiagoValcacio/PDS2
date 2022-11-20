#include <iostream>
#include <vector> 
#include "cartas.hpp"
using namespace carta_truco;
Carta::Carta(Naipe naipe, Numero numero) {
 _naipe = naipe;
 _numero = numero;
 _nome_carta = std::to_string(naipe) + std::to_string(numero);
}
Numero Carta::get_numero() const {
 return _numero;
}
Naipe Carta::get_naipe() const {
 return _naipe;
}
std::string Carta:: get_nome() const{
 return _nome_carta;
}

