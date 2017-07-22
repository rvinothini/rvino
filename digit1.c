#include<stdio.h>
int main()
{
int i,n=0;
printf("Enter the integer");
scanf("%d",&i);
while(i!=0)
{
i=i/10;
++n;
}
printf("the number is:%d",++n);
}
