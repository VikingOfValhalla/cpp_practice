IDIR = ../../cpp/include
CC=g++
CFLAGS=-I $(IDIR)
OUTPUT=main

_DEPS = main.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

OBJ = main.cpp main_def.cpp

hellomake: $(OBJ)
	$(CC) $(OBJ) -o $(OUTPUT) $(CFLAGS) 
