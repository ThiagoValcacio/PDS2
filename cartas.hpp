#ifndef CARTAS_HPP
#define CARTAS_HPP
#include <string>

 class Carta {
 private:
 std::string _nome;
 int _valor;

 public:
 Carta(std::string nome, int valor);
 int get_valor() const;
 std::string get_nome() const;

 };
 
#endif
