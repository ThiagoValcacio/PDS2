#ifndef baralho_h
#define baralho_h

#include <set>

class Baralho{
public:
    void embaralhar();
    int get_carta();
    int tamanho_baralho();
private:
    std::set<int>_baralho;
};

#endif