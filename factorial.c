#include<stdio.h>
int factorial(int);
int main()
{
	int n;
	printf("entre a number\n");
	scanf("%d",&n);
	printf("factorial of number is %d",factorial(n));
	return 0;
}
int factorial(int x)
{
     static int prod=1;
	if(x==1)
		return 1;
	else
		prod=x*factorial(x-1);
           	return prod;
}	
