//Given no. is power of 2 or not

#include<stdio.h>
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	if((n&(n-1))==0)
	{
		printf("it is a power of 2\n");
	}
	else
	{
		printf("it is not a power of 2\n");
	}
}
