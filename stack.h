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

#endif //STACK_H 