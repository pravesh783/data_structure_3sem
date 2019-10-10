#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
int data;
struct node*link;
};
struct node *top=NULL,*temp;
void main()
{
int data,op;
clrscr();
while(1)
{
printf("\n 1.push\n 2.pop \n 3.display\n 4.exit");
printf("\n enter your choice ");
scanf("%d",&op);
switch(op)
{
case 1:
temp=(struct node*)malloc(sizeof(struct node));
printf("enter a node ");
scanf("%d",&data);
temp->data=data;
temp->link=top;
top=temp;
break;
case 2:
if(top!=NULL) {
printf("poped element is %d ",top->data);
top=top->link;
}
else
printf("stack is  undrflow ");
break;
case 3:
temp=top;
if(temp==NULL)
printf("stack is empty ");
else
{
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->link;
}}
break;
case 4:
break;
}
}
}