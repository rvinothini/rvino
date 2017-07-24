#include<stdio.h>
int main()
{
intn,rev=0,re;
printf("Enter the number of values');
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
printf("%d",rev);
}
