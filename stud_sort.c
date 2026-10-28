#include "student.h"

void sortname(SLL *ptr)
{
    SLL *i;
    SLL *j;

    int temp_rollno;
    char temp_name[50];
    float temp_percentage;

    for(i = ptr; i != NULL; i = i->next)
    {
        for(j = i->next; j != NULL; j = j->next)
        {
            if(strcmp(i->name, j->name) > 0)
            {
                temp_rollno = i->rollno;
                i->rollno = j->rollno;
                j->rollno = temp_rollno;

                strcpy(temp_name, i->name);
                strcpy(i->name, j->name);
                strcpy(j->name, temp_name);

                temp_percentage = i->percentage;
                i->percentage = j->percentage;
                j->percentage = temp_percentage;
            }
        }
    }

    printf("List sorted by name\n");
}

void sortpercentage(SLL *ptr)
{
    SLL *i;
    SLL *j;

    int temp_rollno;
    char temp_name[50];
    float temp_percentage;

    for(i = ptr; i != NULL; i = i->next)
    {
        for(j = i->next; j != NULL; j = j->next)
        {
            if(i->percentage < j->percentage)
            {
                temp_rollno = i->rollno;
                i->rollno = j->rollno;
                j->rollno = temp_rollno;

                strcpy(temp_name, i->name);
                strcpy(i->name, j->name);
                strcpy(j->name, temp_name);

                temp_percentage = i->percentage;
                i->percentage = j->percentage;
                j->percentage = temp_percentage;
            }
        }
    }

    printf("List sorted by percentage\n");
}


void sort(SLL *ptr)
{
    char choice;

    printf("N/n : Sort by name\n");
    printf("P/p : Sort by percentage\n");
    printf("Enter your choice: ");

    scanf(" %c", &choice);

    if(choice == 'n' || choice == 'N')
    {
        sortname(ptr);
    }
    else if(choice == 'p' || choice == 'P')
    {
        sortpercentage(ptr);
    }
    else
    {
        printf("Invalid choice\n");
    }
}
