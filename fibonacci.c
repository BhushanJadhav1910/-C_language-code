#include<stdio.h>
int main()
{
	int x1 = 0,x2 = 1,n,x3;
	
	printf("enter the length of fibonacci series");
	scanf("%d",&n);
	printf("fibonacci series is 0,1,");
	for(int i=0;i<n-2;i++)
	{
            x3=x1+x2;
	    x1=x2;
	    x2=x3;
	    printf("%d,",x3);
	}
	return 0;
}
