#include "/home/tva/exemplos.pds/git/PDS2/include/humano.hpp"

int Humano::aceita_truco()
{
    int i = 5;
    while (1)
    {
        cout << "o adversário te chamou no truco... digite 0 para correr, 1 para aceitar ou 2 para aumentar a aposta" << endl;
        cin >> i;
        if (i == 1 || i == 0 || i == 2)
        {
            break;
        }
    }
    return i;
}

bool Humano::pede_truco()
{
    int i = 5;
    while (1)
    {
        cout << "para pedir truco, digite 1... para continuar digite 0..." << endl;
        cin >> i;
        if (i == 1 || i == 0)
        {
            break;
        }
    }
    if (i == 1){
        return true;
    } else {
        return false;
    }
}

void Humano::joga_carta()
{
    mostra_cartas();
    int indice = 0;
    while (1)
    {
        cout << "escolha o indice da carta que você deseja jogar...";
        cin >> indice;
        if (indice == 1 || indice == 2 || indice == 3)
        {
            break;
        }
    }
    cout << "carta jogada..." << endl;
    mostra_carta_indice(indice);
    remove_carta(indice-1);
}