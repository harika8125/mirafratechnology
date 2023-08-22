#include<stdio.h>
int main()
{
	int n,i;
	printf("enter n value\n");
	scanf("%d",&n);
	printf("even numbers are\n");
	for(i=0;i<=n;)
	{	
		printf("%d\n",i);
		i=i+2;
	}

	printf("odd numbers are\n");
	for(i=1;i<=n;)
	{
		printf("%d",i);
		i=i+2;
	}

}

