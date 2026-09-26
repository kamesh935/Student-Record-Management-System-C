#include<stdio.h>
#include "student.h"

void stud_show()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("\nNo Records Found...\n");
        return;
    }

    temp = head;

    printf("\n------------------------------------------\n");
    printf("Roll No\tName\t\tPercentage\n");
    printf("------------------------------------------\n");

    while(temp != NULL)
    {
        printf("%d\t%-15s%.2f\n",
               temp->roll,
               temp->name,
               temp->percentage);

        temp = temp->next;
    }

    printf("------------------------------------------\n");
}
