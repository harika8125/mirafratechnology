// Implement selection sorting.

#include<stdio.h>
int *sr(int a[],int n);
int main()
{
	int i,j,n;
	printf("enter array size\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sr(a,n);
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n");
}


int *sr(int a[],int n)
{
	static int i=0;
	int i,j,min=i
		if(i==(n-1))
		{
			return a;
		}

	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[min])
		{
			min=j;
		}
	}
	if(min!=i)
	{
		swap(&a[i],&a[min]);
	}
}

