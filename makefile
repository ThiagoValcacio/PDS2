CC 		:= g++
FLAGS 	:= -I include/ -Wall
BUILD 	:= ./build
SRC 	:= ./src
#INCLUDE 	= ./include
TESTES 		= ./testes


#$(variavel) no lugar do nome da pasta
#all faz o progama rodar tudo /main 

#$ g++ -std=c++14 *.cpp -o main
#$ ./main
#$ ./main -s
#$ g++ --coverage
#$ gcov arquivo.cpp #verifica se executou todas as linhas de codigo
#
#1. Compilar todos os arquivos com o parâmetro “--coverage” (saída arquivos ‘.gcno’).
#g++ -c --coverage factorial.cpp
#g++ --coverage -o TesteFactorial TesteFactorial.cpp factorial.o
#
#2. Execute o arquivo executável (saída arquivos ‘.gcda’).
#./TesteFactorial
#
#3. Gerar os relatórios de cobertura (saída arquivos ‘.gcov’).
#mkdir coverage
#mv *.gcno *.gcda coverage/
#gcov -lpr *.cpp -o coverage/
#mv *.gcov coverage/
#
#4. Gerar o relatório em html*.
#lcov --no-external --capture --directory . --output-file
#coverage/coverage.info
#genhtml coverage/coverage.info --output-directory coverage
#


all: main
main: bot cartas humano jogador
	$(CC) $(FLAGS) $(BUILD)/*.out $(SRC)/main.cpp -o main.out
bot:
	$(CC) $(FLAGS) -c $(SRC)/bot.cpp -o $(BUILD)/bot.out 
cartas:
	$(CC) $(FLAGS) -c $(SRC)/cartas.cpp -o $(BUILD)/cartas.out 
humano: jogador
	$(CC) $(FLAGS) -c $(SRC)/humano.cpp -o $(BUILD)/humano.out 
jogador:
	$(CC) $(FLAGS) -c $(SRC)/jogador.cpp -o $(BUILD)/jogador.out 

################################################################################
################################ TESTES ########################################
################################################################################

test_bot:
	g++ ./testes/test_bot.cpp -o main
# gcorv -r . --html --html-details -o relatorio.html

test_humano: humano jogador
	g++ ./testes/test_humano.cpp -o main
#gcorv -r . --html --html-details -o relatorio.html

test_jogador:
	g++ ./testes/test_jogador.cpp -o main
# gcorv -r . --html --html-details -o relatorio.html

test_all:
clean:
	rm $(BUILD)/*.out

