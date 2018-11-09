#include<stdio.h>
void main()
{
int n,a[5][3],p[5]={0,0,0,0,0},i=0,b,index,k,c,m,flag;
printf("enter the number of buckets:\n");
scanf("%d",&n);
do
{
printf("\n1.insert 2. search 3. exit");
printf("\nEnter your choice:");
scanf("%d",&c);
switch(c)
{
case 1:
printf("\nEnter your number to insert:");
scanf("%d",&m);
index=m%n;
if(p[index]>=3)
{
printf("overflow in bucket%d",index);
}
else

{
a[index][p[index]]=m;
p[index]=p[index]+1;
}
break;
case 2:
flag=0;
printf("\nEnter your number to search:");
scanf("%d",&k);
b=k%n;
for(i=0;i<p[b];i++)
{
if(a[b][i]==k)
{
printf("FOUND AT BUCKET NO: %d",b);

flag=1;
}
}
if(flag==0)
printf("\nTHE ELEMENT NOT FOUND");
break;
case 3:
break;
default:
printf("\ninvalid choice");
break;
}
}while(c!=3);
}


