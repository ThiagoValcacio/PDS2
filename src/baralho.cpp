#include "/home/tva/exemplos.pds/git/PDS2/include/baralho.hpp"

int Baralho::maior_menor_igual(Carta carta1, Carta carta2)
{
    //1 é maior, 0 é menor, 2 é empate
    if (carta1.get_valor() > carta2.get_valor()) {
        return 1;
    } else if (carta1.get_valor() < carta2.get_valor()) {
        return 0;
    } else {
        return 2;
    }
}