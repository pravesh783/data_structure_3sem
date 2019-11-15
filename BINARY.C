#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct bin{
int data;
struct bin *left;
struct bin *right;
}node;
void insert (node *root,node *New)
{
char ch;
printf("\nWhere to insert L/R of %d :",root->data);
ch=getche();
if((ch=='r')||(ch=='R'))
  {
   if(root->right==NULL)
     {
      root->right=New;
      }
else{
      insert(root->right,New);
      }
}
 else{
      if(root->left==NULL)
	{
	 root->left=New;
	 }
	else
	    {
	    insert(root->left,New);
	    }
      }
    }

node *getnode()
{
   node *temp;
   temp=(node*)malloc(sizeof(node));
   temp->left=NULL;
   temp->right=NULL;
   return temp;
   }
   void inorder(node *temp){
	if(temp!=NULL)
	  {
	    inorder(temp->left);
	    printf("%d ",temp->data);
	    inorder(temp->right);
	   }
	 }
  void preorder(node *temp){
	if(temp!=NULL)
	  {

	    printf("%d ",temp->data);
	    preorder(temp->left);
	    preorder(temp->right);
	   }

	}
 void postorder(node *temp){
	if(temp!=NULL)
	  {
	    postorder(temp->left);
	    postorder(temp->right);
	    printf("%d ",temp->data);
	   }
	 }

 void insert(node*,node*);
 void inorder(node*);
 void preorder(node*);
 void postorder(node*);
 node *getnode();

 void main()
 {
   int choice;
   char ans;
   node *New,*root;
   root=NULL;
   clrscr();
   do
     {
       printf("\n 1.create\n 2.Inorder\n 3.preorder\n 4.postorder 5. exit \n ");
       printf("enter your choice :");
       scanf("%d",&choice);
       switch(choice)
	    {
	      case 1:
		     root=NULL;
		     do
			{
			 New=getnode();
			 printf("\nEnter the element :");
			 scanf("%d",&New->data);
			 if(root==NULL)
			  {
			   root=New;
			  }
			  else{
			     insert(root,New);
			      }
				printf("\n Do you want to continue Y/ N :");
			       ans=getche();
			   }
			  while(ans=='Y'||ans=='y');
			  break;
	     case 2:
		    if(root==NULL)
		       printf("\ntree is not created");
		    else
		       inorder(root);
		       break;
	     case 3:
		    if(root==NULL)
		      printf("\nTree is not created");
		    else
		       preorder(root);
		       break;
	     case 4:
		    if(root==NULL)
		      printf("\ntree is not created ");
		    else
		       postorder(root);
		       break;
	     case 5:
		    exit(0);

	 }
	  printf("\n do you want to conuinue Y/N:");
	    ans=getche();
    }
     while(ans=='y'||ans=='Y');
	  ans=getche();
	  }




