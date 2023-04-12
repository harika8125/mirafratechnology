// Implement mergesort.

#include<stdio.h>
void ms(int a[],int lb,int mid,int ub);
void mergesort(int a[],int lb,int ub);
int main()
{
	int i,n;
	printf("Enter the array size : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the element of array: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	mergesort(arr,0,n-1);
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
}

void ms(int a[],int lb,int mid,int ub)
{
	int i,j,k,b[ub];
	i=lb;
	j=mid+1;
	k=lb;
	while(i<=mid && j<=ub)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
				i++;
			k++;
		}
	}
	for(k=lb;k<=ub;k++)
	{
		a[k]=b[k];
	}
}


void mergesort(int a[],int lb,int ub)
{
int mid;
if(lb<ub)
{
mid=(lb+ub)/2;
mergesort(a,lb,mid);
mergesort(a,mid+1,ub);
ms(a,lb,mid,ub);
}
}

