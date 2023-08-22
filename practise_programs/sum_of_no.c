#include<stdio.h>
int main()
{
	int sum=0,i,n;
	printf("enter n value\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d\n",sum);
}
