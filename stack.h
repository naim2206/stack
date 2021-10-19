#ifndef STACK_H
#define STACK_H

struct stack
{
    struct node* top;
};
typedef struct stack Stack;

struct node
{
    void* value;
    struct node* prior;
};
typedef struct node Node;


Stack* create();

void push(Stack* stack, void* value);

void* pop(Stack* stack);

void* peek(Stack* stack);

#endif