#include "student.h"

void reverse(SLL **ptr)
{
    SLL *prev;
    SLL *current;
    SLL *next;

    prev = NULL;
    current = *ptr;

    while(current)
    {
        next = current->next;

        current->next = prev;

        prev = current;
        current = next;
    }

    *ptr = prev;

    printf("List reversed successfully\n");
}
