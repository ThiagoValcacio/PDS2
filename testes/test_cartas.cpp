#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../testes/doctest.h" //https://github.com/doctest/doctest.git
#include "../include/cartas.hpp"

    Cartas cartas;

TEST_CASE( "Test get_valor_carta get_valor_carta cartas NOME" )

{
    CHECK(cartas.get_valor_carta(40)==14);
    CHECK(cartas.get_valor_carta(39)==13);
    CHECK(cartas.get_valor_carta(38)==12);
    CHECK(cartas.get_valor_carta(37)==11);
    CHECK(cartas.get_valor_carta(36)==10);
    CHECK(cartas.get_valor_carta(35)==10);
    CHECK(cartas.get_valor_carta(34)==10);
    CHECK(cartas.get_valor_carta(33)==10);
    CHECK(cartas.get_valor_carta(32)==9);
    CHECK(cartas.get_valor_carta(31)==9);
    CHECK(cartas.get_valor_carta(30)==9);
    CHECK(cartas.get_valor_carta(29)==9);
    CHECK(cartas.get_valor_carta(28)==8);
    CHECK(cartas.get_valor_carta(27)==8);
    CHECK(cartas.get_valor_carta(26)==8);
    CHECK(cartas.get_valor_carta(25)==7);
    CHECK(cartas.get_valor_carta(24)==7);
    CHECK(cartas.get_valor_carta(23)==7);
    CHECK(cartas.get_valor_carta(22)==7);
    CHECK(cartas.get_valor_carta(21)==6);
    CHECK(cartas.get_valor_carta(20)==6);
    CHECK(cartas.get_valor_carta(19)==6);
    CHECK(cartas.get_valor_carta(18)==6);
    CHECK(cartas.get_valor_carta(17)==5);
    CHECK(cartas.get_valor_carta(16)==5);
    CHECK(cartas.get_valor_carta(15)==5);
    CHECK(cartas.get_valor_carta(14)==5);
    CHECK(cartas.get_valor_carta(13)==4);
    CHECK(cartas.get_valor_carta(12)==4);
    CHECK(cartas.get_valor_carta(11)==3);
    CHECK(cartas.get_valor_carta(10)==3);
    CHECK(cartas.get_valor_carta(9)==3);
    CHECK(cartas.get_valor_carta(8)==3);    
    CHECK(cartas.get_valor_carta(7)==2);
    CHECK(cartas.get_valor_carta(6)==2);
    CHECK(cartas.get_valor_carta(5)==2);
    CHECK(cartas.get_valor_carta(4)==2);
    CHECK(cartas.get_valor_carta(3)==1);
    CHECK(cartas.get_valor_carta(2)==1);
    CHECK(cartas.get_valor_carta(1)==1);
}
TEST_CASE( "Test cartas get_carta" )
{
    CHECK(cartas.get_carta(40)=="4 paus");
    CHECK(cartas.get_carta(39)=="7 copas");
    CHECK(cartas.get_carta(38)=="A espadas");
    CHECK(cartas.get_carta(37)=="7 ouros");
    CHECK(cartas.get_carta(36)=="3 paus");
    CHECK(cartas.get_carta(32)=="2 paus");
    CHECK(cartas.get_carta(28)=="A paus");
    CHECK(cartas.get_carta(25)=="K paus");
    CHECK(cartas.get_carta(21)=="J paus");
    CHECK(cartas.get_carta(17)=="Q paus");
    CHECK(cartas.get_carta(13)=="7 paus");
    CHECK(cartas.get_carta(11)=="6 paus");
    CHECK(cartas.get_carta(7 )=="5 paus");
    CHECK(cartas.get_carta(1 )=="4 ouros");
}   
// 4 paus       40               ##  14
// 7 copas      39               ##  
// A espadas    38               ##  12
// 7 ouros      37               ##  11
// 3333         33 34 35 36      ##  10
// 2222         29 30 31 32      ##  9 
// AAA          26 27 28         ##  8 
// KKKK         22 23 24 25      ##  7 
// JJJJ         18 19 20 21      ##  6 
// QQQQ         14 15 16 17      ##  5 
// 77           12 13            ##  4 
// 6666         8 9 10 11        ##  3 
// 5555         4 5 6 7          ##  2 
// 444          1 2 3            ##  1     
/*  
*       copilar testes
*
*   g++ -c coverage humano.cpp
*   g++ --coverage -o test_humano test_humano.cpp humano.o
*
*       gerar test
*   ./test_humano
*
*       gerar arquivo html
*   gcorv -r . --html --html-details -o relatorio.html
*/