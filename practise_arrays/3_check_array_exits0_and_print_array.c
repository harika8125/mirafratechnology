// Print all subarrays with 0 sum.


#include<stdio.h>
int main()
{
	int n,i,j,k,sum=0;
	printf("enter n value\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=i;j<n;j++)
		{
			sum=sum+a[j];
			if(sum==0)
			{
				printf("array elements are\n");
				for(k=i;k<=j;k++)
				{
					printf("%d\n",a[k]);
				}

		}
	}

}
}
