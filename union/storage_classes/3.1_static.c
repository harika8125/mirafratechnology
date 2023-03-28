#include<stdio.h>
void display();
void main()
{
	display();
	display();
}

void display()
{
	static int x;
	int y=10;
	x+=10;
	y--;
	printf("%d\n",x);
	printf("%d\n",y);
}

