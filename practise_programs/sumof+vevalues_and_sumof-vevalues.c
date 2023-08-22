#include<stdio.h>
int main()
{
	int i,n,v,p_sum=0,n_sum=0;
	printf("enter n value\n");
	scanf("%d",&n);
	printf("enter values\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&v);
		if(v>0)
			p_sum = p_sum + v;
		else if (v<0)
			n_sum = n_sum + v;
	}
	printf("p_sum %d\n n_sum %d\n",p_sum , n_sum);
}
