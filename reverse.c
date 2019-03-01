
#include<stdio.h>
#include<string.h>
 
int main() 
{
   char a[100], b;
   int i, j = 0;
   printf("Enter the string");
   gets(a);
   i = 0;
   j = strlen(a) - 1;
  while (i < j)
  {
      b = a[i];
      a[i] = a[j];
      a[j] = b;
      i++;
      j--;
   }
  printf("Reverse string is :%s", a);
   return 0;
}
