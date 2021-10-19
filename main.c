#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    Stack* stack = create();
    int x = 3;
    int y = 1;
    int* a = &x;
    int* b = &y;

    push(stack, a);
    printf("peek: %d\n", *((int*)peek(stack)));
    printf("pop: %d\n", *((int*)pop(stack)));
    puts("ola");

    return 0;
}