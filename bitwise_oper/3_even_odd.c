//Given no. is even or odd: 

#include<stdio.h>
int main()
{
	int x;
	printf("enter a number\n");
	scanf("%d",&x);
	if(x&(0x01|0x00))
		printf("number is odd\n");
	else
		printf("number is even\n");
}
