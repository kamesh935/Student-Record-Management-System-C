#ifndef STUDENT_H
#define STUDENT_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NAME_LEN 50
#define FILE_NAME "student.dat"

struct node
{
    int roll;
    char name[NAME_LEN];
    float percentage;
    struct node *next;
};

extern struct node *head;

void stud_add();
void stud_del();
void stud_show();
void stud_mod();
void stud_sort();
void stud_save();
void stud_load();

#endif
