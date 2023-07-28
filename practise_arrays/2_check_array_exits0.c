// Check if a subarray with 0 sum exists or not

#include<stdio.h>
int main()
{
	int n,i,j,sum=0;
	printf("enter n value\n");
	scanf("%d",&n);
	int a[n];
	printf("enter values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(sum==0)
		{
			printf("subarray with zero exits\n");
			return 0;
		}

	}
		printf("subarray with zero doesnt exits\n");
		return 0;
}
