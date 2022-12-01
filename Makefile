CC := g++
SRCDIR := /home/tva/exemplos.pds/git/PDS2/src
BUILDDIR := /home/tva/exemplos.pds/git/PDS2/build
TARGET := main.out
CFLAGS := -g -Wall -O3 -std=c++11 -I /home/tva/exemplos.pds/git/PDS2/include

all:	main

cartas:
	#@mkdir build/cartas/
	$(CC) $(CFLAGS) -c src/cartas.cpp -o build/cartas.o

baralho:
	#@mkdir build/baralho/
	$(CC) $(CFLAGS) -c src/baralho.cpp -o build/baralho.o

main:   cartas baralho
	$(CC) $(CFLAGS) build/cartas.o build/baralho.o src/main.cpp -o $(TARGET)
	
clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET) 