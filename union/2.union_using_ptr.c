#include<stdio.h>
union abc
{
	int a;
	char b;
	float c;
};

void main()
{
	union abc u;
	union abc *ptr=&u;
	ptr->a=1;
	ptr->b=97;
	ptr->c=9.90;
	printf("a=%d\t",ptr->a);
	printf("b=%c\t",ptr->b);
	printf("c=%f\n",ptr->c);
}

