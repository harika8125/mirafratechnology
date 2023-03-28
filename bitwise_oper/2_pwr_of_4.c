//Given no. is even or odd: 

#include<stdio.h>
int main()
{
	int n,c;
	printf("enter a number\n");
	scanf("%d",&n);
	while((n&1)==0)
{
c++;
n>>=1;
}
if(n==1||(c&c%2==0))

	{
		printf("it is a power of 4\n");
	}
	else
	{
		printf("it is not a power of 4\n");
	}
}

