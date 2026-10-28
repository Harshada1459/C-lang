#include<stdio.h>
void main()
{
   int a[100],n,sum=0,avg,i;
   printf("enter limit:");
   scanf("%d",&n);
   
   for(i=0; i<n; i++)
   {
   	printf("enter number");
   	scanf("%d",&a[i]);
   	
   	sum=sum+a[i];
   }
   	 avg=sum/n;     
	printf("average=%d",avg);
	printf("sum=%d",sum);
}

