#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,j,n,temp;
clrscr();
printf("Enter how many element do you want to insert:");
scanf("%d",&n);
printf("Enter the element\n ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
 }
 }
 printf("sorted element is\n ");
 for(i=0;i<n;i++)
 printf("%d\n",a[i]);
 getch();
 }