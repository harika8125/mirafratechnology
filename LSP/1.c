#include<stdio.h>
int print_bin(int n,int base);
int main()
{
	int n;
	printf("enter n value\n");
	scanf("%d",&n);
	int base=2;
	print_bin(n,base);
	printf("\n");
}
int printf(int n,int base)
{
	int remainder=n%base;
	if(n==0)
		return ;
	print_bin(n/base,base);
	if(remainder<2)
		printf("%d\n",remainder);
}
