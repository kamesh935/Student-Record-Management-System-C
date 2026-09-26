#include<stdio.h>
#include<string.h>
#include "student.h"

void stud_mod()
{
    struct node *temp;
    int roll;
    float percentage;
    char name[50];
    char choice, ch;

    if(head == NULL)
    {
        printf("\nNo Records Found...\n");
        return;
    }

    printf("\nModify Using\n");
    printf("R/r : Roll Number\n");
    printf("N/n : Name\n");
    printf("P/p : Percentage\n");

    printf("Enter Choice : ");
    scanf(" %c",&choice);

    if(choice=='R' || choice=='r')
    {
        printf("Enter Roll Number : ");
        scanf("%d",&roll);

        temp=head;

        while(temp!=NULL)
        {
            if(temp->roll==roll)
                break;

            temp=temp->next;
        }

        if(temp==NULL)
        {
            printf("\nRecord Not Found...\n");
            return;
        }
    }
    else if(choice=='N' || choice=='n')
    {
        printf("Enter Name : ");
        scanf(" %[^\n]",name);

        temp=head;

        while(temp!=NULL)
        {
            if(strcmp(temp->name,name)==0)
            {
                printf("%d\t%s\t%.2f\n",
                       temp->roll,
                       temp->name,
                       temp->percentage);
            }

            temp=temp->next;
        }

        printf("\nEnter Roll Number to Modify : ");
        scanf("%d",&roll);

        temp=head;

        while(temp!=NULL)
        {
            if(temp->roll==roll)
                break;

            temp=temp->next;
        }

        if(temp==NULL)
        {
            printf("\nRecord Not Found...\n");
            return;
        }
    }
    else if(choice=='P' || choice=='p')
    {
        printf("Enter Percentage : ");
        scanf("%f",&percentage);

        temp=head;

        while(temp!=NULL)
        {
            if(temp->percentage==percentage)
            {
                printf("%d\t%s\t%.2f\n",
                       temp->roll,
                       temp->name,
                       temp->percentage);
            }

            temp=temp->next;
        }

        printf("\nEnter Roll Number to Modify : ");
        scanf("%d",&roll);

        temp=head;

        while(temp!=NULL)
        {
            if(temp->roll==roll)
                break;

            temp=temp->next;
        }

        if(temp==NULL)
        {
            printf("\nRecord Not Found...\n");
            return;
        }
    }
    else
    {
        printf("\nInvalid Choice...\n");
        return;
    }

    printf("\nWhat Do You Want To Modify?\n");
    printf("N/n : Name\n");
    printf("P/p : Percentage\n");

    printf("Enter Choice : ");
    scanf(" %c",&ch);

    if(ch=='N' || ch=='n')
    {
        printf("Enter New Name : ");
        scanf(" %[^\n]",temp->name);

        printf("\nName Updated Successfully...\n");
    }
    else if(ch=='P' || ch=='p')
    {
        printf("Enter New Percentage : ");
        scanf("%f",&temp->percentage);

        printf("\nPercentage Updated Successfully...\n");
    }
    else
    {
        printf("\nInvalid Choice...\n");
    }
}
