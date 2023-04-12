// Insertion sort using recursion.

#include<stdio.h>
int *isr(int a[],int n);
int main()
{
	int n,i;
	printf("enter array size\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	isr(a,n);
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}



int *isr(int a[],int n)
{
	static int i=1;
	int temp=a[i];
	int j=i-1;
	if(i==n)
		return a;
	while(j>=0&&a[j]>temp)
	{
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=temp;
	i++;
	return isr(a,n);
}


