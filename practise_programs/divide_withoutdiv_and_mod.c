#include<stdio.h>
int main()
{
	int n,d,c=0;
	printf("enter numerator and denominator\n");
	scanf("%d %d",&n,&d);
	while(n>=d)
	{
		n=n-d;
		c++;
	}
	printf("quotient=%d\n  remainder=%d\n",c,n);
}	
