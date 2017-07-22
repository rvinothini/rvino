#include<stdio.h>
int main())
{
int i,n,flag=o;
printf("Enter the number");
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
if(n%i==0)
{
flag=1; 
return 0;
}
if(flag==0)
printf("The number is prime number");
else
printf("T he number is not prime number");
}
