#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
printf("enter the sting");
gets(a);
strrev(a);
printf("reversed strng is %s",a);
return 0;
}
