#include "student.h"

void modifyroll(SLL *ptr)
{
    int rno;
    SLL *temp;

    printf("Enter roll number: ");
    scanf("%d", &rno);

    temp = ptr;

    while(temp)
    {
        if(temp->rollno == rno)
            break;

        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Record not found\n");
        return;
    }

    printf("Current details:\n");
    printf("Roll No: %d\n", temp->rollno);
    printf("Name: %s\n", temp->name);
    printf("Percentage: %.2f\n", temp->percentage);

    printf("Enter new name: ");
    scanf("%s", temp->name);

    printf("Enter new percentage: ");
    scanf("%f", &temp->percentage);

    while(temp->percentage < 0 || temp->percentage > 100)
    {
        printf("Enter percentage between 0 and 100: ");
        scanf("%f", &temp->percentage);
    }

    printf("Record modified successfully\n");
}

void modifyname(SLL *ptr)
{
    char name[50];
    int rno;
    int found = 0;
    SLL *temp;

    printf("Enter name: ");
    scanf("%s", name);

    temp = ptr;

    printf("Matching records:\n");

    while(temp)
    {
        if(strcmp(temp->name, name) == 0)
        {
            printf("%d %s %.2f\n",temp->rollno,temp->name,temp->percentage);

            found = 1;
        }

        temp = temp->next;
    }

    if(found == 0)
    {
        printf("Record not found\n");
        return;
    }

    printf("Enter roll number of the record to modify: ");
    scanf("%d", &rno);

    temp = ptr;
    found = 0;

    while(temp)
    {
        if(temp->rollno == rno &&
           strcmp(temp->name, name) == 0)
        {
            found = 1;
            break;
        }

        temp = temp->next;
    }

    if(found == 0)
    {
        printf("Record not found\n");
        return;
    }

    printf("Current details:\n");
    printf("Roll No: %d\n", temp->rollno);
    printf("Name: %s\n", temp->name);
    printf("Percentage: %.2f\n", temp->percentage);

    printf("Enter new name: ");
    scanf("%s", temp->name);

    printf("Enter new percentage: ");
    scanf("%f", &temp->percentage);

    while(temp->percentage < 0 || temp->percentage > 100)
    {
        printf("Enter percentage between 0 and 100: ");
        scanf("%f", &temp->percentage);
    }

    printf("Record modified successfully\n");
} 
void modifypers(SLL *ptr)
{
    float percentage;
    int rno;
    int found = 0;
    SLL *temp;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    temp = ptr;

    printf("Matching records:\n");

    while(temp)
    {
        if(temp->percentage == percentage)
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

    printf("Enter roll number of the record to modify: ");
    scanf("%d", &rno);

    temp = ptr;
    found = 0;

    while(temp)
    {
        if(temp->rollno == rno &&
           temp->percentage == percentage)
        {
            found = 1;
            break;
        }

        temp = temp->next;
    }

    if(found == 0)
    {
        printf("Record not found\n");
        return;
    }

    printf("Current details:\n");
    printf("Roll No: %d\n", temp->rollno);
    printf("Name: %s\n", temp->name);
    printf("Percentage: %.2f\n", temp->percentage);

    printf("Enter new name: ");
    scanf("%s", temp->name);

    printf("Enter new percentage: ");
    scanf("%f", &temp->percentage);

    while(temp->percentage < 0 || temp->percentage > 100)
    {
        printf("Enter percentage between 0 and 100: ");
        scanf("%f", &temp->percentage);
    }

    printf("Record modified successfully\n");
}























void modify(SLL *ptr)
{
    char choice;

    printf("R/r : Modify by roll number\n");
    printf("N/n : Modify by name\n");
    printf("P/p : Modify by percentage\n");
    printf("Enter your choice: ");

    scanf(" %c", &choice);

    if(choice == 'r' || choice == 'R')
    {
        modifyroll(ptr);
    }
    else if(choice == 'n' || choice == 'N')
    {
        modifyname(ptr);
    }
    else if(choice == 'p' || choice == 'P')
    {
        modifypers(ptr);
    }
    else
    {
        printf("Invalid choice\n");
    }
}



