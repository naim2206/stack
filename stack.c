#include <stdlib.h>
#include "stack.h"


Stack* create()
{
    Stack* stack = malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

void push(Stack* stack, void* value)
{
    Node* node = malloc(sizeof(Node));

    node->value = value;
    node->prior = stack->top;
    stack->top = node;

}

void* pop(Stack* stack)
{

    if (stack->top == NULL)
        return NULL;

    Node* toPop = stack->top;
    void* toReturn = toPop->value;
    stack->top = toPop->prior;
    free(toPop);
    return toReturn;

}

void* peek(Stack* stack)
{
    if (stack->top == NULL)
        return NULL;

    return stack->top->value;

}