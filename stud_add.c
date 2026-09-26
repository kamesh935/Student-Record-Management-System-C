#include<stdio.h>
#include<stdlib.h>
#include "student.h"

void stud_add()
{
    struct node *newnode;
    struct node *temp;
    int roll = 1001;

    newnode = (struct node *)malloc(sizeof(struct node));

    if(newnode == NULL)
    {
        printf("Memory Allocation Failed\n");
        return;
    }

    while(1)
    {
        int found = 0;
        temp = head;

        while(temp != NULL)
        {
            if(temp->roll == roll)
            {
                found = 1;
                break;
            }
            temp = temp->next;
        }

        if(found == 0)
            break;

        roll++;
    }

    newnode->roll = roll;

    printf("\nAssigned Roll Number : %d\n", newnode->roll);

    printf("Enter Student Name : ");
    scanf(" %[^\n]", newnode->name);

    printf("Enter Percentage : ");
    scanf("%f", &newnode->percentage);

    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }

    printf("\nRecord Added Successfully...\n");
}
