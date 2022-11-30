#include <iostream>
#include <vector> 
#include "cartas.hpp"

Carta::Carta(std::string nome, int valor) {
 _nome = nome;
 _valor = valor;
}
std::string Carta::get_nome() const {
 return _nome;
}
int Carta::get_valor() const {
 return _valor;
}


