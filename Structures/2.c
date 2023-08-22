#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	float salary;
};

void main()
{
	struct employee e1;
	printf("enter information of e1");
	scanf("%d %s %f",&e1.id,e1.name,&e1.salary);
}

