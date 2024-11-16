#include <stdio.h>
#include "stackfunc.h"

int main()
{
    Stack MyStack;

    StackConstruct(&MyStack, 5);

    push(&MyStack, 3);

    push(&MyStack, 5);

    push(&MyStack, 10);

    push(&MyStack, 112);

    push(&MyStack, 48);

    push(&MyStack, 72);

    printf("%s:%s, %s():\n", __FILE__, __FILE__, __func__);

    PrintStack(&MyStack);

    StackDestruct(&MyStack);
}
