//Swap 2 no. using bit-wise:  x = x^y; y = x^y; x = x^y;

#include<stdio.h>
int main()
{
	int x,y;
	printf("enter two number\n");
	scanf("%d %d",&x,&y);
	printf("numbers before swap:x=%d,y=%d\n",x,y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("after swap:x=%d,y=%d\n",x,y);
}
