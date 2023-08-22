/*i/p 56734
o/p 34567*/


#include<stdio.h>
int main()
{
	int i,j,n,N;
	printf("enter n value\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter N value\n");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		for(j=n-1;j>i;j--)
		{
			int temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
