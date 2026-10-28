#include<stdio.h>
void main()
{
   int num,d,sum;
   printf("enter number");
   scanf("%d",&num);
   
   d=num%10;
   while(num>=10)
   {
     num=num/10;   	
   }	
     sum=num+d;
     printf("sum of first and last digit=%d",sum);
}
