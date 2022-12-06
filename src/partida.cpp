#include "../include/partida.hpp"
#include "../include/jogador.hpp"
#include "../include/cartas.hpp"
#include "../include/baralho.hpp"
//#include "../include/bot.hpp"


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
        // criar logica para bots substituir os jogadores // pegar cartas inicializadas aqui
    }

    Jogador& Partida::get_dupla(int n)
    {
        switch (n)//jogadores humanos
        {
        case 1:{return this->a;}//1 e bot 5
        case 2:{return this->b;}//3 e bot 6
        case 3:{return this->c;}//2 e bot 7
        case 4:{return this->d;}//4 e bot 8
        default:throw std::invalid_argument("dupla inexistente");
        }
    }

    void Partida::set_duplas()
    {
        std::string nome;
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
        std::cout << std::endl << "#################################" << std::endl;
        std::cout << "dupla 1 : " << this->a.get_nome() << " " <<this->c.get_nome()<<std::endl;
        std::cout << "dupla 2 : " << this->b.get_nome() << " " <<this->d.get_nome()<<std::endl;
        std::cout << "#################################" << std::endl << std::endl;
    }

    void Partida::jogo(std::vector<int> ordem)//ordem de jogo 1 = a, 2 = c, 3 = b, 4 = d
    {
        for(int i = 0;i<4;++i)
        {
        int jogador = ordem.at(i); //jogador = 1,2,3,4
            if(jogador == 1 || jogador == 2|| jogador == 3 || jogador == 4) 
            {
                if(jogador>4||jogador<1)throw std::invalid_argument("problema no if de Partida::Jogo");
                Jogador& Jogador(this->get_dupla(jogador));//simplificando leitura
                std::cout << "vez do Jogador " << Jogador.get_nome() << std::endl;//nome do jogador
                Jogador.ver_carta(); //mostrar as cartas em mãos/ ja tem o cout
                std::cout << "Escolha qual carta dejesa mandar" <<std::endl;
                int carta;
                std::cin>>carta;// escolher carta criar algo para impedir que mande letra
                while (carta <=0||carta > Jogador.tamanho_mao())
                {
                    std::cout <<"Por favor escolha uma das opções disponiveis" <<std::endl;
                    for (int t = 0;t<Jogador.tamanho_mao();t++){
                        std::cout <<" ("<<t+1<<")";
                    }
                    std::cout<<std::endl;
                    Jogador.ver_carta();
                    std::cin>>carta;
                }
                //this->get_dupla(ordem.at(i)).jogar_carta(carta);
                Cartas c;
                if(jogador==1||jogador==3)// dupla 1
                {
                    carta = Jogador.jogar_carta(carta);
                    this->set_ponto_time_1(c.get_valor_carta(carta));
                    std ::cout <<"Jogador "<<Jogador.get_nome()<<" lancou : "<< c.get_carta(carta) << std::endl << std::endl;    
                }else if(jogador==2||jogador==4)  // dupa 2
                {
                    carta =Jogador.jogar_carta(carta);
                    this->set_ponto_time_2(c.get_valor_carta(carta));
                    std ::cout <<"Jogador "<<Jogador.get_nome()<<" lancou : "<< c.get_carta(carta) << std::endl << std::endl;    
                }else throw std::invalid_argument("dupla inexistente (fora do 1,2,3,4)");// chamar valor fora do 1,2,3,4
            }else
            {// 5 define a como bot, 6 define b como bot, 7 define c como bot, 9 define d como bot//
                switch (jogador)//convertendo os bots para jogadores
                {
                case 5: {jogador = 1; break;} //trocando variavel jogador para 1  dupla 1// a
                case 6: {jogador = 2; break;} //trocando variavel jogador para 2  dupla 2// c
                case 7: {jogador = 3; break;} //trocando variavel jogador para 3  dupla 1// b
                case 8: {jogador = 4; break;} //trocando variavel jogador para 4  dupla 2// d
                default: throw std::invalid_argument("bot nao existente");
                }
                Cartas carta;//auxiliar ver pontos da carta
                Jogador& Jogador(this->get_dupla(jogador));//1 e 3 chama a e c, 2 e 4 chama b e d
                std::cout <<"########################" << std::endl;
                //Jogador.ver_carta();
                int ponto_carta_adversario,ponto_carta_aliado;
                int valor_carta = Jogador.maior_carta();
                //std::cout <<valor_carta<<std::endl;
                //logica para bots
                if(this->_rodada_ganha_t1==1||this->_rodada_ganha_t2==1){Jogador.jogar_carta(Jogador.tamanho_mao());//se a primeira partida tiver sido empatada lançar maior carta
                }else
                    {switch(jogador)
                        {//5 = a(1), 6 = b(3), 7 = c(2), 8 = d(4)// a e b = dupla 1, c e d dupla 2;
                        case 1: {ponto_carta_adversario = this->_maior_carta_t2 ; ponto_carta_aliado = this->_maior_carta_t1; break;}// dupla 1  
                        case 3: {ponto_carta_adversario = this->_maior_carta_t2 ; ponto_carta_aliado = this->_maior_carta_t1; break;}// dupla 1 
                        case 2: {ponto_carta_adversario = this->_maior_carta_t1 ; ponto_carta_aliado = this->_maior_carta_t2; break;}// dupla 2 
                        case 4: {ponto_carta_adversario = this->_maior_carta_t1 ; ponto_carta_aliado = this->_maior_carta_t2; break;}// dupla 2 
                        default: throw std::invalid_argument("bot nao existente");
                        }
                        //Jogador.ver_carta();
                        //std::cout <<ponto_carta_aliado<<" "<<ponto_carta_adversario<<std::endl;
                    int ponto_carta = carta.get_valor_carta(valor_carta);//ponto da maior carta
                        if(ponto_carta_aliado <= ponto_carta_adversario)//se tiver perdendo ou empatada
                        {if(ponto_carta >= ponto_carta_adversario)// consegue vencer ou empatar
                            {
                            valor_carta = Jogador.jogar_carta(Jogador.tamanho_mao());//manda maior se consegue vencer
                            }else valor_carta = Jogador.jogar_carta(Jogador.tamanho_mao());//caso contrario manda menor
                        }else valor_carta = Jogador.jogar_carta(1);//se tiver ganhando manda menor carta
                    }
                if(jogador == 1 || jogador == 3)// dupla 1
                {
                    this->set_ponto_time_1(carta.get_valor_carta(valor_carta));
                    std::cout <<"bot "<<Jogador.get_nome()<<" lancou : "<< carta.get_carta(valor_carta) << std::endl;
                    std::cout <<"########################" << std::endl << std::endl;
                    //std::cout<<_maior_carta_t1<<  std::endl;
                    //std::cout<<_maior_carta_t2<< std::endl;

                }else if(jogador == 2 || jogador == 4)// dupla 2
                    {this->set_ponto_time_2(carta.get_valor_carta(valor_carta));
                    std::cout <<"bot "<<Jogador.get_nome()<<" lancou : "<< carta.get_carta(valor_carta) << std::endl;
                    std::cout <<"########################" << std::endl << std::endl;
                    //std::cout<<_maior_carta_t1<< std::endl;
                    //std::cout<<_maior_carta_t2<< std::endl;
                    }else throw std::invalid_argument("dupla inexistente (fora do 1,2,3,4)");// chamar valor fora do 1,2,3,4
            }
        }
    }

    void Partida:: set_ponto_time_1(int rank)
    {
            if(rank > this->_maior_carta_t1){
                this->_maior_carta_t1 = rank;
            }
    }

    void Partida:: set_ponto_time_2(int rank)
    {
            if(rank > this->_maior_carta_t2){
                this->_maior_carta_t2 = rank;
            }
    }

    int Partida::rodada_ganha_t1()
    {
            return this->_rodada_ganha_t1;
    }

    int Partida::rodada_ganha_t2()
    {
        return this->_rodada_ganha_t2;
    }

    void Partida :: vencedor()  //ver qual carta dos aliados é maior para ambo
    {                           //comparar qual dupla teve mais pontos
            if(this->_maior_carta_t1==this->_maior_carta_t2){
                this->_rodada_ganha_t1+=1;
                this->_rodada_ganha_t2+=1;
                this-> rodada+=1;
                this->_maior_carta_t1 = 0;
                this->_maior_carta_t2 = 0;
                std::cout<<"set "<<rodada<<" empatado"<<std::endl;
            }else if(this->_maior_carta_t2 > this->_maior_carta_t1){
                this->_rodada_ganha_t2+=2;
                this-> rodada+=1;
                this->_maior_carta_t1 = 0;
                this->_maior_carta_t2 = 0;
                std::cout<<"dupla 2 venceu a rodada " <<std::endl << std::endl;
            }else {
                this->_rodada_ganha_t1+=2;
                this-> rodada+=1;
                this->_maior_carta_t1 = 0;
                this->_maior_carta_t2 = 0;
                std::cout<<"dupla 1 venceu o set " << rodada <<std::endl << std::endl;
            }
        }        

    void Partida::clear_all()
    {
        this->_maior_carta_t1 = 0;
        this->_maior_carta_t2 = 0;
        this->_rodada_ganha_t1 = 0;
        this->_rodada_ganha_t2 = 0;
        this-> rodada = 0;
    }