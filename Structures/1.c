#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	float salary;
}e3={4};

struct employee e1={1,"harika",4.0};
        struct employee e2;


void main()
{
//	struct employee e1={1,"harika",4.0};
//	struct employee e2;
	e2=e1;
	printf("%d %s %f",e1.id,e1.name,e1.salary);
	printf("%d %s %f",e2.id,e2.name,e2.salary);

	printf("%d %s %f",e3.id,e3.name,e3.salary);
}

