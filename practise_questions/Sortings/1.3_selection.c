//Implement Selection sort.

#include<stdio.h>
void swap(int *a,int *b);
int main()
{
	int i,j,n; 
	printf("enter array size\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		int min=i;
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
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

