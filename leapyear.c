#include<stdio.h>
int main()
{
	int n;
	printf("enter year\n");
	scanf("%d",&n);
	if(n%4==0)
	{
		if(n%100==0)
		{
			if(n%400==0)
			{
				printf("year is leap year");
			}
			else
			{
				printf("year is not a leap year");
			}
		}
		else
		{
			printf("year is leap year");
		}
	}
	else
	{
		printf("year is not a leap year");
	}
return 0;
}
