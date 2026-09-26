#include<stdio.h>
#include<string.h>
#include "student.h"

void stud_sort()
{
    struct node *arr[100];
    struct node *temp;
    struct node *t;
    int i,j,n=0;
    char choice;

    temp=head;

    while(temp!=NULL)
    {
        arr[n]=temp;
        n++;
        temp=temp->next;
    }

    if(n==0)
    {
        printf("\nNo Records Found...\n");
        return;
    }

    if(n==1)
    {
        printf("\nOnly One Record Available...\n");
        return;
    }

    printf("\nSort By\n");
    printf("N/n : Name\n");
    printf("P/p : Percentage\n");

    printf("Enter Choice : ");
    scanf(" %c",&choice);

    if(choice=='N' || choice=='n')
    {
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(strcmp(arr[i]->name,arr[j]->name)>0)
                {
                    t=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
                }
            }
        }

        printf("\nSorted By Name\n");
    }
    else if(choice=='P' || choice=='p')
    {
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]->percentage < arr[j]->percentage)
                {
                    t=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
                }
            }
        }

        printf("\nSorted By Percentage\n");
    }
    else
    {
        printf("\nInvalid Choice\n");
        return;
    }

    printf("\n------------------------------------------\n");
    printf("Roll No\tName\t\tPercentage\n");
    printf("------------------------------------------\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t%-15s%.2f\n",
               arr[i]->roll,
               arr[i]->name,
               arr[i]->percentage);
    }

    printf("------------------------------------------\n");
}
