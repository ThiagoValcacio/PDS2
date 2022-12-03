# *****************************************************
# Variables to control Makefile operation
CC 		:= g++
FLAGS 	:= -g -Wall
BUILD 	:= ./build
SRC 	:= ./src
INCLUDE 	= ./include
TESTES 	:= ./testes


#$(variavel) no lugar do nome da pasta
#all faz o progama rodar tudo /main 

#$ g++ -std=c++14 *.cpp -o main
#$ ./main
#$ ./main -s
#$ g++ --coverage
#$ gcov arquivo.cpp #verifica se executou todas as linhas de codigo

#1. Compilar todos os arquivos com o parâmetro “--coverage” (saída arquivos ‘.gcno’).
#g++ -c --coverage factorial.cpp
#g++ --coverage -o TesteFactorial TesteFactorial.cpp factorial.o

#2. Execute o arquivo executável (saída arquivos ‘.gcda’).
#./TesteFactorial

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
######################################################################
main:  cartas partida baralho jogador
	$(CC) $(FLAGS) $(BUILD)/*.o $(SRC)/main.cpp -o $(BUILD)/main
	$(BUILD)/main
######################################################################
cartas: 
	$(CC) $(FLAGS) -c $(SRC)/cartas.cpp -o $(BUILD)/cartas.o
######################################################################
partida:  
	$(CC) $(FLAGS) -c $(SRC)/partida.cpp -o $(BUILD)/partida.o
######################################################################
baralho: 
	$(CC) $(FLAGS) -c $(SRC)/baralho.cpp -o $(BUILD)/baralho.o
######################################################################
jogador: 
	$(CC) $(FLAGS) -c $(SRC)/jogador.cpp -o $(BUILD)/jogador.o
######################################################################

################################################################################
################################ TESTES ########################################
################################################################################

test_baralho: baralho 
	$(CC) $(TESTES)/test_baralho.cpp $(BUILD)/baralho.o -o $(BUILD)/test
	$(BUILD)/test
# gcorv -r . --html --html-details -o relatorio.html

test_humano: humano jogador
	g++ $(TESTES)/test_humano.cpp $(TESTES)/doctest.h -o main
#gcorv -r . --html --html-details -o relatorio.html

test_jogador:
	g++ $(TESTES)/test_jogador.cpp $(TESTES)/doctest.h -o main
# gcorv -r . --html --html-details -o relatorio.html

test_cartas: cartas
	$(CC) $(TESTES)/test_cartas.cpp $(BUILD)/cartas.o -o $(BUILD)/test
	$(BUILD)/test
#$(BUILD)/test_cartas.out

test_all:
clean:
	rm $(BUILD)/*.o