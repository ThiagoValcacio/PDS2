#ifndef cartas_h
#define cartas_h


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
        {
            {40,  std::make_pair(14, "4 paus")      },
            {39,  std::make_pair(13, "7 copas")     },
            {38,  std::make_pair(12, "A espadas")   },
            {37,  std::make_pair(11, "7 ouros")     },
            {36,  std::make_pair(10, "3 paus")      },
            {35,  std::make_pair(10, "3 copas")     },
            {34,  std::make_pair(10, "3 espadas")   },
            {33,  std::make_pair(10, "3 ouros")     },
            {32,  std::make_pair(9 , "2 paus")      },
            {31,  std::make_pair(9 , "2 copas")     },
            {30,  std::make_pair(9 , "2 espadas")   },
            {29,  std::make_pair(9 , "2 ouros")     },
            {28,  std::make_pair(8 , "A paus")      },
            {27,  std::make_pair(8 , "A copas")     },
            {26,  std::make_pair(8 , "A ouros")     },
            {25,  std::make_pair(7 , "K paus")      },
            {24,  std::make_pair(7 , "K copas")     },
            {23,  std::make_pair(7 , "K espadas")   },
            {22,  std::make_pair(7 , "K ouros")     },
            {21,  std::make_pair(6 , "J paus")      },
            {20,  std::make_pair(6 , "J copas")     },
            {19,  std::make_pair(6 , "J espadas")   },
            {18,  std::make_pair(6 , "J ouros")     },
            {17,  std::make_pair(5 , "Q paus")      },
            {16,  std::make_pair(5 , "Q copas")     },
            {15,  std::make_pair(5 , "Q espadas")   },
            {14,  std::make_pair(5 , "Q ouros")     },
            {13,  std::make_pair(4 , "7 paus")      },
            {12,  std::make_pair(4 , "7 espadas")   },
            {11,  std::make_pair(3 , "6 paus")      },
            {10,  std::make_pair(3 , "6 copas")     },
            {9 ,  std::make_pair(3 , "6 espadas")   },
            {8 ,  std::make_pair(3 , "6 ouros")     },
            {7 ,  std::make_pair(2 , "5 paus")      },
            {6 ,  std::make_pair(2 , "5 copas")     },
            {5 ,  std::make_pair(2 , "5 espadas")   },
            {4 ,  std::make_pair(2 , "5 ouros")     },
            {3 ,  std::make_pair(1 , "4 copas")     },
            {2 ,  std::make_pair(1 , "4 espadas")   },
            {1 ,  std::make_pair(1 , "4 ouros")     }
        };//1-40 cartas dif pair<valor carta, nome carta>
};

#endif