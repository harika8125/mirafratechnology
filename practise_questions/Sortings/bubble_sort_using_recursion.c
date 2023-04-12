// Bubble sort using recursion.

#include<stdio.h>
int *bsr(int a[],int n);
int main()
{
	int n,i;
	printf("enter array size\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	bsr(a,n);
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");


}


int *bsr(int a[],int n)
{
	static int flag=1;
	int i,j;
	if(flag==0)
		return a;
	flag=0;		
	for(j=0;j<n-1;j++)
	{
		if(a[j]>a[j+1])
		{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			flag=1;
		}
	}

	return bsr(a,n-1);
}

