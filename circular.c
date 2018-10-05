#include<stdio.h>
int a[10];
void main()
{
int n,i,item,ch;
printf("Enter the number of elements:");
scanf("%d",&n);
int front=-1,rear=-1;
do
{
printf("\n1. ADD 2.DELETE 3.DISPLAY 4.EXIT");
printf("Enter the choice :");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("Enter the element:");
scanf("%d",&item);
if( (front == rear + 1) || (front == 0 && rear == n-1))
printf("The Queue is full");
else
{
if(front == -1) front = 0;
rear = (rear + 1)%n;
a[rear] = item;
printf("\n Inserted -> %d", item);;
}
break;
case 2:
if(front == -1)
printf("\nCircular Queue is Empty! Deletion is not possible!!!\n");
else{
item = a[front];
if (front == rear){
front = -1;
rear = -1;
}
else {
front = (front + 1)%n;

}
printf("\n Deleted element -> %d \n", item);
}
break;
case 3:

if(front == -1)
printf(" \n Empty Queue\n");
else
{
printf("Enter the element in Queue are:\n");
for( i = front; i!=rear; i=(i+1)%n)
{
printf("%d ",a[i]);
}
printf("%d ",a[i]);
}
break;
default:
printf("\nInvalid choice");
break;
}
}while(ch!=4);
}
