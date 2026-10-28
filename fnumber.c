#include<stdio.h>
void main()
{
  int a,b,c;
  printf("enter numbers:");
  scanf("%d%d%d",&a,&b,&c);
  
  if(a>b && a<c)
  {
  	printf("first number is between them");
  }
  else
  {
    printf("first number is not between them");  	
  }		
}
