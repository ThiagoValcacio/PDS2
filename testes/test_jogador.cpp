#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../testes/doctest.h" //https://github.com/doctest/doctest.git
#include "../include/jogador.hpp"

#include <set>
#include <iostream>
#include <string>

TEST_CASE( "Test inicializar, jogar_ca e tamanho_mao" )
{   
    Jogador jogador;
    CHECK(jogador.tamanho_mao()==0);
    jogador.inicializar(40,10, 1);
    CHECK(jogador.tamanho_mao()==3);
    jogador.inicializar(21, 2, 4);
    CHECK(jogador.tamanho_mao()==3);
    jogador.jogar_carta(1);
    CHECK(jogador.tamanho_mao()==2);
    jogador.jogar_carta(1);
    CHECK(jogador.tamanho_mao()==1);
    jogador.jogar_carta(1);
    CHECK(jogador.tamanho_mao()==0);
}
TEST_CASE("test get e set nome")
{
    Jogador jogador;
    jogador.set_nome("Tasso");
    CHECK(jogador.get_nome()=="Tasso");
    jogador.set_nome("ossaT");
    CHECK(jogador.get_nome()=="ossaT");
    jogador.set_nome("Augusto");
    CHECK(jogador.get_nome()=="Augusto");
}