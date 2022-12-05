#ifndef _cartas_H__
#define _cartas_H__


#include <string>
#include <unordered_map>
#include <utility>

    class Cartas          
{
public:
    int get_valor_carta(int);
    std::string get_carta(int);
    
private:
    const std::unordered_map <int,std::pair<int,std::string>> _cartas = 
        {//♥♦♣♠
            {40,  std::make_pair(14, "4♣")   },
            {39,  std::make_pair(13, "7♥")   },
            {38,  std::make_pair(12, "A♠")   },
            {37,  std::make_pair(11, "7♦")   },
            {36,  std::make_pair(10, "3♣")   },
            {35,  std::make_pair(10, "3♥")   },
            {34,  std::make_pair(10, "3♠")   },
            {33,  std::make_pair(10, "3♦")   },
            {32,  std::make_pair(9 , "2♣")   },
            {31,  std::make_pair(9 , "2♥")   },
            {30,  std::make_pair(9 , "2♠")   },
            {29,  std::make_pair(9 , "2♦")   },
            {28,  std::make_pair(8 , "A♣")   },
            {27,  std::make_pair(8 , "A♥")   },
            {26,  std::make_pair(8 , "A♦")   },
            {25,  std::make_pair(7 , "K♣")   },
            {24,  std::make_pair(7 , "K♥")   },
            {23,  std::make_pair(7 , "K♠")   },
            {22,  std::make_pair(7 , "K♦")   },
            {21,  std::make_pair(6 , "J♣")   },
            {20,  std::make_pair(6 , "J♥")   },
            {19,  std::make_pair(6 , "J♠")   },
            {18,  std::make_pair(6 , "J♦")   },
            {17,  std::make_pair(5 , "Q♣")   },
            {16,  std::make_pair(5 , "Q♥")   },
            {15,  std::make_pair(5 , "Q♠")   },
            {14,  std::make_pair(5 , "Q♦")   },
            {13,  std::make_pair(4 , "7♣")   },
            {12,  std::make_pair(4 , "7♠")   },
            {11,  std::make_pair(3 , "6♣")   },
            {10,  std::make_pair(3 , "6♥")   },
            {9 ,  std::make_pair(3 , "6♠")   },
            {8 ,  std::make_pair(3 , "6♦")   },
            {7 ,  std::make_pair(2 , "5♣")   },
            {6 ,  std::make_pair(2 , "5♥")   },
            {5 ,  std::make_pair(2 , "5♠")   },
            {4 ,  std::make_pair(2 , "5♦")   },
            {3 ,  std::make_pair(1 , "4♥")   },
            {2 ,  std::make_pair(1 , "4♠")   },
            {1 ,  std::make_pair(1 , "4♦")   }
        };//1-40 cartas dif pair<valor carta, nome carta>
};

#endif