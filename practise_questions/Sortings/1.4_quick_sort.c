// Implement quicksort.

#include<stdio.h>
int partition(int a[],int lb,int ub);
void quicksort(int a[],int lb,int ub);
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

int main()
{
	int i,n;
	printf("Enter the array size : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the element of array: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	quicksort(arr,0,n-1);
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
}

int partition(int a[],int lb,int ub)
{
	int pivot,start,end;
	pivot=a[lb];
	start=lb;
	end=ub;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(&a[start],&a[end]);
		}
	}
	swap(&a[lb],&a[end]);
	return end;
}


void quicksort(int a[],int lb,int ub)
{
	int location;
	if(lb<ub)
	{
		location=partition(a,lb,ub);
		quicksort(a,lb,location-1);
		quicksort(a,location+1,ub);
	}
}

