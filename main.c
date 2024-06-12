#include <stdio.h>
#include "stack.h"

int main() {
    Stack stack;
    inicializarStack(&stack);

    push(&stack, 100);
    push(&stack, 5);
    push(&stack, 12);

    printStack(&stack);

    printf("elemento en la cima: %d\n", top(&stack));
    printf("elemento desapilado: %d\n", pop(&stack));
    printStack(&stack);
    printf("elemento en la cima: %d\n", top(&stack));

    
    liberarPila(&stack);

    // intenta desapilar nuevamente despues de liberar la pila
    if (estVacia(&stack)) {
        printf("stack vacio, no es posible desapilar\n");
    } else {
        int dato = pop(&stack);
        printf("elemento desapilado: %d\n", dato);
    }

    return 0;
}