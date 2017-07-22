#include<stdio.h>
int main()
{
int i=1,exponent,base;
printf("Enter the number of base values");
scanf("%d",&base);
printf("Enter the number of exponent values');
scanf("%d',&exponent);
while(exponent!=0)
{
i *=base;
--exponent;
}
printf("The poer value is:%d",i);
}
