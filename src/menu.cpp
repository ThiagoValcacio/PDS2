#include "../include/menu.hpp"
using namespace std;
#include <vector>

Menu::Menu()
{
    cout << "################################################################" << endl;
    cout << "Você deseja jogar uma partida 2x2 contra humanos ou contra robôs?" << endl;
    int i = 3;
    while(1)
    {
        cout << "Digite 1 para jogar contra amigos, 0 para jogar contra robôs" << endl;
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
            cout << "escolha com quantos robôs você quer jogar, por seu respectivo índice..." << endl;
            cout << "(1) -> 2 humanos contra 2 robôs..." << endl;
            cout << "(2) -> 1 humano e 1 robô contra 2 robôs..." << endl;
            cout << "(3) -> 2 humanos contra 1 robô e 1 humano..." << endl;
            cout << "(4) -> Para ver um jogo somente entre robôs..." << endl;
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
