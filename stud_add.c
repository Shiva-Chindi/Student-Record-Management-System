#include "student.h"

void addbegin(SLL **ptr)
{
    SLL *new;
    SLL *temp;
    int r = 1;
    int found;

    new = malloc(sizeof(SLL));

    if(new == 0)
    {
        printf("Memory allocation failed\n");
        return;
    }

    while(1)
    {
        found = 0;
        temp = *ptr;

        while(temp)
        {
            if(temp->rollno == r)
            {
                found = 1;
                break;
            }

            temp = temp->next;
        }

        if(found == 0)
            break;

        r++;
    }

    new->rollno = r;

    //printf("Enter name and percentage\n");
    //scanf("%s %f", new->name, &new->percentage);
	printf("Enter name: ");
	scanf("%s", new->name);

	while(new->name[0] == '\0')
	{
	    printf("Name cannot be empty\n");
	    printf("Enter name: ");
	    scanf("%s", new->name);
	}

	printf("Enter percentage: ");
	scanf("%f", &new->percentage);

    while(new->percentage < 0 || new->percentage > 100)
    {
        printf("Enter percentage between 0 and 100\n");
        scanf("%f", &new->percentage);
    }

    new->next = *ptr;
    *ptr = new;

    printf("Record added successfully\n");
    printf("Roll number = %d\n", new->rollno);
}
