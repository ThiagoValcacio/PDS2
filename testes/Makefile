CC          := g++
SRCDIR      := src
BUILDDIR    := build
TARGET      := vpl_execution
CFLAGS      := -g -std=c++14 -I include/.

all: main

list:
    $(CC) $(CFLAGS) -c $(SRCDIR)/list.cpp -o $(BUILDDIR)/list.o

utils: list
    $(CC) $(CFLAGS) -c $(SRCDIR)/utils.cpp -o $(BUILDDIR)/utils.o
    
solucao: list
    $(CC) $(CFLAGS) -c $(SRCDIR)/solucao.cpp -o $(BUILDDIR)/solucao.o

main: list utils solucao
    $(CC) $(CFLAGS) $(BUILDDIR)/list.o $(BUILDDIR)/utils.o $(BUILDDIR)/solucao.o $(SRCDIR)/main.cpp -o $(TARGET)