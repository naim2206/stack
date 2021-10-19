Stack* create(): inicializa un stack vacío.

void push(Stack* stack, void* value): agrega un nodo con el valor al que apunte value al stack.

void* pop(Stack* stack): regresa un apuntador void al valor del elemento superior del stack y elimina el nodo del stack. Si el stack está vacío, regresa NULL.

void* peek(Stack* stack): regresa un apuntador void al valor del elemento superior dele stack pero no elimina el nodo del stack. Si el stack está vacío, regresa NULL.