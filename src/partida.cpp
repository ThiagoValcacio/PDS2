#include "../include/partida.hpp"
#include "../include/jogador.hpp"
#include "../include/cartas.hpp"
#include "../include/baralho.hpp"


#include <iostream>
#include <vector>
#include <string>
#include <utility>

    void Partida::iniciar_partida(){
        Baralho baralho;
        baralho.embaralhar();
        this->a.inicializar(baralho.get_carta(),baralho.get_carta(),baralho.get_carta());
        this->b.inicializar(baralho.get_carta(),baralho.get_carta(),baralho.get_carta());
        this->c.inicializar(baralho.get_carta(),baralho.get_carta(),baralho.get_carta());
        this->d.inicializar(baralho.get_carta(),baralho.get_carta(),baralho.get_carta());
    }
    
    Jogador Partida::get_dupla(int n){
        switch (n)
        {
        case 1:return this->a;
        case 2:return this->b;
        case 3:return this->c;
        case 4:return this->d;
        default:
            std::cerr << "nao era para isso aconter" << std::endl;
            break;
        }
    }
    
    void Partida::set_duplas(){
        std::string nome,nome2;
        std::cout << "escolham os nomes da primeira dupla" <<std::endl;
        std::cin  >> nome;
        this->a.set_nome(nome);
        std::cin  >> nome;
        this->b.set_nome(nome);
        std::cout << "escolham os nomes da segunda dupla" << std::endl;
        std::cin  >> nome;
        this->c.set_nome(nome);
        std::cin  >> nome;
        this->d.set_nome(nome);
        
        std::cout << "dupla 1 : " << this->a.get_nome() << " " <<this->b.get_nome()<<std::endl;
        std::cout << "dupla 2 : " << this->c.get_nome() << " " <<d.get_nome()<<std::endl;
    }
    void Partida::jogo(std::vector<int> ordem){//ordem de jogo 1 = a, 2 = c, 3 = b, 4 = d
        for(int i = 0;i<4;++i){
            Partida jogador_ale;
            //(jogador_ale.get_dupla(ordem.at(i)));
            std::cout << "Rodada do " << (jogador_ale.get_dupla(ordem.at(i))).get_nome() << std::endl;
            (jogador_ale.get_dupla(ordem.at(i))).ver_carta(); //mostrar as cartas em mãos/ ja tem o cout
            std::cout << "Escolha qual carta dejesa mandar" <<std::endl;
            int carta;
            std::cin>>carta;
            while (carta <=0||carta > (jogador_ale.get_dupla(ordem.at(i))).tamanho_mao())
            {
                std::cout <<"Por favor escolha uma das opções disponiveis" <<std::endl;
                for (int t = 0;t<=(jogador_ale.get_dupla(ordem.at(i))).tamanho_mao();t++){
                    std::cout <<" ("<<t+1<<")";
                }
                std::cout<<std::endl;
                (jogador_ale.get_dupla(ordem.at(i))).ver_carta();
                std::cin>>carta;
            }
            Cartas c;
            if(ordem.at(i)==1||ordem.at(i==3)){//dupla 1
                jogador_ale.set_rank_time_1(c.get_valor_carta((jogador_ale.get_dupla(ordem.at(i))).jogar_carta(carta)));
            }
            if(ordem.at(i)==2||ordem.at(i==4))//dupla 2
                jogador_ale.set_rank_time_2(c.get_valor_carta((jogador_ale.get_dupla(ordem.at(i))).jogar_carta(carta)));
            }
        }

        void Partida:: set_rank_time_1(int rank){
            if(rank>_rank_t1){
                _rank_t1 = rank;
            }
        }
        void Partida:: set_rank_time_2(int rank){
            if(rank>_rank_t2){
                _rank_t2 = rank;
            }
        }
        int Partida::get_ponto_t1(){
            return _ponto_t1;
        }
        int Partida::get_ponto_t2(){
            return _ponto_t2;
        }
        void Partida :: vencedor(){         //ver qual carta dos aliados é maior para ambo
                                            //comparar qual dupla teve mais pontos
            if(_rank_t1==_rank_t2){
                _ponto_t1+=1;
                _ponto_t2+=1;
                std::cout<<"jogo empatado"<<std::endl;
            }else if(_rank_t1>_rank_t2){
                _ponto_t1+=2;
                std::cout<<"time um venceu"<<std::endl;
            }else {_ponto_t2+=2;
                std::cout<<"time dois venceu"<<std::endl;
            }
        }        
        void Partida::clear_all(){
            _ponto_t1 = 0;
            _ponto_t2 = 0;
            _rank_t1 = 0;
            _rank_t2 = 0;
         }
