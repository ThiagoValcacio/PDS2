#include "../testes/doctest-master/doctest/doctest.h" //https://github.com/doctest/doctest.git
//#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../src/humano.cpp" 

TEST_CASE( "Test humano" )
{
    CHECK( 1==0);
}
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