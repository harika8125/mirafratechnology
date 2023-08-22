//count no of 1's

#include<stdio.h>
int main()
{
	int n,count =0;
	printf("enter number\n");
	scanf("%d",&n);
	while(n>0)
	{
		//count++;
	     n=n&(n-1);
	     count++;
	}
	printf("%d",count);
}
