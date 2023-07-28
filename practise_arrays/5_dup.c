// i/p=1 1 2 2  o/p= 1,2

#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter n value\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{			
				printf("dup %d\n",a[j]);
				for(k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}
				n--;

			}
		}
		
	}
	
}
