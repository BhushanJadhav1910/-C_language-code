#include<stdio.h>
int main(){
	unsigned int num = 0;
	unsigned int count = 0;
       printf("enter a decimal number to convert into binary\n");
       scanf("%ud",&num);
       printf("binary for enter decimal number is \n");
       while(count<32)
       {
	       (num & (0x80000000 >> count)?printf("1"):printf("0"));
	       count++;
       }
       return 0;
}
