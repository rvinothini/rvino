#include<stdi.h>
int main()
{
int i,sum=0,reverse,n,temp;
printf("Enter the number ");
scanf("%d",&n);
temp=n;
while(n!=0)
{
i=n%10;
sum=sum*10+i;
n=n/10;
}
if(sum==temp)
printf("The number is palindrome");
else
printf("The number is not an palidrome");
}
