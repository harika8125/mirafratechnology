#include<stdio.h>
int main()
{
	int n;
	printf("enter n value\n");
	scanf("%x",&n);
	n=((n&0xf0)>>4)|((n&0x0f)<<4);
	printf("%x\n",n);
}
