#include<stdio.h>
int main()
{
struct dob
{
int day;
int month;
int year;
};
struct student
{
int rollno;
char name[20];
float fees;
struct dob date;
};
struct student stud1;
printf("enter the roll number:");
scanf("%d",&stud1.rollno);
printf("enter name:");
scanf("%s",stud1.name);
printf("enter the fees:");
scanf("%f",&stud1.fees);
printf("enter the date of birth:");
scanf("%d %d %d",&stud1.date.day,&stud1.date.month,&stud1.date.year);
printf("\n rollno=%d",stud1.rollno);
printf("\n name=%s",stud1.name);
printf("\n fees=%f",stud1.fees);
printf("\n dob=%d-%d-%d",stud1.date.day,stud1.date.month,stud1.date.year);
return 0;
}
