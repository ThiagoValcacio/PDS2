#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../testes/doctest.h" //https://github.com/doctest/doctest.git
#include "../include/baralho.hpp"

//#include "bot.cpp" 
Baralho baralho;
TEST_CASE( "test pegar carta" )
{
    baralho.embaralhar();
        int carta;
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
        carta = baralho.pegar_carta();
        CHECK(carta > 0);
        CHECK(carta <= 40);
}
TEST_CASE("teste de exepion "){
    CHECK_THROWS(baralho.pegar_carta());
}