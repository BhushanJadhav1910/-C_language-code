#include<stdio.h>
int main()
{
	int n,r,q,arr[10];
	scanf("%d",&n);
	int count=0;
	while(n!=0)
	{
          arr[count++]=n%2;
	  n=n/2;
	}
	for(r=count-1;r>=0;r--)
	{
		printf("%d",arr[r]);
	}
	return 0;
}
