#include<stdio.h>
int main()
{
	double n;
	printf("enter a number\n");
        scanf("%lf",&n);
	if(n<=0)
	{
		if(n==0){
			printf("enter number is 0");
		}
		else {
			printf("enter number is negative number");
		}
	}
	else
	{
		printf("enter number is positive number");
	}
	return 0;
}

