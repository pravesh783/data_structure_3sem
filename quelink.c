#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

struct list{
	char data;
	struct list *next;
	
};

typedef struct list node;
void qinsert(node**,node**);
void qdelete(node**,node**);
void display(node*);

void main(){
	int opt;
	char ch,ans;
		node*front;
	node*rear;
	front=rear=NULL;
	do{
			printf("\n 1.insert\n 2.delete\n 3.display\n 4.exit\n");
		printf("\n enter your choice :");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				qinsert(&front,&rear);
				break;
				case 2:
					qdelete(&front,&rear);
					break;
					case 3:
						display(front);
						break;
						case 4:
							exit(0);
										
				
					}
			printf("\n do you want to continue : ");
			ans=getche();
		}
		while(ans=='y'||ans=='Y');
	
		getch();
	}
		



void qinsert(node **front,node **rear)
{
	node *newnode;
	newnode=(node *)malloc(sizeof(node));
	newnode->next=NULL;
	printf("\nenter the character in queue :");
	fflush(stdin);
	scanf("%c",&(newnode->data));
	if(*front==NULL&&*rear==NULL)
	{
		*front=newnode;
		*rear=newnode;
	}
	else
	{
		(*rear)->next=newnode;
		*rear=newnode;
	}
	
}
void qdelete(node**front,node**rear){
	node *delnode;
	if(*front==NULL&&*rear==NULL)
	printf("queue is empty");
	else{
		delnode=*front;
		printf("%c",delnode);
		*front=(*front)->next;
		free(delnode);
	}
	
}
void display(node *front)
{
	while(front!=NULL){
		printf("%c",front->data);
		front=front->next;
	}
}
