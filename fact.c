#include<stdio.h>
int main()
{
int fact,i,n;
printf("Enter the number");
scanf("%d",&n);
if(n<0)
printf("It is negative numbe");
else
{
for(i=1;i<=n;i++)
{
fact=fact*i;
printf("It is factorial number");
}
}
