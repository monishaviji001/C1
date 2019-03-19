#include<stdio.h>
main()
{
  char a;
  printf(" enter the alpha");
  scanf("%c",&a);
  if((a>='a'&& a>='z')||(a>='A'&& a>='Z'))
  {
    printf("alpha");
  }
  else
  {
    printf("not");
  }
  return 0;
}
  

