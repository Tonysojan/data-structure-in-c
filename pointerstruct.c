#include<stdio.h>
struct student
{
int rollno;
char name[20];
char course[20];
int fees;
};
int main()
{
struct student stud1,*ptr_stud1;
ptr_stud1=&stud1;
printf("\n enter details of student:");
printf("\n enter the roll no:");
scanf("%d",&ptr_stud1->rollno);
printf("\n enter the name:");
scanf("%s",ptr_stud1->name);
printf("\n enter the course:");
scanf("%s",ptr_stud1->course);
printf("\n enter the fees:");
scanf("%d",&ptr_stud1->fees);
printf("\n rollno=%d",ptr_stud1->rollno);
printf("\n name=%s",ptr_stud1->name);
printf("\n course=%s",ptr_stud1->course);
printf("\n fees=%d",ptr_stud1->fees);
return 0;
}


