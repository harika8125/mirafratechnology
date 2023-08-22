#include<stdio.h>
int main()
{
	int i,x;
	printf("enter a table number\n");
	scanf("%d",&x);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d =%d\n",x,i,x*i);
	}
}
