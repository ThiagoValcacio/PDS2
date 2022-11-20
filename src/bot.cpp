#include "/home/tva/exemplos.pds/git/PDS2/include/bot.hpp"

int Bot::aceita_truco()
{
    int v1 = 0;
    srand (time(NULL));
    v1 = rand() % 100;
    if (v1 < 47){
        //corre
        return 0;
    } else if (v1 >= 47 && v1 < 94){
        //aceita
        return 1;
    } else {
        //aumenta a aposta
        return 2;
    }
}

bool Bot::pede_truco()
{
    int v1 = 0;
    srand (time(NULL));
    v1 = rand() % 100;
    if (v1 > 80){
        return true;
    } else {
        return false;
    }
}

void Bot::joga_carta()
{
    int v1 = 0;
    srand (time(NULL));
    v1 = rand() % 3;
    int indice = v1;
    cout << "carta jogada..." << endl;
    mostra_carta_indice(indice+1);
    remove_carta(indice);
}