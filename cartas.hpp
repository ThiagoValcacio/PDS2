#ifndef CARTAS_HPP
#define CARTAS_HPP
#include <string>
 namespace carta_truco{
 enum Naipe {Copas, Ouros, Espadas, Paus};
 enum Numero{Quatro, Cinco, Seis, Sete, Valete, Dama, Rei, As, Dois, Tres};
 class Carta {
 private:
 Naipe _naipe;
 Numero _numero;
 std::string _nome_carta;
 public:
 Carta(Naipe naipe, Numero numero);
 Numero get_numero() const;
 Naipe get_naipe() const;
 std::string get_nome() const;
 };
 }
#endif
