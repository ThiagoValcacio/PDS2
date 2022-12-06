#include "../include/menu.hpp"
using namespace std;
#include <vector>

Menu::Menu()
{
    cout << "################################################################" << endl;
    cout << "Voce deseja jogar uma partida 2x2 contra humanos ou contra robos?" << endl;
    int i = 3;
    while(1)
    {
        cout << "Digite 1 para jogar contra amigos, 0 para jogar contra robos" << endl;
        cin >> i;
        if (i == 0 || i == 1)
        {
            break;
        }
    }
    if (i == 0)
    {
        while (1)
        {
            cout << "Escolha com quantos robos voce quer jogar, por seu respectivo indice" << endl;
            cout << "(1) -> 2 humanos contra 2 robos" << endl;
            cout << "(2) -> 1 humano e 1 robo contra 2 robos" << endl;
            cout << "(3) -> 2 humanos contra 1 robo e 1 humano" << endl;
            cout << "(4) -> Para ver um jogo somente entre robos" << endl;
            cin >> i;
            if (i == 1){
                this->_ordem = {1,6,3,8};
                break;
            } else if (i == 2){
                this->_ordem = {1,6,7,8};
                break;
            } else if (i == 3){
                this->_ordem = {1,2,3,8};
                break;
            } else if (i == 4)
            {
                this->_ordem = {5,6,7,8};
                break;
            }
        }
    } else {
        this->_ordem = {1,2,3,4};
    }
}
