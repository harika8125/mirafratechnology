#include<stdio.h>
int main()
{
	int a,b,i,j;
	printf("enter two numbers\n");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
			if(i%2==0)
				printf("%d even\n",i);
			else
				printf("%d odd\n",i);
		}
	
}
