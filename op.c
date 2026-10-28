#include<stdio.h>
void main()
{
	int a,b,ans;
	char op;
	printf("enter your choice");
	scanf("%c",&op);
	printf("enter the two number");
	scanf("%d%d",&a,&b);
	
	switch(op)
	{
	  case '+':
	  	    {
	  	     ans=a+b;
	  	     printf("additon=%d",ans);
	  	     break;
	  	}
	  case '-':
	  	    {
	  	    ans=a-b;
			 printf("subsraction=%d",ans);
			 break; 	
			  }
	  	     
	}
}
