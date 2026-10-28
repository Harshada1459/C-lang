#include<stdio.h>
void main()
{
  int a,b,i;
  printf("enter the range:");
  scanf("%d%d",&a,&b);
  
  for(i=a; i<=b; i++)
  {
  	printf("%d\n",i*i*i);
  }
}

