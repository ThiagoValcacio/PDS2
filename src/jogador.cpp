#include "/home/tva/exemplos.pds/git/PDS2/include/jogador.hpp"

void Jogador::add_pontos(int _pontos)
{
    pontos += _pontos;
}

int Jogador::get_pontos()
{
    return pontos;
}

string Jogador::get_nome()
{
    return nome;
}

void Jogador::add_nome(string _nome)
{
    nome = _nome;
}

vector<Cartas> Jogador::get_cartas()
{
    return mao;
}

void Jogador::add_cartas(Cartas _carta)
{
    mao.push_back(_carta);
}

void Jogador::remove_carta(int _indice)
{
    mao.erase(mao.begin() + (_indice-1));
}

//preciso da classe cartas pronta
void Jogador::mostra_cartas()
{
    int i = 1;
    //for (auto it: mao)
    //{
    //    cout << i << " - " << it << endl;
    //    i++;
    //}
}

//vai ser reescrito
int Jogador::aceita_truco()
{
    return 0;
}

//vai ser reescrito
bool Jogador::pede_truco()
{
    return 0;
}

//vai ser reescrito
void Jogador::joga_carta()
{}

void Jogador::mostra_carta_indice(int indice)
{
    for (int i = 0, ie = mao.size(); i < ie; i++)
    {
        if (i == (indice-1))
        {
            //cout << mao[i] << endl;
        }
    }
}