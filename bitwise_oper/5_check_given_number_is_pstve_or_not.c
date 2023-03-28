//Check if the given no. is –ve :  

#include<stdio.h>
int main()
{
	int x;
	printf("enter a number\n");
	scanf("%d",&x);
		if(((x>>31)&1)==1)
			printf("the given number is negative\n");
		else
			printf("the given number is positive\n");
}
