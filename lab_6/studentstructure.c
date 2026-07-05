#include<stdio.h>
struct student
{
    int roll_no;
    char name[10];
    char branch[10];
    int batch_no;
};

void main(){
    struct student *ptr;
    struct student s;
    ptr = &s;
    printf("enter a student roll no\n");
    scanf("%d",&ptr->roll_no);
     printf("enter a student name\n");
     scanf(" %[^\n]",&ptr->name);
     printf("enter a student branch\n");
     scanf(" %[^\n]",&ptr->branch);
     printf("enter a student batch no\n");
    scanf("%d",&ptr->batch_no);
     printf(" roll_no=%d\n name=%s\n branch=%s\n batch_no=%d\n",ptr->roll_no,ptr->name,ptr->branch,ptr->batch_no);
}