#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct link
{
int info;
struct link *next;
};

int i;
struct link *start=NULL;
void createlist(struct link*);
void displaylist(struct link*);
void createlist(struct link *node)
{
char ch;
printf("input n for break\n ");
i=0;
ch=getchar();
while(ch!='n')
{
printf("input the node %d ",i+1);
scanf("%d",&node->info);
node->next=(struct link*)malloc(sizeof(struct link));
node=node->next;
node->next=start;
i++;
printf("enter choice n for break \n");
ch=getchar();
}
}
void displaylist(struct link*node)
{
printf("linked list ");
while(node)
{
printf("%d",node->info);
node=node->next;
}
}
void main()
{
struct link *node=(struct link*)malloc(sizeof(struct link));
clrscr();
start=node;
createlist(start);
displaylist(start);
getch();
}