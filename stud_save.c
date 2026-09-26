#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"

void stud_save()
{
    FILE *fp;
    struct node *temp;

    fp = fopen(FILE_NAME,"wb");

    if(fp == NULL)
    {
        printf("\nFile Cannot Be Opened...\n");
        return;
    }

    temp = head;

    while(temp != NULL)
    {
        fwrite(&temp->roll,sizeof(int),1,fp);
        fwrite(temp->name,sizeof(char),50,fp);
        fwrite(&temp->percentage,sizeof(float),1,fp);

        temp = temp->next;
    }

    fclose(fp);

    printf("\nRecords Saved Successfully...\n");
}

void stud_load()
{
    FILE *fp;
    struct node *newnode,*temp;

    fp = fopen(FILE_NAME,"rb");

    if(fp == NULL)
        return;

    while(1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        if(newnode == NULL)
        {
            printf("\nMemory Allocation Failed...\n");
            break;
        }

        if(fread(&newnode->roll,sizeof(int),1,fp) != 1)
        {
            free(newnode);
            break;
        }

        fread(newnode->name,sizeof(char),50,fp);
        fread(&newnode->percentage,sizeof(float),1,fp);

        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;

            while(temp->next != NULL)
                temp = temp->next;

            temp->next = newnode;
        }
    }

    fclose(fp);
}
