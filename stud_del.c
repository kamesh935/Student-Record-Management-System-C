#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"

void stud_del()
{
    struct node *temp, *prev;
    int roll;
    char name[50];
    char choice;

    if(head == NULL)
    {
        printf("\nNo Records Found...\n");
        return;
    }

    printf("\nDelete Using\n");
    printf("R/r : Roll Number\n");
    printf("N/n : Name\n");

    printf("Enter Choice : ");
    scanf(" %c",&choice);

    if(choice=='R' || choice=='r')
    {
        printf("Enter Roll Number : ");
        scanf("%d",&roll);

        temp = head;
        prev = NULL;

        while(temp != NULL)
        {
            if(temp->roll == roll)
                break;

            prev = temp;
            temp = temp->next;
        }

        if(temp == NULL)
        {
            printf("\nRecord Not Found...\n");
            return;
        }

        if(prev == NULL)
            head = temp->next;
        else
            prev->next = temp->next;

        free(temp);

        printf("\nRecord Deleted Successfully...\n");
    }
    else if(choice=='N' || choice=='n')
    {
        printf("Enter Name : ");
        scanf(" %[^\n]",name);

        temp = head;

        printf("\nMatching Records\n");
        printf("-------------------------------------\n");
        printf("Roll\tName\t\tPercentage\n");
        printf("-------------------------------------\n");

        while(temp != NULL)
        {
            if(strcmp(temp->name,name)==0)
            {
                printf("%d\t%s\t\t%.2f\n",
                        temp->roll,
                        temp->name,
                        temp->percentage);
            }

            temp = temp->next;
        }

        printf("-------------------------------------\n");

        printf("Enter Roll Number to Delete : ");
        scanf("%d",&roll);

        temp = head;
        prev = NULL;

        while(temp != NULL)
        {
            if(temp->roll == roll)
                break;

            prev = temp;
            temp = temp->next;
        }

        if(temp == NULL)
        {
            printf("\nRecord Not Found...\n");
            return;
        }

        if(prev == NULL)
            head = temp->next;
        else
            prev->next = temp->next;

        free(temp);

        printf("\nRecord Deleted Successfully...\n");
    }
    else
    {
        printf("\nInvalid Choice...\n");
    }
}
