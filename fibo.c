#include<stdio.h>
void main()
{
  int f=0,s=1,t,n,i;
  printf("enter limit");
  scanf("%d",&n);
  
  printf("%d ",f);
  printf("%d ",s);
  
  for(i=0; i<=n; i++)
  {
  	t=f+s;
  	printf("\n%d",t);
  	f=s;
	s=t;
  }		
}
