#include<stdio.h>
void main()
{
	int num,i,sum=0;
	printf("enter number");
	scanf("%d",&num);
	
	for(i=1; i<num; i++)
	{
	  if(num%i==0)
	  {
	  	sum=sum+i;
	  }
    }
	   if(num==sum)
	   {
	   	printf("it is a perfect number");
	   }
	   else
	   {
	   	printf("it is not perfect number");
	   }	
}
