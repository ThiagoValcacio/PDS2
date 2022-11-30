#include "interface.hpp"

interface::interface(){
  cout << "\n _____ _____  __  __ _____ _____ \n|_   _| __  |  |  |     |     |\n  | | |    -|  |  |   --|  |  |\n  |_| |__|__|_____|_____|_____|\n";
  cout << "Desenvolvido por João Henrique, Arthur Bessa, Thiago Valcácio, Lucas Bretas e Tasso!";
}

void interface::mesa(vector<jogador> Jogadores, int i){

  
  while(True){
    int num_jog;
    cout << "Quantos jogadores farão parte do jogo? (2/4)" << endl;
    cin >> num_jog;
    if(num_jog == 2 || num_jog == 4){
      cout << "O jogo será iniciado com " << num_jog << " jogadores" << endl;
      break;
    }
    else{
      cout << "Argumento Inválido, Tente novamente: " << endl;
    }
  }

}
