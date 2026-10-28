#include "student.h"

void printnode(SLL *ptr)
{
    if(ptr == 0)
    {
        printf("No student records available\n");
        return;
    }

    printf("---------------------------------------------\n");
    printf("Roll No.   Name              Percentage\n");
    printf("---------------------------------------------\n");

    while(ptr)
    {
        printf("%-10d %-17s %.2f\n",ptr->rollno,ptr->name,ptr->percentage);

        ptr = ptr->next;
    }

    printf("---------------------------------------------\n");
}
