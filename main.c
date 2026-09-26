#include<stdio.h>
#include<stdlib.h>
#include "student.h"

struct node *head = NULL;

int main()
{
    char choice;
    char ch;

    stud_load();

    while(1)
    {
        printf("\n=====================================\n");
        printf("   STUDENT RECORD MANAGEMENT SYSTEM\n");
        printf("=====================================\n");
        printf("A/a : Add Student\n");
        printf("D/d : Delete Student\n");
        printf("S/s : Show Students\n");
        printf("M/m : Modify Student\n");
        printf("T/t : Sort Students\n");
        printf("V/v : Save Records\n");
        printf("E/e : Exit\n");
        printf("-------------------------------------\n");

        printf("Enter Your Choice : ");
        scanf(" %c",&choice);

        switch(choice)
        {
            case 'A':
            case 'a':

                do
                {
                    stud_add();

                    printf("\nDo you want to add another record? (Y/N): ");
                    scanf(" %c",&ch);

                }while(ch=='Y' || ch=='y');

                break;


            case 'D':
            case 'd':

                do
                {
                    stud_del();

                    printf("\nDo you want to delete another record? (Y/N): ");
                    scanf(" %c",&ch);

                }while(ch=='Y' || ch=='y');

                break;


            case 'S':
            case 's':

                do
                {
                    stud_show();

                    printf("\nShow Again? (Y/N): ");
                    scanf(" %c",&ch);

                }while(ch=='Y' || ch=='y');

                break;


            case 'M':
            case 'm':

                do
                {
                    stud_mod();

                    printf("\nDo you want to modify another record? (Y/N): ");
                    scanf(" %c",&ch);

                }while(ch=='Y' || ch=='y');

                break;


            case 'T':
            case 't':

                do
                {
                    stud_sort();

                    printf("\nDo you want to sort again? (Y/N): ");
                    scanf(" %c",&ch);

                }while(ch=='Y' || ch=='y');

                break;


            case 'V':
            case 'v':

                stud_save();
                break;


            case 'E':
            case 'e':

                printf("\nDo you want to save before exit? (Y/N): ");
                scanf(" %c",&ch);

                if(ch=='Y' || ch=='y')
                {
                    stud_save();
                }

                printf("\nThank You...\n");
                exit(0);


            default:

                printf("\nInvalid Choice...\n");
        }
    }

    return 0;
}
