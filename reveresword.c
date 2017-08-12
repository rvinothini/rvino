#include4<stdio.h>
#include<conio.h>
int main()
{
char text[10];
int i,j,n;
printf("Enter the number of text");
scanf("%d",&text);
n=strlen(text);
for(i=n;i>0;i--)
{
if(text[i-1]=''||text[i-1]='\0')
{
for(j=i;text[j]!='\0';j++)
{
printf("%d",text[j]);
}
}
}
}
