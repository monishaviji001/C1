#include<stdio.h>
int main()
{
char a[100];
int i;
scanf("%c",&a);
for(i=0;a[i]!=0;i++)
{
printf("%c",a[i]);
}
printf(".");
return 0;
}
