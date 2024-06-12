# Variables
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g
OBJ = main.o stack.o
EXEC = programa2

# compilar el programa
all: $(EXEC)

# generar el archivo ejecutable
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ)

# compilar main.c
main.o: main.c stack.h
	$(CC) $(CFLAGS) -c main.c

# compilar stack.c
stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c stack.c

# limpiar los archivos generados
clean:
	rm -f $(OBJ) $(EXEC)

# valgrind
valgrind: $(EXEC)
	valgrind --leak-check=full ./$(EXEC)
	

.PHONY: all clean