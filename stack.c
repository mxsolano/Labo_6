#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// nuevo nodo
Nodo* crearNodo(int dato) {
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    if (!nuevoNodo) {
        printf("No se pudo asignar memoria\n");
        exit(EXIT_FAILURE);
    }
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    nuevoNodo->anterior = NULL;
    return nuevoNodo;
}

// inicializa la pila
void inicializarStack(Stack* stack) {
    stack->top = NULL;
}

// revisa si pila esta vacia
int estaVacia(Stack* stack) {
    return stack->top == NULL;
}