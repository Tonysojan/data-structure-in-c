#include<stdio.h>
#include<stdlib.h>
int queue[20];
int rear=-1;
int front=-1;
void enqueue(int a);
void dequeue();
void display();
void peek();
void main()
{
int x,a;
while(1)
{
printf("\nMENU");
printf("\n1.Enqueue\n2.Dequeue\n3.Display \n4.Peek \n5.Exit");
printf("\n Enter your choice: ");
scanf("%d",&x);
switch(x)
{
case 1:
printf("\n Enter the element to be inserted: ");
scanf("%d",&a);
enqueue(a);
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
peek();
break;
case 5:
exit(0);
default:
printf("Enter correct choice");
}
}
}
void enqueue(int a)
{
if(rear==19)
{
printf("Queue become over flow");
}
else
{
front=0;
rear=rear+1;
queue[rear]=a;
}
}
void dequeue()
{
if(front==-1||front>rear)
{
printf("Queue is underflow");
}
else
{
printf("Dequeued element is %d", queue[front]);
front=front+1;
}
}
void display()
{
int i;
if(front==-1)
{
printf("Queue is empty");
}
else
{
printf("Queue is: \n");
for(i=front;i<=rear;i++)
{
printf("%d\t", queue[i]);
printf("\n");
}
}
}
void peek()
{
printf("Peek element is %d", queue[front]);
}

