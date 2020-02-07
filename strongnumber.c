#include<stdio.h>
int fact(int);
int main()
{
	int n,r,m;
	int strnum=0;
	printf("enter a number\n");
	scanf("%d",&n);
        m=n;
	while(m!=0)
	{
	 r=m%10;
         strnum=strnum+fact(r);
         m=m/10;
       }
if(strnum==n)
        printf("the enter number is strong number");
else 
	printf("not a strong number");
return 0;
}
int fact(int a)
{
	int facto=1;
	if(a==1)
	{
		return 1;
	}
        facto=facto*a*fact(a-1);
	return facto;
}
