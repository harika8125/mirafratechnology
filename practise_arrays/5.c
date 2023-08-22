// i/p=1 1 2 2  o/p= 1,2

#include<stdio.h>
int main()
{
	int n,i,j,c=0;
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
		c=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{			
				c++;
			
			}
		}
		
	
	if(c==1)
	{
		printf("dup=%d\n",a[i]);
	
}
}
}
