#include<stdio.h>
int main()
{
	int x,y,product=0;
	printf("enter 2 numbers\n");
	scanf("%d %d",&x,&y);
	while(y!=0)
	{
		product=product+x;
		y--;
	}
	printf("product=%d\n",product);
}
