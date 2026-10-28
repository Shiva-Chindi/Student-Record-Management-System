#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
} SLL;


void addbegin(SLL **);



void deletenode(SLL **);
void deleteall(SLL **);



void printnode(SLL *);


void modifyroll(SLL *);
void modifyname(SLL *);
void modifypers(SLL *);
void modify(SLL *);


void savefile(SLL *);
void loadfile(SLL **);



void sortname(SLL *);
void sortpercentage(SLL *);
void sort(SLL *);



void reverse(SLL **);

void exitprogram(SLL **);
