#include<stdio.h>
int main()
{
	int temp, n,i,j,s=5;
	printf("enter n value\n");
	scanf("%d",&n);
	int a[n];
	int c=0;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			 temp=a[i]+a[j];
	
			if(s==temp)
			{
				printf("%d %d\n",a[i],a[j]);
				c++;
				
			}
		}
	}		
		if(c==0)
					printf("cannot found\n");
	

}

