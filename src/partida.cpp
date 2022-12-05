#include "../include/partida.hpp"
#include "../include/jogador.hpp"
#include "../include/cartas.hpp"
#include "../include/baralho.hpp"


#include <iostream>
#include <vector>
#include <string>
#include <utility>

    void Partida::iniciar_partida()
    {
        Baralho baralho;
        baralho.embaralhar();
        this->a.inicializar(baralho.get_carta(),baralho.get_carta(),baralho.get_carta());
        this->b.inicializar(baralho.get_carta(),baralho.get_carta(),baralho.get_carta());
        this->c.inicializar(baralho.get_carta(),baralho.get_carta(),baralho.get_carta());
        this->d.inicializar(baralho.get_carta(),baralho.get_carta(),baralho.get_carta());
    }

    Jogador& Partida::get_dupla(int n)
    {
        switch (n)
        {
        case 1:return this->a;
        case 2:return this->b;
        case 3:return this->c;
        case 4:return this->d;
        default:throw std::invalid_argument("dupla inexistente (fora do 1,2,3,4)");
        }
    }

    void Partida::set_duplas()
    {
        std::string nome,nome2;
        std::cout << "escolham os nomes da primeira dupla" <<std::endl;
        std::cin  >> nome;
        this->a.set_nome(nome);
        std::cin  >> nome;
        this->c.set_nome(nome);
        std::cout << "escolham os nomes da segunda dupla" << std::endl;
        std::cin  >> nome;
        this->b.set_nome(nome);
        std::cin  >> nome;
        this->d.set_nome(nome);
        
        std::cout << "dupla 1 : " << this->a.get_nome() << " " <<this->c.get_nome()<<std::endl;
        std::cout << "dupla 2 : " << this->b.get_nome() << " " <<this->d.get_nome()<<std::endl;
    }

    void Partida::jogo(std::vector<int> ordem)//ordem de jogo 1 = a, 2 = c, 3 = b, 4 = d
    {
        for(int i = 0;i<4;++i)
        {
        int jogador = ordem.at(i); //jogador = 1,2,3,4
            std::cout << "vez do " << (this->get_dupla(jogador)).get_nome() << std::endl;//nome do jogador
            (this->get_dupla(jogador)).ver_carta(); //mostrar as cartas em mãos/ ja tem o cout
            std::cout << "Escolha qual carta dejesa mandar" <<std::endl;
            int carta;
            std::cin>>carta;// escolher carta criar algo para impedir que mande letra
            while (carta <=0||carta > (this->get_dupla(jogador)).tamanho_mao())
            {
                std::cout <<"Por favor escolha uma das opções disponiveis" <<std::endl;
                for (int t = 0;t<(this->get_dupla(jogador)).tamanho_mao();t++){
                    std::cout <<" ("<<t+1<<")";
                }
                std::cout<<std::endl;
                (this->get_dupla(jogador)).ver_carta();
                std::cin>>carta;
            }
            //this->get_dupla(ordem.at(i)).jogar_carta(carta);
            Cartas c;
            if(jogador==1||jogador==3)// dupla 1
            {
                carta = (this->get_dupla(jogador)).jogar_carta(carta);
                this->set_rank_time_1(c.get_valor_carta(carta));
                std::cout << c.get_carta(carta) << std::endl;
            }else if(jogador==2||jogador==4)  // dupa 2
            {
                carta = (this->get_dupla(jogador)).jogar_carta(carta);
                this->set_rank_time_1(c.get_valor_carta(carta));
                std ::cout << c.get_carta(carta) << std::endl;    
            }else throw std::invalid_argument("dupla inexistente (fora do 1,2,3,4)");// chamar valor fora do 1,2,3,4
        }
    }

    void Partida:: set_rank_time_1(int rank)
    {
            if(rank>_rank_t1){
                _rank_t1 = rank;
            }
    }

    void Partida:: set_rank_time_2(int rank)
    {
            if(rank>_rank_t2){
                _rank_t2 = rank;
            }
    }

    int Partida::get_ponto_t1()
    {
            return _ponto_t1;
    }

    int Partida::get_ponto_t2()
    {
        return _ponto_t2;
    }

    void Partida :: vencedor()  //ver qual carta dos aliados é maior para ambo
    {                           //comparar qual dupla teve mais pontos
            if(_rank_t1==_rank_t2){
                _ponto_t1+=1;
                _ponto_t2+=1;
                rodada+=1;
                std::cout<<"rodada "<<rodada<<" empatada"<<std::endl;
            }else if(_rank_t1>_rank_t2){
                _ponto_t1+=2;
                rodada+=1;
                std::cout<<"time um venceu a rodada " << rodada <<std::endl;
            }else {_ponto_t2+=2;
                rodada+=1;
                std::cout<<"time dois venceu a rodada " << rodada <<std::endl;
            }
        }        

    void Partida::clear_all()
    {
        _ponto_t1 = 0;
        _ponto_t2 = 0;
        _rank_t1 = 0;
        _rank_t2 = 0;
        rodada = 0;
    }