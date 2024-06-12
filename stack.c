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

// agrega un elemento a la pila
void push(Stack* stack, int dato) {
    Nodo* nuevoNodo = crearNodo(dato);
    if (stack->top != NULL) {
        stack->top->siguiente = nuevoNodo;
        nuevoNodo->anterior = stack->top;
    }
    stack->top = nuevoNodo;
    printf("%d ha sido agregado al stack\n", dato);
}

// elimina y devuelve el elemento en la parte superior de la pila
int pop(Stack* stack) {
    if (estaVacia(stack)) {
        printf("stack vacio, no se puede hacer pop\n");
        exit(EXIT_FAILURE);
    }
    Nodo* nodoTemp = stack->top;
    int dato = nodoTemp->dato;
    stack->top = nodoTemp->anterior;
    if (stack->top != NULL) {
        stack->top->siguiente = NULL;
    }
    free(nodoTemp);
    return dato;
}