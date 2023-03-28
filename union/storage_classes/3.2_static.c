#include<stdio.h>
static char ch;//static created globally but we r not initilizing
void display();
void main()
{
	display();
	display();
	printf("ch=%c",ch);
}

void display()
{
	static int x;
	int y=10;
	x=x+10;
	y--;
	printf("%d\n",x);
	printf("%d\n",y);
}
