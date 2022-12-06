#include "../include/cartas.hpp"


#include <unordered_map> //apenas para associar uma carta a uma posição maior mais forte 
#include <string>
//#include <utility>       // std::pair
//sequencia de cartas 

// 4 paus       40               ##  14    
// 7 copas      39               ##  13
// A espadas    38               ##  12
// 7 ouros      37               ##  11
// 3333         33 34 35 36      ##  10       
// 2222         29 30 31 32      ##  9            
// AAA          26 27 28         ##  8      
// KKKK         22 23 24 25      ##  7       
// JJJJ         18 19 20 21      ##  6           
// QQQQ         14 15 16 17      ##  5       
// 77           12 13            ##  4    
// 6666         8 9 10 11        ##  3        
// 5555         4 5 6 7          ##  2    
// 444          1 2 3            ##  1                     


    int Cartas::get_valor_carta(int carta)
    {
        return (_cartas.at(carta).first);
    }
    std::string  Cartas::get_carta(int numero){
        return _cartas.at(numero).second;
    }
