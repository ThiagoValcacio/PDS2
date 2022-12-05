#ifndef _baralho_H__
#define _baralho_H__

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
