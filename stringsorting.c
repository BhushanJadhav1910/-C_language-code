#include<stdio.h>
#include<string.h>
int main()
{
  char arr[4][10]={
	             "white",
		     "red",
		     "blue",
		     "green"
  };
int i,j;
char temp[10];
printf("before sortig\n");
for(i=0;i<4;i++)
{
	printf("%s,",arr[i]);
}

for(i=0;i<4;i++)
{
	for(j=i+1;j<4;j++)
	{
		if(strcmp(arr[i],arr[j])>0)
		{
		   strcpy(temp,arr[i]);
		   strcpy(arr[i],arr[j]);
		   strcpy(arr[j],temp);
		}
	}
}
printf("after sorting\n");
for(i=0;i<4;i++)
{
	printf("%s,",arr[i]);
}
		   
}
