#include<stdio.h>
//const static int a;	// global static variable uninitialized
const static int b=25;   //global static variable initialized

const int m; 	// global const variable uninitialized
const int n=154;	// global const variable initialized

int main()
{

	const static int a;	// local static variable uninitialized
	const int x;	//local const variable uninitialized
	const int y=20; // local const variable initialized

	int *p=(int *)&a;
	printf("value is %d %d\n",*p,y);

	*p=30;
	printf("value is %d %d\n",*p,y);

	return 0;
}
