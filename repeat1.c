#include <stdio.h>
#include <string.h>
void main()
{
char a[100], c[20][20];
int i, j = 0, k = 0, n, m;
printf("enter the string\n");
scanf("%[^\n]s", a);
for (i = 0;a[i] != '\0';i++)
{
if (a[i] == ' ')
{
c[k][j] = '\0';
k++;
j = 0;
}
else
{
c[k][j] = a[i];
j++;
}
}
c[k][j] = '\0';
for (i = 0;i <= k;i++)
{
for (j = i + 1;j <= k;j++)
{
if (strcmp(c[i], c[j]) == 0)
{
for (m = j;m <= k;m++)
strcpy(c[m], c[m + 1]);
k--;
}
}
}
for (n = 0;n <= k;n++)
{
printf("%s\n", c[n]);
}
}
