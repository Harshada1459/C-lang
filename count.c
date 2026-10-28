#include<stdio.h>
void main()
{
   int num,n;
   printf("enter the number:");
   scanf("%d",&num);
   
   while(n<=10)
   {
   	 printf("\n%d*%d=%d",n,num,num*n);
   	 n++;
   }
    
}
