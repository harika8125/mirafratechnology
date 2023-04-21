/*#include<stdio.h>
int main()
{
int i,n,rem;
printf("enter the number\n");
scanf("%d",&n);
for(i=0;i<32;i++)
{
int rem=n>>i;
if(rem&1==1)
printf("1");
else
printf("0");
}
}*/


#include<stdio.h>
int main()
{
	int i,x,rem;
	printf("enter the num\n");
	scanf("%d",&x);
	for(i=0;i<32;i++)
	{
		int rem=x>>i;
		if(rem&1==1)
			printf("1");
		else
			printf("0");
	}
}
