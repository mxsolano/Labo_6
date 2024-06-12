#ifndef STACK_H
#define STACK_H

// Definición de la estructura del nodo
typedef struct Nodo {
    int dato;
    struct Nodo* siguiente;
    struct Nodo* anterior;
} Nodo;

// Definición de la estructura de la pila
typedef struct Stack {
    Nodo* top;
} Stack;

//funciones
Nodo* crearNodo(int dato);
void inicializarStack(Stack* stack);
int estaVacia(Stack* stack);
void push(Stack* stack, int dato);
int pop(Stack* stack);
int top(Stack* stack);
void printStack(Stack* stack);
void liberarStack(Stack* stack);

#endif //STACK_H 