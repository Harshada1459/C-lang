#include<stdio.h>
void main()
{
	int month,days;
	printf("enter the month:");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1:
			{
			days=31;
			printf("january=%d",days);
			break;
        	}
        case 2:
			{
			days=28;
			printf("february=%d",days);	
			break;
			}
		
	}
}
