#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h" //https://github.com/doctest/doctest.git

#include "../include/partida.hpp" 
#include "../include/jogador.hpp"


TEST_CASE( "Test iniciar_parida e get set" )
{  
    Partida partida;
    Jogador jogador;
    partida.iniciar_partida();
    CHECK((partida.get_dupla(1)).tamanho_mao()==3);
    CHECK((partida.get_dupla(2)).tamanho_mao()==3);
    CHECK((partida.get_dupla(3)).tamanho_mao()==3);
    CHECK((partida.get_dupla(4)).tamanho_mao()==3);
}
TEST_CASE("throws get_dupla()")
{
    Partida partida;
    CHECK_THROWS(partida.get_dupla(5));
    CHECK_THROWS(partida.get_dupla(0));
}

TEST_CASE("")
{
    Partida partida;
    CHECK(partida.get_ponto_t1()==0);
    CHECK(partida.get_ponto_t2()==0);
    partida.set_rank_time_1(1);
    partida.vencedor();
    CHECK(partida.get_ponto_t1()==2);
    CHECK(partida.get_ponto_t2()==0);
    partida.set_rank_time_1(10);
    partida.vencedor();
    CHECK(partida.get_ponto_t1()==4);
    CHECK(partida.get_ponto_t2()==0);
    partida.set_rank_time_2(10);
    partida.vencedor();
    CHECK(partida.get_ponto_t1()==5);
    CHECK(partida.get_ponto_t2()==1);
    partida.set_rank_time_2(11);
    partida.vencedor(); 
    CHECK(partida.get_ponto_t1()==5);
    CHECK(partida.get_ponto_t2()==3);
    partida.clear_all();
    CHECK(partida.get_ponto_t1()==0);  
    CHECK(partida.get_ponto_t2()==0);
}

//    void Partida::jogo(std::vector<int> ordem)//ordem de jogo 1 = a, 2 = c, 3 = b, 4 = d
//    {
//        for(int i = 0;i<4;++i)
//        {
//        int jogador = ordem.at(i); //jogador = 1,2,3,4
//            std::cout << "vez do " << (this->get_dupla(jogador)).get_nome() << std::endl;//nome do jogador
//            (this->get_dupla(jogador)).ver_carta(); //mostrar as cartas em mãos/ ja tem o cout
//            std::cout << "Escolha qual carta dejesa mandar" <<std::endl;
//            int carta;
//            std::cin>>carta;// escolher carta criar algo para impedir que mande letra
//            while (carta <=0||carta > (this->get_dupla(jogador)).tamanho_mao())
//            {
//                std::cout <<"Por favor escolha uma das opções disponiveis" <<std::endl;
//                for (int t = 0;t<(this->get_dupla(jogador)).tamanho_mao();t++){
//                    std::cout <<" ("<<t+1<<")";
//                }
//                std::cout<<std::endl;
//                (this->get_dupla(jogador)).ver_carta();
//                std::cin>>carta;
//            }
//            //this->get_dupla(ordem.at(i)).jogar_carta(carta);
//            Cartas c;
//            if(jogador==1||jogador==3)// dupla 1
//            {
//                carta = (this->get_dupla(jogador)).jogar_carta(carta);
//                this->set_rank_time_1(c.get_valor_carta(carta));
//                std::cout << c.get_carta(carta) << std::endl;
//            }else if(jogador==2||jogador==4)  // dupa 2
//            {
//                carta = (this->get_dupla(jogador)).jogar_carta(carta);
//                this->set_rank_time_1(c.get_valor_carta(carta));
//                std ::cout << c.get_carta(carta) << std::endl;    
//            }else throw std::invalid_argument("dupla inexistente (fora do 1,2,3,4)");// chamar valor fora do 1,2,3,4
//        }
//    }