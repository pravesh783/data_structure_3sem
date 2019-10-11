#include<stdio.h>
#include<conio.h>
#include<malloc.h>
 struct stack
 {
 int data;
 struct stack *next;
 };
 struct stack *top=NULL;
 struct stack *push(struct stack*,int);
 struct stack *pop(struct stack *);
 struct stack *display(struct stack *);
 void main()
 {
 int value,op;
 clrscr();
 do
 {
 printf("\n 1.push \n 2.pop\n 3.display\n 4.exit\n ");
 scanf("%d",&op);
 switch(op)
 {
 case 1:
 printf("enter the item to be pushed ");
 scanf("%d",&value);
 top=push(top,value);
 break;
 case 2:
 top=pop(top);
 break;
 case 3:
 top=display(top);
 break;
 case 4:
 exit(0);
 break;
 }
 }
 while(op!=5);
 getch();
 }
 struct stack *push(struct stack *top,int value)
 {
 struct stack *ptr;
 ptr=(struct stack*)malloc(sizeof(struct stack));
 ptr->data=value;
 if(top==NULL)
 {
 ptr->next=NULL;
 top=ptr;
 }
 else
 {
 ptr->next=top;
 top=ptr;
 }
 return top;
 }
 struct stack *pop(struct stack*top)
 {
 struct stack *ptr;
 ptr=top;
 if(top==NULL)
 printf("underflow");
 else
 {
 top=top->next;
 printf("the value being deleted is %d ",ptr->data);
 free(ptr);
 }
 return top;
 }

 struct stack *display(struct stack *top)
 {
 struct stack *ptr;
 ptr=top;
 if(top==NULL)
 printf("stack is empty ");
 else
 {
 while(ptr!=NULL)
 {
 printf("\n %d",ptr->data);
 ptr=ptr->next;
 }
 }
 return 0;
  }