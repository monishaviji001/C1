#include<stdio.h>
main()
{
  int i,n,a=1;
  scanf("d",&n);
  for(i=1;i<=n;i++)
  {
    a=a*i;
  }
  printf("%di s %d",a,n);
}

