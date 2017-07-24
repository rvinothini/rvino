#include<stdio.h>
int main()
{
int i,n,t1=0,t2=1,temp;
printf("Enter the number");
scanf("%d',&n);
printf("Enter the fibnoaci number");
for(i=1;i<n;i++)
{
temp=t1=t2;
t1=t2;
t2=temp;
}
}
