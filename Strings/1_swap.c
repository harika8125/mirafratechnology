//Swap 2 variables without 3rd variable   

#include<stdio.h>
int main()
{
	int p,q;
	printf("enter two numbers\n");
	scanf("%d %d",&p,&q);
	printf("p=%d q=%d\n",p,q);
	p=q+p;
	q=p-q;
	p=p-q;
	printf("p=%d q=%d\n",p,q);
}

