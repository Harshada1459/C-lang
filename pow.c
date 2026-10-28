#include<stdio.h>
void main()
{
 int x,y,i,ans=1;
 printf("enter the value:");
 scanf("%d",&x);
 printf("enter the value:"); 
 scanf("%d",&y);
 
 for(i=1; i<=y; i++)
 {
 	ans=ans*x;
 }	
   printf("%d\n",ans);	
}
