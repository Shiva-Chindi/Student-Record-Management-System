#include "student.h"


void exitprogram(SLL **ptr)
{
    char choice;

    printf("S/s : Save and Exit\n");
    printf("E/e : Exit without Saving\n");
    printf("Enter your choice: ");

    scanf(" %c", &choice);

    if(choice == 's' || choice == 'S')
    {
        savefile(*ptr);
        deleteall(ptr);

        printf("Exiting...\n");
        return;
    }

    else if(choice == 'e' || choice == 'E')
    {
        deleteall(ptr);

        printf("Exiting without saving...\n");
        return;
    }

    else
    {
        printf("Invalid choice\n");
    }
}


int main()
{
    SLL *head = NULL;
    char choice;

    /* Load saved records when program starts */
    loadfile(&head);

    while(1)
    {
        printf("\n");
        printf("******** STUDENT RECORD MENU ********\n");
        printf("a/A : Add new record\n");
        printf("d/D : Delete a record\n");
        printf("s/S : Show the list\n");
        printf("m/M : Modify a record\n");
        printf("v/V : Save records\n");
        printf("e/E : Exit\n");
        printf("t/T : Sort the list\n");
        printf("l/L : Delete all the records\n");
        printf("r/R : Reverse the list\n");
        printf("Enter your choice: ");

        scanf(" %c", &choice);

        switch(choice)
        {
            case 'a':
            case 'A':
                addbegin(&head);
                break;


            case 'd':
            case 'D':
                deletenode(&head);
                break;


            case 's':
            case 'S':
                printnode(head);
                break;


            case 'm':
            case 'M':
                modify(head);
                break;


            case 'v':
            case 'V':
                savefile(head);
                break;


            case 'e':
            case 'E':
                exitprogram(&head);

                if(head == NULL)
                    return 0;

                break;


            case 't':
            case 'T':
                sort(head);
                break;


            case 'l':
            case 'L':
                deleteall(&head);
                break;


            case 'r':
            case 'R':
                reverse(&head);
                break;


            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
