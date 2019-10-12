#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int front=-1;
int rear=0;
int que[size];
int Qfull()

{
 if(front==(rear+1)%size)
  return 1;
  else
  return 0;
}
  int Qempty()
{
  if(front==-1)
  return 1;
  else
  return 0;
}
   void add(int item)
{
  if(Qfull())
  printf("The circular queue full");
  else
{
  if(front==-1){
  front=rear=0;
  que[rear]=item; }
  else
 {
  rear=(rear+1)%size;
  que[rear]=item;
 }
}
}
 void delete ()
 {
  int item;
  if(Qempty())
 {
  printf("The Queue is empty");
 }
  else
   {
      item=que[front];
      if(front==rear)
   {
   front=rear=-1;
   }
    else
    front=(front+1)%size;
    printf("\n The deleted element is %d",item);
    }
   }

   void display()
  {
   int i;
   if(Qempty())
  {
   printf("Queue is empty");
   return;
  }
   i=front;
   while(i!=rear)
  {
   printf("%d\n",que[i]);
   i=(i+1)%size;
  }
   printf("%d\n",que[i]);
    }
   void main (void)
  {
   int ch,item;
   char ans;
   clrscr();
   do
   {
    printf("Implemantion of circular queue");
    printf("\n1.insert\n2.delete\n3.display\n");
    printf("Enter your choice");
    scanf("%d",&ch);
    switch(ch)
   {
    case 1:
	   printf("\n Enter the element :");
	   scanf("%d",&item);
	   add(item);
	   break;
   case 2:
	   delete();
	   break;
   case 3:
	   display();
	   break;
 default :
   exit(0);
   break;
   }
   printf("\n Do you want to conitnue(Y/N)");
   ans=getch();
   }
   while(ans=='Y'||ans=='y');
   getch();
 }