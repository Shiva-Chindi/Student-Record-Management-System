#include "student.h"


void deletenode(SLL **ptr)
{
    char choice;
    int rno;
    char name[50];
    int found = 0;

    SLL *temp;
    SLL *prev;

    printf("R/r : Enter roll number to delete\n");
    printf("N/n : Enter name to delete\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    if(choice == 'r' || choice == 'R')
    {
        printf("Enter roll number: ");
        scanf("%d", &rno);

        temp = *ptr;
        prev = 0;

        while(temp)
        {
            if(temp->rollno == rno)
            {
                found = 1;
                break;
            }

            prev = temp;
            temp = temp->next;
        }

        if(found == 0)
        {
            printf("Record not found\n");
            return;
        }

        if(prev == 0)
        {
            *ptr = temp->next;
        }
        else
        {
            prev->next = temp->next;
        }

        free(temp);

        printf("Record deleted successfully\n");
    }

    else if(choice == 'n' || choice == 'N')
    {
        printf("Enter name: ");
        scanf("%s", name);

        temp = *ptr;

        printf("Matching records:\n");

        while(temp)
        {
            if(strcmp(temp->name, name) == 0)
            {
                printf("%d %s %.2f\n",
                       temp->rollno,
                       temp->name,
                       temp->percentage);

                found = 1;
            }

            temp = temp->next;
        }

        if(found == 0)
        {
            printf("Record not found\n");
            return;
        }

        printf("Enter roll number of the record to delete: ");
        scanf("%d", &rno);

        temp = *ptr;
        prev = 0;
        found = 0;

        while(temp)
        {
            if(temp->rollno == rno &&
               strcmp(temp->name, name) == 0)
            {
                found = 1;
                break;
            }

            prev = temp;
            temp = temp->next;
        }

        if(found == 0)
        {
            printf("Record not found\n");
            return;
        }

        if(prev == 0)
        {
            *ptr = temp->next;
        }
        else
        {
            prev->next = temp->next;
        }

        free(temp);

        printf("Record deleted successfully\n");
    }

    else
    {
        printf("Invalid choice\n");
    }
}


void deleteall(SLL **ptr)
{
    SLL *temp;

    if(*ptr == NULL)
    {
        printf("No records to delete\n");
        return;
    }

    while(*ptr)
    {
        temp = *ptr;
        *ptr = (*ptr)->next;
        free(temp);
    }

    printf("All records deleted successfully\n");
}
