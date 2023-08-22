#include<stdio.h>
int main()
{
	int sum=0,i,n,v;
	printf("enter n value\n");
	scanf("%d",&n);
	printf("enter values\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&v);
		sum=sum+v;
	}
	printf("%d",sum);
}
